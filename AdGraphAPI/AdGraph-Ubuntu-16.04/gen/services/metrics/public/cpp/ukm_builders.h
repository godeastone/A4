
// Generated from gen_builders.py.  DO NOT EDIT!
// source: ukm.xml

#ifndef SERVICES_METRICS_PUBLIC_CPP_UKM_BUILDERS_H
#define SERVICES_METRICS_PUBLIC_CPP_UKM_BUILDERS_H

#include <cstdint>

#include "services/metrics/public/cpp/ukm_entry_builder_base.h"

namespace ukm {
namespace builders {


class AbusiveExperienceHeuristic final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  AbusiveExperienceHeuristic(ukm::SourceId source_id);
  ~AbusiveExperienceHeuristic() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(4325886147604803651);


  static const char kDidTabUnderName[];
  static constexpr uint64_t kDidTabUnderNameHash = UINT64_C(1632877231929054164);
  AbusiveExperienceHeuristic& SetDidTabUnder(int64_t value);

};

class Autofill_CardUploadDecision final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_CardUploadDecision(ukm::SourceId source_id);
  ~Autofill_CardUploadDecision() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(3597047501124112026);


  static const char kUploadDecisionName[];
  static constexpr uint64_t kUploadDecisionNameHash = UINT64_C(1530202151366371243);
  Autofill_CardUploadDecision& SetUploadDecision(int64_t value);

};

class Autofill_DeveloperEngagement final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_DeveloperEngagement(ukm::SourceId source_id);
  ~Autofill_DeveloperEngagement() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(14550063303370974566);


  static const char kDeveloperEngagementName[];
  static constexpr uint64_t kDeveloperEngagementNameHash = UINT64_C(15538334115650657597);
  Autofill_DeveloperEngagement& SetDeveloperEngagement(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_DeveloperEngagement& SetFormSignature(int64_t value);

  static const char kFormTypesName[];
  static constexpr uint64_t kFormTypesNameHash = UINT64_C(10767409811320878147);
  Autofill_DeveloperEngagement& SetFormTypes(int64_t value);

  static const char kIsForCreditCardName[];
  static constexpr uint64_t kIsForCreditCardNameHash = UINT64_C(15493515522068288455);
  Autofill_DeveloperEngagement& SetIsForCreditCard(int64_t value);

};

class Autofill_FieldFillStatus final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_FieldFillStatus(ukm::SourceId source_id);
  ~Autofill_FieldFillStatus() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(11456448948041474991);


  static const char kFieldSignatureName[];
  static constexpr uint64_t kFieldSignatureNameHash = UINT64_C(12548035803827306811);
  Autofill_FieldFillStatus& SetFieldSignature(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_FieldFillStatus& SetFormSignature(int64_t value);

  static const char kIsAutofilledName[];
  static constexpr uint64_t kIsAutofilledNameHash = UINT64_C(17551275327964504767);
  Autofill_FieldFillStatus& SetIsAutofilled(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_FieldFillStatus& SetMillisecondsSinceFormParsed(int64_t value);

  static const char kPredictionSourceName[];
  static constexpr uint64_t kPredictionSourceNameHash = UINT64_C(5017294346205954242);
  Autofill_FieldFillStatus& SetPredictionSource(int64_t value);

  static const char kValidationEventName[];
  static constexpr uint64_t kValidationEventNameHash = UINT64_C(17361557898566789372);
  Autofill_FieldFillStatus& SetValidationEvent(int64_t value);

  static const char kWasPreviouslyAutofilledName[];
  static constexpr uint64_t kWasPreviouslyAutofilledNameHash = UINT64_C(1646712375187153208);
  Autofill_FieldFillStatus& SetWasPreviouslyAutofilled(int64_t value);

};

class Autofill_FieldTypeValidation final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_FieldTypeValidation(ukm::SourceId source_id);
  ~Autofill_FieldTypeValidation() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(1290380890049589579);


  static const char kActualTypeName[];
  static constexpr uint64_t kActualTypeNameHash = UINT64_C(4245305632546756744);
  Autofill_FieldTypeValidation& SetActualType(int64_t value);

  static const char kFieldSignatureName[];
  static constexpr uint64_t kFieldSignatureNameHash = UINT64_C(12548035803827306811);
  Autofill_FieldTypeValidation& SetFieldSignature(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_FieldTypeValidation& SetFormSignature(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_FieldTypeValidation& SetMillisecondsSinceFormParsed(int64_t value);

  static const char kPredictedTypeName[];
  static constexpr uint64_t kPredictedTypeNameHash = UINT64_C(13118965333595910063);
  Autofill_FieldTypeValidation& SetPredictedType(int64_t value);

  static const char kPredictionSourceName[];
  static constexpr uint64_t kPredictionSourceNameHash = UINT64_C(5017294346205954242);
  Autofill_FieldTypeValidation& SetPredictionSource(int64_t value);

  static const char kValidationEventName[];
  static constexpr uint64_t kValidationEventNameHash = UINT64_C(17361557898566789372);
  Autofill_FieldTypeValidation& SetValidationEvent(int64_t value);

};

class Autofill_FormSubmitted final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_FormSubmitted(ukm::SourceId source_id);
  ~Autofill_FormSubmitted() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12791011001011085363);


  static const char kAutofillFormSubmittedStateName[];
  static constexpr uint64_t kAutofillFormSubmittedStateNameHash = UINT64_C(4964829566871574464);
  Autofill_FormSubmitted& SetAutofillFormSubmittedState(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_FormSubmitted& SetFormSignature(int64_t value);

  static const char kFormTypesName[];
  static constexpr uint64_t kFormTypesNameHash = UINT64_C(10767409811320878147);
  Autofill_FormSubmitted& SetFormTypes(int64_t value);

  static const char kIsForCreditCardName[];
  static constexpr uint64_t kIsForCreditCardNameHash = UINT64_C(15493515522068288455);
  Autofill_FormSubmitted& SetIsForCreditCard(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_FormSubmitted& SetMillisecondsSinceFormParsed(int64_t value);

};

class Autofill_InteractedWithForm final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_InteractedWithForm(ukm::SourceId source_id);
  ~Autofill_InteractedWithForm() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12943113565528625214);


  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_InteractedWithForm& SetFormSignature(int64_t value);

  static const char kFormTypesName[];
  static constexpr uint64_t kFormTypesNameHash = UINT64_C(10767409811320878147);
  Autofill_InteractedWithForm& SetFormTypes(int64_t value);

  static const char kIsForCreditCardName[];
  static constexpr uint64_t kIsForCreditCardNameHash = UINT64_C(15493515522068288455);
  Autofill_InteractedWithForm& SetIsForCreditCard(int64_t value);

  static const char kLocalRecordTypeCountName[];
  static constexpr uint64_t kLocalRecordTypeCountNameHash = UINT64_C(4967504613046448052);
  Autofill_InteractedWithForm& SetLocalRecordTypeCount(int64_t value);

  static const char kServerRecordTypeCountName[];
  static constexpr uint64_t kServerRecordTypeCountNameHash = UINT64_C(7268279397149312763);
  Autofill_InteractedWithForm& SetServerRecordTypeCount(int64_t value);

};

class Autofill_SelectedMaskedServerCard final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_SelectedMaskedServerCard(ukm::SourceId source_id);
  ~Autofill_SelectedMaskedServerCard() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(625473411318246968);


  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_SelectedMaskedServerCard& SetMillisecondsSinceFormParsed(int64_t value);

};

class Autofill_SuggestionFilled final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_SuggestionFilled(ukm::SourceId source_id);
  ~Autofill_SuggestionFilled() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(17703268464688884622);


  static const char kFieldSignatureName[];
  static constexpr uint64_t kFieldSignatureNameHash = UINT64_C(12548035803827306811);
  Autofill_SuggestionFilled& SetFieldSignature(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_SuggestionFilled& SetFormSignature(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_SuggestionFilled& SetMillisecondsSinceFormParsed(int64_t value);

  static const char kRecordTypeName[];
  static constexpr uint64_t kRecordTypeNameHash = UINT64_C(2556852903161176255);
  Autofill_SuggestionFilled& SetRecordType(int64_t value);

};

class Autofill_SuggestionsShown final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_SuggestionsShown(ukm::SourceId source_id);
  ~Autofill_SuggestionsShown() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(7579660929739851736);


  static const char kFieldSignatureName[];
  static constexpr uint64_t kFieldSignatureNameHash = UINT64_C(12548035803827306811);
  Autofill_SuggestionsShown& SetFieldSignature(int64_t value);

  static const char kFormSignatureName[];
  static constexpr uint64_t kFormSignatureNameHash = UINT64_C(4815584921581567107);
  Autofill_SuggestionsShown& SetFormSignature(int64_t value);

  static const char kHeuristicTypeName[];
  static constexpr uint64_t kHeuristicTypeNameHash = UINT64_C(17234680850427059129);
  Autofill_SuggestionsShown& SetHeuristicType(int64_t value);

  static const char kHtmlFieldTypeName[];
  static constexpr uint64_t kHtmlFieldTypeNameHash = UINT64_C(13021611540219886097);
  Autofill_SuggestionsShown& SetHtmlFieldType(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_SuggestionsShown& SetMillisecondsSinceFormParsed(int64_t value);

  static const char kServerTypeName[];
  static constexpr uint64_t kServerTypeNameHash = UINT64_C(3640361506783159573);
  Autofill_SuggestionsShown& SetServerType(int64_t value);

};

class Autofill_TextFieldDidChange final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Autofill_TextFieldDidChange(ukm::SourceId source_id);
  ~Autofill_TextFieldDidChange() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(8376184896509210883);


  static const char kFieldTypeGroupName[];
  static constexpr uint64_t kFieldTypeGroupNameHash = UINT64_C(4771816394504495494);
  Autofill_TextFieldDidChange& SetFieldTypeGroup(int64_t value);

  static const char kHeuristicTypeName[];
  static constexpr uint64_t kHeuristicTypeNameHash = UINT64_C(17234680850427059129);
  Autofill_TextFieldDidChange& SetHeuristicType(int64_t value);

  static const char kHtmlFieldModeName[];
  static constexpr uint64_t kHtmlFieldModeNameHash = UINT64_C(15151906885863383301);
  Autofill_TextFieldDidChange& SetHtmlFieldMode(int64_t value);

  static const char kHtmlFieldTypeName[];
  static constexpr uint64_t kHtmlFieldTypeNameHash = UINT64_C(13021611540219886097);
  Autofill_TextFieldDidChange& SetHtmlFieldType(int64_t value);

  static const char kIsAutofilledName[];
  static constexpr uint64_t kIsAutofilledNameHash = UINT64_C(17551275327964504767);
  Autofill_TextFieldDidChange& SetIsAutofilled(int64_t value);

  static const char kIsEmptyName[];
  static constexpr uint64_t kIsEmptyNameHash = UINT64_C(13334288173870607265);
  Autofill_TextFieldDidChange& SetIsEmpty(int64_t value);

  static const char kMillisecondsSinceFormParsedName[];
  static constexpr uint64_t kMillisecondsSinceFormParsedNameHash = UINT64_C(822617360850595330);
  Autofill_TextFieldDidChange& SetMillisecondsSinceFormParsed(int64_t value);

  static const char kServerTypeName[];
  static constexpr uint64_t kServerTypeNameHash = UINT64_C(3640361506783159573);
  Autofill_TextFieldDidChange& SetServerType(int64_t value);

};

class Blink_UpdateTime final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Blink_UpdateTime(ukm::SourceId source_id);
  ~Blink_UpdateTime() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(397568092790313676);


  static const char kCompositing_AverageName[];
  static constexpr uint64_t kCompositing_AverageNameHash = UINT64_C(3896172888357962827);
  Blink_UpdateTime& SetCompositing_Average(int64_t value);

  static const char kCompositing_WorstCaseName[];
  static constexpr uint64_t kCompositing_WorstCaseNameHash = UINT64_C(9446366701067550712);
  Blink_UpdateTime& SetCompositing_WorstCase(int64_t value);

  static const char kIntersectionObservation_AverageName[];
  static constexpr uint64_t kIntersectionObservation_AverageNameHash = UINT64_C(15439846995905336989);
  Blink_UpdateTime& SetIntersectionObservation_Average(int64_t value);

  static const char kIntersectionObservation_WorstCaseName[];
  static constexpr uint64_t kIntersectionObservation_WorstCaseNameHash = UINT64_C(11554176511747424905);
  Blink_UpdateTime& SetIntersectionObservation_WorstCase(int64_t value);

  static const char kPaint_AverageName[];
  static constexpr uint64_t kPaint_AverageNameHash = UINT64_C(12018502997183414205);
  Blink_UpdateTime& SetPaint_Average(int64_t value);

  static const char kPaint_WorstCaseName[];
  static constexpr uint64_t kPaint_WorstCaseNameHash = UINT64_C(16083049690456465025);
  Blink_UpdateTime& SetPaint_WorstCase(int64_t value);

  static const char kPrePaint_AverageName[];
  static constexpr uint64_t kPrePaint_AverageNameHash = UINT64_C(5688364809731624973);
  Blink_UpdateTime& SetPrePaint_Average(int64_t value);

  static const char kPrePaint_WorstCaseName[];
  static constexpr uint64_t kPrePaint_WorstCaseNameHash = UINT64_C(1674970687489093439);
  Blink_UpdateTime& SetPrePaint_WorstCase(int64_t value);

  static const char kStyleAndLayout_AverageName[];
  static constexpr uint64_t kStyleAndLayout_AverageNameHash = UINT64_C(13444543360470383170);
  Blink_UpdateTime& SetStyleAndLayout_Average(int64_t value);

  static const char kStyleAndLayout_WorstCaseName[];
  static constexpr uint64_t kStyleAndLayout_WorstCaseNameHash = UINT64_C(1493419676550557886);
  Blink_UpdateTime& SetStyleAndLayout_WorstCase(int64_t value);

};

class Blink_UseCounter final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Blink_UseCounter(ukm::SourceId source_id);
  ~Blink_UseCounter() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16486120572686381376);


  static const char kFeatureName[];
  static constexpr uint64_t kFeatureNameHash = UINT64_C(2378497229593503977);
  Blink_UseCounter& SetFeature(int64_t value);

};

class Compositor_UserInteraction final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Compositor_UserInteraction(ukm::SourceId source_id);
  ~Compositor_UserInteraction() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(3378172330402895005);


  static const char kCheckerboardedContentAreaName[];
  static constexpr uint64_t kCheckerboardedContentAreaNameHash = UINT64_C(18364704041698110260);
  Compositor_UserInteraction& SetCheckerboardedContentArea(int64_t value);

  static const char kCheckerboardedContentAreaRatioName[];
  static constexpr uint64_t kCheckerboardedContentAreaRatioNameHash = UINT64_C(6812281970879011502);
  Compositor_UserInteraction& SetCheckerboardedContentAreaRatio(int64_t value);

  static const char kCheckerboardedImagesCountName[];
  static constexpr uint64_t kCheckerboardedImagesCountNameHash = UINT64_C(1155611193130623091);
  Compositor_UserInteraction& SetCheckerboardedImagesCount(int64_t value);

  static const char kNumMissingTilesName[];
  static constexpr uint64_t kNumMissingTilesNameHash = UINT64_C(14477360290938608899);
  Compositor_UserInteraction& SetNumMissingTiles(int64_t value);

};

class Compositor_Rendering final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Compositor_Rendering(ukm::SourceId source_id);
  ~Compositor_Rendering() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(18003859069234917647);


  static const char kCheckerboardedImagesCountName[];
  static constexpr uint64_t kCheckerboardedImagesCountNameHash = UINT64_C(1155611193130623091);
  Compositor_Rendering& SetCheckerboardedImagesCount(int64_t value);

};

class ContextualSearch final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  ContextualSearch(ukm::SourceId source_id);
  ~ContextualSearch() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(14879419826968794335);


  static const char kDidOptInName[];
  static constexpr uint64_t kDidOptInNameHash = UINT64_C(12640784127050914995);
  ContextualSearch& SetDidOptIn(int64_t value);

  static const char kDurationAfterScrollMsName[];
  static constexpr uint64_t kDurationAfterScrollMsNameHash = UINT64_C(9693963647701472728);
  ContextualSearch& SetDurationAfterScrollMs(int64_t value);

  static const char kFontSizeName[];
  static constexpr uint64_t kFontSizeNameHash = UINT64_C(2643658496925572245);
  ContextualSearch& SetFontSize(int64_t value);

  static const char kIsEntityName[];
  static constexpr uint64_t kIsEntityNameHash = UINT64_C(7662372954863476590);
  ContextualSearch& SetIsEntity(int64_t value);

  static const char kIsEntityEligibleName[];
  static constexpr uint64_t kIsEntityEligibleNameHash = UINT64_C(14648358556369473398);
  ContextualSearch& SetIsEntityEligible(int64_t value);

  static const char kIsHttpName[];
  static constexpr uint64_t kIsHttpNameHash = UINT64_C(1002302620744868215);
  ContextualSearch& SetIsHttp(int64_t value);

  static const char kIsLanguageMismatchName[];
  static constexpr uint64_t kIsLanguageMismatchNameHash = UINT64_C(2255335648555969039);
  ContextualSearch& SetIsLanguageMismatch(int64_t value);

  static const char kIsLongWordName[];
  static constexpr uint64_t kIsLongWordNameHash = UINT64_C(18148517952477547345);
  ContextualSearch& SetIsLongWord(int64_t value);

  static const char kIsSecondTapOverrideName[];
  static constexpr uint64_t kIsSecondTapOverrideNameHash = UINT64_C(8788769137190271820);
  ContextualSearch& SetIsSecondTapOverride(int64_t value);

  static const char kIsShortWordName[];
  static constexpr uint64_t kIsShortWordNameHash = UINT64_C(7992627050111663729);
  ContextualSearch& SetIsShortWord(int64_t value);

  static const char kIsWordEdgeName[];
  static constexpr uint64_t kIsWordEdgeNameHash = UINT64_C(7068207925783210246);
  ContextualSearch& SetIsWordEdge(int64_t value);

  static const char kOutcomeRankerDidPredictName[];
  static constexpr uint64_t kOutcomeRankerDidPredictNameHash = UINT64_C(1223460898641686759);
  ContextualSearch& SetOutcomeRankerDidPredict(int64_t value);

  static const char kOutcomeRankerPredictionName[];
  static constexpr uint64_t kOutcomeRankerPredictionNameHash = UINT64_C(15532279510849044424);
  ContextualSearch& SetOutcomeRankerPrediction(int64_t value);

  static const char kOutcomeWasCardsDataShownName[];
  static constexpr uint64_t kOutcomeWasCardsDataShownNameHash = UINT64_C(10586318365375462202);
  ContextualSearch& SetOutcomeWasCardsDataShown(int64_t value);

  static const char kOutcomeWasPanelOpenedName[];
  static constexpr uint64_t kOutcomeWasPanelOpenedNameHash = UINT64_C(1283040101353376836);
  ContextualSearch& SetOutcomeWasPanelOpened(int64_t value);

  static const char kOutcomeWasQuickActionClickedName[];
  static constexpr uint64_t kOutcomeWasQuickActionClickedNameHash = UINT64_C(4665494976417872953);
  ContextualSearch& SetOutcomeWasQuickActionClicked(int64_t value);

  static const char kOutcomeWasQuickAnswerSeenName[];
  static constexpr uint64_t kOutcomeWasQuickAnswerSeenNameHash = UINT64_C(107968630341396949);
  ContextualSearch& SetOutcomeWasQuickAnswerSeen(int64_t value);

  static const char kPortionOfElementName[];
  static constexpr uint64_t kPortionOfElementNameHash = UINT64_C(16285840641082868632);
  ContextualSearch& SetPortionOfElement(int64_t value);

  static const char kPrevious28DayCtrPercentName[];
  static constexpr uint64_t kPrevious28DayCtrPercentNameHash = UINT64_C(959880084996189379);
  ContextualSearch& SetPrevious28DayCtrPercent(int64_t value);

  static const char kPrevious28DayImpressionsCountName[];
  static constexpr uint64_t kPrevious28DayImpressionsCountNameHash = UINT64_C(15760577507068659896);
  ContextualSearch& SetPrevious28DayImpressionsCount(int64_t value);

  static const char kPreviousWeekCtrPercentName[];
  static constexpr uint64_t kPreviousWeekCtrPercentNameHash = UINT64_C(10178724284129317201);
  ContextualSearch& SetPreviousWeekCtrPercent(int64_t value);

  static const char kPreviousWeekImpressionsCountName[];
  static constexpr uint64_t kPreviousWeekImpressionsCountNameHash = UINT64_C(9621288479571652806);
  ContextualSearch& SetPreviousWeekImpressionsCount(int64_t value);

  static const char kScreenTopDpsName[];
  static constexpr uint64_t kScreenTopDpsNameHash = UINT64_C(12683906349255072392);
  ContextualSearch& SetScreenTopDps(int64_t value);

  static const char kTapDurationMsName[];
  static constexpr uint64_t kTapDurationMsNameHash = UINT64_C(9435816688821705322);
  ContextualSearch& SetTapDurationMs(int64_t value);

  static const char kWasScreenBottomName[];
  static constexpr uint64_t kWasScreenBottomNameHash = UINT64_C(8966660250732563679);
  ContextualSearch& SetWasScreenBottom(int64_t value);

};

class ContextualSuggestions final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  ContextualSuggestions(ukm::SourceId source_id);
  ~ContextualSuggestions() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(93819929085085325);


  static const char kAnyDownloadedName[];
  static constexpr uint64_t kAnyDownloadedNameHash = UINT64_C(94336446995394813);
  ContextualSuggestions& SetAnyDownloaded(int64_t value);

  static const char kAnySuggestionTakenName[];
  static constexpr uint64_t kAnySuggestionTakenNameHash = UINT64_C(10940113166105920790);
  ContextualSuggestions& SetAnySuggestionTaken(int64_t value);

  static const char kClosedFromPeekName[];
  static constexpr uint64_t kClosedFromPeekNameHash = UINT64_C(6786008358259532150);
  ContextualSuggestions& SetClosedFromPeek(int64_t value);

  static const char kEverOpenedName[];
  static constexpr uint64_t kEverOpenedNameHash = UINT64_C(11437610549538492965);
  ContextualSuggestions& SetEverOpened(int64_t value);

  static const char kFetchStateName[];
  static constexpr uint64_t kFetchStateNameHash = UINT64_C(1869918093254202676);
  ContextualSuggestions& SetFetchState(int64_t value);

  static const char kShowDurationBucketMinName[];
  static constexpr uint64_t kShowDurationBucketMinNameHash = UINT64_C(10172604682932968622);
  ContextualSuggestions& SetShowDurationBucketMin(int64_t value);

  static const char kTriggerEventName[];
  static constexpr uint64_t kTriggerEventNameHash = UINT64_C(9063441175415679787);
  ContextualSuggestions& SetTriggerEvent(int64_t value);

};

class CPUUsageMeasurement final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  CPUUsageMeasurement(ukm::SourceId source_id);
  ~CPUUsageMeasurement() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(988984496812825435);


  static const char kCPUUsageName[];
  static constexpr uint64_t kCPUUsageNameHash = UINT64_C(4766204289640456177);
  CPUUsageMeasurement& SetCPUUsage(int64_t value);

  static const char kEventTypeName[];
  static constexpr uint64_t kEventTypeNameHash = UINT64_C(5446425777535537951);
  CPUUsageMeasurement& SetEventType(int64_t value);

  static const char kIsVisibleName[];
  static constexpr uint64_t kIsVisibleNameHash = UINT64_C(1485165748725517792);
  CPUUsageMeasurement& SetIsVisible(int64_t value);

  static const char kNumberOfCoresidentTabsName[];
  static constexpr uint64_t kNumberOfCoresidentTabsNameHash = UINT64_C(9703380981804271394);
  CPUUsageMeasurement& SetNumberOfCoresidentTabs(int64_t value);

  static const char kObservationWindowSizeMsName[];
  static constexpr uint64_t kObservationWindowSizeMsNameHash = UINT64_C(73587915121421831);
  CPUUsageMeasurement& SetObservationWindowSizeMs(int64_t value);

  static const char kProcessUptimeMsName[];
  static constexpr uint64_t kProcessUptimeMsNameHash = UINT64_C(12996007208370462538);
  CPUUsageMeasurement& SetProcessUptimeMs(int64_t value);

};

class DocumentCreated final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  DocumentCreated(ukm::SourceId source_id);
  ~DocumentCreated() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2704655726834470033);


  static const char kIsMainFrameName[];
  static constexpr uint64_t kIsMainFrameNameHash = UINT64_C(7266626398784684486);
  DocumentCreated& SetIsMainFrame(int64_t value);

  static const char kNavigationSourceIdName[];
  static constexpr uint64_t kNavigationSourceIdNameHash = UINT64_C(16809659592214455005);
  DocumentCreated& SetNavigationSourceId(int64_t value);

};

class Document_OutliveTimeAfterShutdown final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Document_OutliveTimeAfterShutdown(ukm::SourceId source_id);
  ~Document_OutliveTimeAfterShutdown() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(17687503538123373506);


  static const char kGCCountName[];
  static constexpr uint64_t kGCCountNameHash = UINT64_C(9191439764286334343);
  Document_OutliveTimeAfterShutdown& SetGCCount(int64_t value);

};

class Download_Started final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Download_Started(ukm::SourceId source_id);
  ~Download_Started() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2153997617158303225);


  static const char kDownloadIdName[];
  static constexpr uint64_t kDownloadIdNameHash = UINT64_C(11576255866188961065);
  Download_Started& SetDownloadId(int64_t value);

  static const char kDownloadSourceName[];
  static constexpr uint64_t kDownloadSourceNameHash = UINT64_C(11957806128610167400);
  Download_Started& SetDownloadSource(int64_t value);

  static const char kFileTypeName[];
  static constexpr uint64_t kFileTypeNameHash = UINT64_C(1646892813222506878);
  Download_Started& SetFileType(int64_t value);

};

class Download_Completed final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Download_Completed(ukm::SourceId source_id);
  ~Download_Completed() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9818692869640581957);


  static const char kBytesWastedName[];
  static constexpr uint64_t kBytesWastedNameHash = UINT64_C(13076198488342677109);
  Download_Completed& SetBytesWasted(int64_t value);

  static const char kDownloadIdName[];
  static constexpr uint64_t kDownloadIdNameHash = UINT64_C(11576255866188961065);
  Download_Completed& SetDownloadId(int64_t value);

  static const char kResultingFileSizeName[];
  static constexpr uint64_t kResultingFileSizeNameHash = UINT64_C(9870186940406075265);
  Download_Completed& SetResultingFileSize(int64_t value);

  static const char kTimeSinceStartName[];
  static constexpr uint64_t kTimeSinceStartNameHash = UINT64_C(1379962242842370033);
  Download_Completed& SetTimeSinceStart(int64_t value);

};

class Download_Interrupted final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Download_Interrupted(ukm::SourceId source_id);
  ~Download_Interrupted() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9706055097174303);


  static const char kBytesWastedName[];
  static constexpr uint64_t kBytesWastedNameHash = UINT64_C(13076198488342677109);
  Download_Interrupted& SetBytesWasted(int64_t value);

  static const char kChangeInFileSizeName[];
  static constexpr uint64_t kChangeInFileSizeNameHash = UINT64_C(16943406704139999114);
  Download_Interrupted& SetChangeInFileSize(int64_t value);

  static const char kDownloadIdName[];
  static constexpr uint64_t kDownloadIdNameHash = UINT64_C(11576255866188961065);
  Download_Interrupted& SetDownloadId(int64_t value);

  static const char kReasonName[];
  static constexpr uint64_t kReasonNameHash = UINT64_C(18445816987321669298);
  Download_Interrupted& SetReason(int64_t value);

  static const char kResultingFileSizeName[];
  static constexpr uint64_t kResultingFileSizeNameHash = UINT64_C(9870186940406075265);
  Download_Interrupted& SetResultingFileSize(int64_t value);

  static const char kTimeSinceStartName[];
  static constexpr uint64_t kTimeSinceStartNameHash = UINT64_C(1379962242842370033);
  Download_Interrupted& SetTimeSinceStart(int64_t value);

};

class Download_Resumed final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Download_Resumed(ukm::SourceId source_id);
  ~Download_Resumed() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9188207819461355990);


  static const char kDownloadIdName[];
  static constexpr uint64_t kDownloadIdNameHash = UINT64_C(11576255866188961065);
  Download_Resumed& SetDownloadId(int64_t value);

  static const char kModeName[];
  static constexpr uint64_t kModeNameHash = UINT64_C(7281166215790160128);
  Download_Resumed& SetMode(int64_t value);

  static const char kTimeSinceStartName[];
  static constexpr uint64_t kTimeSinceStartNameHash = UINT64_C(1379962242842370033);
  Download_Resumed& SetTimeSinceStart(int64_t value);

};

class Event_ScrollUpdate_Touch final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Event_ScrollUpdate_Touch(ukm::SourceId source_id);
  ~Event_ScrollUpdate_Touch() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(7257623327097011244);


  static const char kIsMainThreadName[];
  static constexpr uint64_t kIsMainThreadNameHash = UINT64_C(1011657010800388108);
  Event_ScrollUpdate_Touch& SetIsMainThread(int64_t value);

  static const char kTimeToHandledName[];
  static constexpr uint64_t kTimeToHandledNameHash = UINT64_C(10647249754326480869);
  Event_ScrollUpdate_Touch& SetTimeToHandled(int64_t value);

  static const char kTimeToScrollUpdateSwapBeginName[];
  static constexpr uint64_t kTimeToScrollUpdateSwapBeginNameHash = UINT64_C(1631660777277694939);
  Event_ScrollUpdate_Touch& SetTimeToScrollUpdateSwapBegin(int64_t value);

};

class Event_ScrollBegin_Touch final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Event_ScrollBegin_Touch(ukm::SourceId source_id);
  ~Event_ScrollBegin_Touch() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12255255036748617486);


  static const char kIsMainThreadName[];
  static constexpr uint64_t kIsMainThreadNameHash = UINT64_C(1011657010800388108);
  Event_ScrollBegin_Touch& SetIsMainThread(int64_t value);

  static const char kTimeToHandledName[];
  static constexpr uint64_t kTimeToHandledNameHash = UINT64_C(10647249754326480869);
  Event_ScrollBegin_Touch& SetTimeToHandled(int64_t value);

  static const char kTimeToScrollUpdateSwapBeginName[];
  static constexpr uint64_t kTimeToScrollUpdateSwapBeginNameHash = UINT64_C(1631660777277694939);
  Event_ScrollBegin_Touch& SetTimeToScrollUpdateSwapBegin(int64_t value);

};

class Event_ScrollUpdate_Wheel final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Event_ScrollUpdate_Wheel(ukm::SourceId source_id);
  ~Event_ScrollUpdate_Wheel() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12963707033129547010);


  static const char kIsMainThreadName[];
  static constexpr uint64_t kIsMainThreadNameHash = UINT64_C(1011657010800388108);
  Event_ScrollUpdate_Wheel& SetIsMainThread(int64_t value);

  static const char kTimeToHandledName[];
  static constexpr uint64_t kTimeToHandledNameHash = UINT64_C(10647249754326480869);
  Event_ScrollUpdate_Wheel& SetTimeToHandled(int64_t value);

  static const char kTimeToScrollUpdateSwapBeginName[];
  static constexpr uint64_t kTimeToScrollUpdateSwapBeginNameHash = UINT64_C(1631660777277694939);
  Event_ScrollUpdate_Wheel& SetTimeToScrollUpdateSwapBegin(int64_t value);

};

class Event_ScrollBegin_Wheel final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Event_ScrollBegin_Wheel(ukm::SourceId source_id);
  ~Event_ScrollBegin_Wheel() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(15188233126885586509);


  static const char kIsMainThreadName[];
  static constexpr uint64_t kIsMainThreadNameHash = UINT64_C(1011657010800388108);
  Event_ScrollBegin_Wheel& SetIsMainThread(int64_t value);

  static const char kTimeToHandledName[];
  static constexpr uint64_t kTimeToHandledNameHash = UINT64_C(10647249754326480869);
  Event_ScrollBegin_Wheel& SetTimeToHandled(int64_t value);

  static const char kTimeToScrollUpdateSwapBeginName[];
  static constexpr uint64_t kTimeToScrollUpdateSwapBeginNameHash = UINT64_C(1631660777277694939);
  Event_ScrollBegin_Wheel& SetTimeToScrollUpdateSwapBegin(int64_t value);

};

class Intervention_DocumentWrite_ScriptBlock final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Intervention_DocumentWrite_ScriptBlock(ukm::SourceId source_id);
  ~Intervention_DocumentWrite_ScriptBlock() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(10386387717857957103);


  static const char kDisabled_ReloadName[];
  static constexpr uint64_t kDisabled_ReloadNameHash = UINT64_C(3949106941696904177);
  Intervention_DocumentWrite_ScriptBlock& SetDisabled_Reload(int64_t value);

  static const char kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteName[];
  static constexpr uint64_t kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteNameHash = UINT64_C(16007399633238692131);
  Intervention_DocumentWrite_ScriptBlock& SetParseTiming_ParseBlockedOnScriptExecutionFromDocumentWrite(int64_t value);

  static const char kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteName[];
  static constexpr uint64_t kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteNameHash = UINT64_C(310867285454477562);
  Intervention_DocumentWrite_ScriptBlock& SetParseTiming_ParseBlockedOnScriptLoadFromDocumentWrite(int64_t value);

};

class LocalNetworkRequests final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  LocalNetworkRequests(ukm::SourceId source_id);
  ~LocalNetworkRequests() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5563841616204153427);


  static const char kCount_FailedName[];
  static constexpr uint64_t kCount_FailedNameHash = UINT64_C(4332170555344799116);
  LocalNetworkRequests& SetCount_Failed(int64_t value);

  static const char kCount_SuccessfulName[];
  static constexpr uint64_t kCount_SuccessfulNameHash = UINT64_C(7366317784072625071);
  LocalNetworkRequests& SetCount_Successful(int64_t value);

  static const char kPortTypeName[];
  static constexpr uint64_t kPortTypeNameHash = UINT64_C(8660532902729963646);
  LocalNetworkRequests& SetPortType(int64_t value);

  static const char kResourceTypeName[];
  static constexpr uint64_t kResourceTypeNameHash = UINT64_C(13449604986098457094);
  LocalNetworkRequests& SetResourceType(int64_t value);

};

class Media_Autoplay_Attempt final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_Autoplay_Attempt(ukm::SourceId source_id);
  ~Media_Autoplay_Attempt() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(15357501003006382777);


  static const char kAudioTrackName[];
  static constexpr uint64_t kAudioTrackNameHash = UINT64_C(11741394230508611626);
  Media_Autoplay_Attempt& SetAudioTrack(int64_t value);

  static const char kHighMediaEngagementName[];
  static constexpr uint64_t kHighMediaEngagementNameHash = UINT64_C(7387526769811817505);
  Media_Autoplay_Attempt& SetHighMediaEngagement(int64_t value);

  static const char kMutedName[];
  static constexpr uint64_t kMutedNameHash = UINT64_C(8116925261070264013);
  Media_Autoplay_Attempt& SetMuted(int64_t value);

  static const char kSourceName[];
  static constexpr uint64_t kSourceNameHash = UINT64_C(17517803883951840204);
  Media_Autoplay_Attempt& SetSource(int64_t value);

  static const char kUserGestureRequiredName[];
  static constexpr uint64_t kUserGestureRequiredNameHash = UINT64_C(18423189923073954832);
  Media_Autoplay_Attempt& SetUserGestureRequired(int64_t value);

  static const char kUserGestureStatusName[];
  static constexpr uint64_t kUserGestureStatusNameHash = UINT64_C(17118719080195994394);
  Media_Autoplay_Attempt& SetUserGestureStatus(int64_t value);

  static const char kVideoTrackName[];
  static constexpr uint64_t kVideoTrackNameHash = UINT64_C(4366426770158320744);
  Media_Autoplay_Attempt& SetVideoTrack(int64_t value);

};

class Media_Autoplay_Muted_UnmuteAction final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_Autoplay_Muted_UnmuteAction(ukm::SourceId source_id);
  ~Media_Autoplay_Muted_UnmuteAction() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(3015822386723746523);


  static const char kResultName[];
  static constexpr uint64_t kResultNameHash = UINT64_C(10298151285721392449);
  Media_Autoplay_Muted_UnmuteAction& SetResult(int64_t value);

  static const char kSourceName[];
  static constexpr uint64_t kSourceNameHash = UINT64_C(17517803883951840204);
  Media_Autoplay_Muted_UnmuteAction& SetSource(int64_t value);

};

class Media_Engagement_ShortPlaybackIgnored final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_Engagement_ShortPlaybackIgnored(ukm::SourceId source_id);
  ~Media_Engagement_ShortPlaybackIgnored() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(13016590436839167921);


  static const char kLengthName[];
  static constexpr uint64_t kLengthNameHash = UINT64_C(13414706430103511103);
  Media_Engagement_ShortPlaybackIgnored& SetLength(int64_t value);

};

class Media_Engagement_SessionFinished final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_Engagement_SessionFinished(ukm::SourceId source_id);
  ~Media_Engagement_SessionFinished() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(886585293387977076);


  static const char kEngagement_IsHighName[];
  static constexpr uint64_t kEngagement_IsHighNameHash = UINT64_C(3559175725154865187);
  Media_Engagement_SessionFinished& SetEngagement_IsHigh(int64_t value);

  static const char kEngagement_IsHigh_ChangedName[];
  static constexpr uint64_t kEngagement_IsHigh_ChangedNameHash = UINT64_C(1872947769067465836);
  Media_Engagement_SessionFinished& SetEngagement_IsHigh_Changed(int64_t value);

  static const char kEngagement_IsHigh_ChangesName[];
  static constexpr uint64_t kEngagement_IsHigh_ChangesNameHash = UINT64_C(18011850555342030601);
  Media_Engagement_SessionFinished& SetEngagement_IsHigh_Changes(int64_t value);

  static const char kEngagement_IsPreloadedName[];
  static constexpr uint64_t kEngagement_IsPreloadedNameHash = UINT64_C(6660032331629729615);
  Media_Engagement_SessionFinished& SetEngagement_IsPreloaded(int64_t value);

  static const char kEngagement_ScoreName[];
  static constexpr uint64_t kEngagement_ScoreNameHash = UINT64_C(6115011579945185747);
  Media_Engagement_SessionFinished& SetEngagement_Score(int64_t value);

  static const char kPlaybacks_DeltaName[];
  static constexpr uint64_t kPlaybacks_DeltaNameHash = UINT64_C(17096344150248702890);
  Media_Engagement_SessionFinished& SetPlaybacks_Delta(int64_t value);

  static const char kPlaybacks_SecondsSinceLastName[];
  static constexpr uint64_t kPlaybacks_SecondsSinceLastNameHash = UINT64_C(13016498353808665634);
  Media_Engagement_SessionFinished& SetPlaybacks_SecondsSinceLast(int64_t value);

  static const char kPlaybacks_TotalName[];
  static constexpr uint64_t kPlaybacks_TotalNameHash = UINT64_C(17419025647826460429);
  Media_Engagement_SessionFinished& SetPlaybacks_Total(int64_t value);

  static const char kPlayer_Audible_DeltaName[];
  static constexpr uint64_t kPlayer_Audible_DeltaNameHash = UINT64_C(17580650989425633909);
  Media_Engagement_SessionFinished& SetPlayer_Audible_Delta(int64_t value);

  static const char kPlayer_Audible_TotalName[];
  static constexpr uint64_t kPlayer_Audible_TotalNameHash = UINT64_C(6030512341391858068);
  Media_Engagement_SessionFinished& SetPlayer_Audible_Total(int64_t value);

  static const char kPlayer_Significant_DeltaName[];
  static constexpr uint64_t kPlayer_Significant_DeltaNameHash = UINT64_C(1233203601745147659);
  Media_Engagement_SessionFinished& SetPlayer_Significant_Delta(int64_t value);

  static const char kPlayer_Significant_TotalName[];
  static constexpr uint64_t kPlayer_Significant_TotalNameHash = UINT64_C(15125637840726714543);
  Media_Engagement_SessionFinished& SetPlayer_Significant_Total(int64_t value);

  static const char kVisits_TotalName[];
  static constexpr uint64_t kVisits_TotalNameHash = UINT64_C(8621457172620586317);
  Media_Engagement_SessionFinished& SetVisits_Total(int64_t value);

};

class Media_SiteMuted final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_SiteMuted(ukm::SourceId source_id);
  ~Media_SiteMuted() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9485702385711484844);


  static const char kMuteReasonName[];
  static constexpr uint64_t kMuteReasonNameHash = UINT64_C(11711049693295628292);
  Media_SiteMuted& SetMuteReason(int64_t value);

};

class Media_WatchTime final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_WatchTime(ukm::SourceId source_id);
  ~Media_WatchTime() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9541229379229095829);


  static const char kAudio_ACName[];
  static constexpr uint64_t kAudio_ACNameHash = UINT64_C(8367209115629948764);
  Media_WatchTime& SetAudio_AC(int64_t value);

  static const char kAudio_AllName[];
  static constexpr uint64_t kAudio_AllNameHash = UINT64_C(16182650913421902113);
  Media_WatchTime& SetAudio_All(int64_t value);

  static const char kAudio_BatteryName[];
  static constexpr uint64_t kAudio_BatteryNameHash = UINT64_C(1821315920825492652);
  Media_WatchTime& SetAudio_Battery(int64_t value);

  static const char kAudio_EMEName[];
  static constexpr uint64_t kAudio_EMENameHash = UINT64_C(4340614778865495046);
  Media_WatchTime& SetAudio_EME(int64_t value);

  static const char kAudio_MSEName[];
  static constexpr uint64_t kAudio_MSENameHash = UINT64_C(8757700406843410435);
  Media_WatchTime& SetAudio_MSE(int64_t value);

  static const char kAudio_NativeControlsOffName[];
  static constexpr uint64_t kAudio_NativeControlsOffNameHash = UINT64_C(9750810706681806063);
  Media_WatchTime& SetAudio_NativeControlsOff(int64_t value);

  static const char kAudio_NativeControlsOnName[];
  static constexpr uint64_t kAudio_NativeControlsOnNameHash = UINT64_C(3527548542980163720);
  Media_WatchTime& SetAudio_NativeControlsOn(int64_t value);

  static const char kAudio_SRCName[];
  static constexpr uint64_t kAudio_SRCNameHash = UINT64_C(12440502161057146871);
  Media_WatchTime& SetAudio_SRC(int64_t value);

  static const char kAudioVideo_ACName[];
  static constexpr uint64_t kAudioVideo_ACNameHash = UINT64_C(13555611449425493164);
  Media_WatchTime& SetAudioVideo_AC(int64_t value);

  static const char kAudioVideo_AllName[];
  static constexpr uint64_t kAudioVideo_AllNameHash = UINT64_C(8667634276437779261);
  Media_WatchTime& SetAudioVideo_All(int64_t value);

  static const char kAudioVideo_Background_ACName[];
  static constexpr uint64_t kAudioVideo_Background_ACNameHash = UINT64_C(4811393832549047946);
  Media_WatchTime& SetAudioVideo_Background_AC(int64_t value);

  static const char kAudioVideo_Background_AllName[];
  static constexpr uint64_t kAudioVideo_Background_AllNameHash = UINT64_C(1838781145453476686);
  Media_WatchTime& SetAudioVideo_Background_All(int64_t value);

  static const char kAudioVideo_Background_BatteryName[];
  static constexpr uint64_t kAudioVideo_Background_BatteryNameHash = UINT64_C(1994914752361937014);
  Media_WatchTime& SetAudioVideo_Background_Battery(int64_t value);

  static const char kAudioVideo_Background_EMEName[];
  static constexpr uint64_t kAudioVideo_Background_EMENameHash = UINT64_C(48790507531416446);
  Media_WatchTime& SetAudioVideo_Background_EME(int64_t value);

  static const char kAudioVideo_Background_MSEName[];
  static constexpr uint64_t kAudioVideo_Background_MSENameHash = UINT64_C(12047682029547844990);
  Media_WatchTime& SetAudioVideo_Background_MSE(int64_t value);

  static const char kAudioVideo_Background_SRCName[];
  static constexpr uint64_t kAudioVideo_Background_SRCNameHash = UINT64_C(6363972227139035734);
  Media_WatchTime& SetAudioVideo_Background_SRC(int64_t value);

  static const char kAudioVideo_BatteryName[];
  static constexpr uint64_t kAudioVideo_BatteryNameHash = UINT64_C(9500036613143258642);
  Media_WatchTime& SetAudioVideo_Battery(int64_t value);

  static const char kAudioVideo_DisplayFullscreenName[];
  static constexpr uint64_t kAudioVideo_DisplayFullscreenNameHash = UINT64_C(15851818911596436788);
  Media_WatchTime& SetAudioVideo_DisplayFullscreen(int64_t value);

  static const char kAudioVideo_DisplayInlineName[];
  static constexpr uint64_t kAudioVideo_DisplayInlineNameHash = UINT64_C(1148034982755008800);
  Media_WatchTime& SetAudioVideo_DisplayInline(int64_t value);

  static const char kAudioVideo_DisplayPictureInPictureName[];
  static constexpr uint64_t kAudioVideo_DisplayPictureInPictureNameHash = UINT64_C(1846894539177014630);
  Media_WatchTime& SetAudioVideo_DisplayPictureInPicture(int64_t value);

  static const char kAudioVideo_EMEName[];
  static constexpr uint64_t kAudioVideo_EMENameHash = UINT64_C(18004619387518807441);
  Media_WatchTime& SetAudioVideo_EME(int64_t value);

  static const char kAudioVideo_MSEName[];
  static constexpr uint64_t kAudioVideo_MSENameHash = UINT64_C(14030178719401600101);
  Media_WatchTime& SetAudioVideo_MSE(int64_t value);

  static const char kAudioVideo_NativeControlsOffName[];
  static constexpr uint64_t kAudioVideo_NativeControlsOffNameHash = UINT64_C(15235512973675738938);
  Media_WatchTime& SetAudioVideo_NativeControlsOff(int64_t value);

  static const char kAudioVideo_NativeControlsOnName[];
  static constexpr uint64_t kAudioVideo_NativeControlsOnNameHash = UINT64_C(6286538679536415780);
  Media_WatchTime& SetAudioVideo_NativeControlsOn(int64_t value);

  static const char kAudioVideo_SRCName[];
  static constexpr uint64_t kAudioVideo_SRCNameHash = UINT64_C(5796465560446227739);
  Media_WatchTime& SetAudioVideo_SRC(int64_t value);

};

class Media_WebMediaPlayerState final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_WebMediaPlayerState(ukm::SourceId source_id);
  ~Media_WebMediaPlayerState() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(14428460888229388079);


  static const char kFinalPipelineStatusName[];
  static constexpr uint64_t kFinalPipelineStatusNameHash = UINT64_C(10539654806699313254);
  Media_WebMediaPlayerState& SetFinalPipelineStatus(int64_t value);

  static const char kIsEMEName[];
  static constexpr uint64_t kIsEMENameHash = UINT64_C(9603548586615616861);
  Media_WebMediaPlayerState& SetIsEME(int64_t value);

  static const char kIsMSEName[];
  static constexpr uint64_t kIsMSENameHash = UINT64_C(1649159027333078910);
  Media_WebMediaPlayerState& SetIsMSE(int64_t value);

  static const char kIsTopFrameName[];
  static constexpr uint64_t kIsTopFrameNameHash = UINT64_C(12076906272811428831);
  Media_WebMediaPlayerState& SetIsTopFrame(int64_t value);

  static const char kPlayerIDName[];
  static constexpr uint64_t kPlayerIDNameHash = UINT64_C(14726224399452516920);
  Media_WebMediaPlayerState& SetPlayerID(int64_t value);

  static const char kTimeToFirstFrameName[];
  static constexpr uint64_t kTimeToFirstFrameNameHash = UINT64_C(4692112185366530109);
  Media_WebMediaPlayerState& SetTimeToFirstFrame(int64_t value);

  static const char kTimeToMetadataName[];
  static constexpr uint64_t kTimeToMetadataNameHash = UINT64_C(4362545705166911725);
  Media_WebMediaPlayerState& SetTimeToMetadata(int64_t value);

  static const char kTimeToPlayReadyName[];
  static constexpr uint64_t kTimeToPlayReadyNameHash = UINT64_C(3934160282665258072);
  Media_WebMediaPlayerState& SetTimeToPlayReady(int64_t value);

};

class Media_BasicPlayback final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_BasicPlayback(ukm::SourceId source_id);
  ~Media_BasicPlayback() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(8416658001170131658);


  static const char kAudioCodecName[];
  static constexpr uint64_t kAudioCodecNameHash = UINT64_C(1465592132233517979);
  Media_BasicPlayback& SetAudioCodec(int64_t value);

  static const char kAudioDecoderNameName[];
  static constexpr uint64_t kAudioDecoderNameNameHash = UINT64_C(7400968670179001125);
  Media_BasicPlayback& SetAudioDecoderName(int64_t value);

  static const char kAutoplayInitiatedName[];
  static constexpr uint64_t kAutoplayInitiatedNameHash = UINT64_C(5475295434443958193);
  Media_BasicPlayback& SetAutoplayInitiated(int64_t value);

  static const char kHasAudioName[];
  static constexpr uint64_t kHasAudioNameHash = UINT64_C(11107996916041070680);
  Media_BasicPlayback& SetHasAudio(int64_t value);

  static const char kHasVideoName[];
  static constexpr uint64_t kHasVideoNameHash = UINT64_C(14168404852977906041);
  Media_BasicPlayback& SetHasVideo(int64_t value);

  static const char kIsBackgroundName[];
  static constexpr uint64_t kIsBackgroundNameHash = UINT64_C(5213574143647769765);
  Media_BasicPlayback& SetIsBackground(int64_t value);

  static const char kIsEMEName[];
  static constexpr uint64_t kIsEMENameHash = UINT64_C(9603548586615616861);
  Media_BasicPlayback& SetIsEME(int64_t value);

  static const char kIsMSEName[];
  static constexpr uint64_t kIsMSENameHash = UINT64_C(1649159027333078910);
  Media_BasicPlayback& SetIsMSE(int64_t value);

  static const char kIsMutedName[];
  static constexpr uint64_t kIsMutedNameHash = UINT64_C(16310095796065347619);
  Media_BasicPlayback& SetIsMuted(int64_t value);

  static const char kIsTopFrameName[];
  static constexpr uint64_t kIsTopFrameNameHash = UINT64_C(12076906272811428831);
  Media_BasicPlayback& SetIsTopFrame(int64_t value);

  static const char kLastPipelineStatusName[];
  static constexpr uint64_t kLastPipelineStatusNameHash = UINT64_C(7379597174511267180);
  Media_BasicPlayback& SetLastPipelineStatus(int64_t value);

  static const char kMeanTimeBetweenRebuffersName[];
  static constexpr uint64_t kMeanTimeBetweenRebuffersNameHash = UINT64_C(4184550771348788496);
  Media_BasicPlayback& SetMeanTimeBetweenRebuffers(int64_t value);

  static const char kPlayerIDName[];
  static constexpr uint64_t kPlayerIDNameHash = UINT64_C(14726224399452516920);
  Media_BasicPlayback& SetPlayerID(int64_t value);

  static const char kRebuffersCountName[];
  static constexpr uint64_t kRebuffersCountNameHash = UINT64_C(13807071113907897713);
  Media_BasicPlayback& SetRebuffersCount(int64_t value);

  static const char kVideoCodecName[];
  static constexpr uint64_t kVideoCodecNameHash = UINT64_C(4277283989099800257);
  Media_BasicPlayback& SetVideoCodec(int64_t value);

  static const char kVideoDecoderNameName[];
  static constexpr uint64_t kVideoDecoderNameNameHash = UINT64_C(2955371204855076682);
  Media_BasicPlayback& SetVideoDecoderName(int64_t value);

  static const char kVideoNaturalHeightName[];
  static constexpr uint64_t kVideoNaturalHeightNameHash = UINT64_C(1900038218584603521);
  Media_BasicPlayback& SetVideoNaturalHeight(int64_t value);

  static const char kVideoNaturalWidthName[];
  static constexpr uint64_t kVideoNaturalWidthNameHash = UINT64_C(7910695112651016017);
  Media_BasicPlayback& SetVideoNaturalWidth(int64_t value);

  static const char kWatchTimeName[];
  static constexpr uint64_t kWatchTimeNameHash = UINT64_C(4238353176698564424);
  Media_BasicPlayback& SetWatchTime(int64_t value);

  static const char kWatchTime_ACName[];
  static constexpr uint64_t kWatchTime_ACNameHash = UINT64_C(12245748949786056651);
  Media_BasicPlayback& SetWatchTime_AC(int64_t value);

  static const char kWatchTime_BatteryName[];
  static constexpr uint64_t kWatchTime_BatteryNameHash = UINT64_C(4816984999048658540);
  Media_BasicPlayback& SetWatchTime_Battery(int64_t value);

  static const char kWatchTime_DisplayFullscreenName[];
  static constexpr uint64_t kWatchTime_DisplayFullscreenNameHash = UINT64_C(17627238861389141605);
  Media_BasicPlayback& SetWatchTime_DisplayFullscreen(int64_t value);

  static const char kWatchTime_DisplayInlineName[];
  static constexpr uint64_t kWatchTime_DisplayInlineNameHash = UINT64_C(6904900890184958698);
  Media_BasicPlayback& SetWatchTime_DisplayInline(int64_t value);

  static const char kWatchTime_DisplayPictureInPictureName[];
  static constexpr uint64_t kWatchTime_DisplayPictureInPictureNameHash = UINT64_C(16046220114157168716);
  Media_BasicPlayback& SetWatchTime_DisplayPictureInPicture(int64_t value);

  static const char kWatchTime_NativeControlsOffName[];
  static constexpr uint64_t kWatchTime_NativeControlsOffNameHash = UINT64_C(10500999714956221012);
  Media_BasicPlayback& SetWatchTime_NativeControlsOff(int64_t value);

  static const char kWatchTime_NativeControlsOnName[];
  static constexpr uint64_t kWatchTime_NativeControlsOnNameHash = UINT64_C(7643229976440928650);
  Media_BasicPlayback& SetWatchTime_NativeControlsOn(int64_t value);

};

class Media_VideoDecodePerfRecord final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Media_VideoDecodePerfRecord(ukm::SourceId source_id);
  ~Media_VideoDecodePerfRecord() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(4207699002180294249);


  static const char kPerf_ApiWouldClaimIsPowerEfficientName[];
  static constexpr uint64_t kPerf_ApiWouldClaimIsPowerEfficientNameHash = UINT64_C(5735887776585123091);
  Media_VideoDecodePerfRecord& SetPerf_ApiWouldClaimIsPowerEfficient(int64_t value);

  static const char kPerf_ApiWouldClaimIsSmoothName[];
  static constexpr uint64_t kPerf_ApiWouldClaimIsSmoothNameHash = UINT64_C(12671368491971530709);
  Media_VideoDecodePerfRecord& SetPerf_ApiWouldClaimIsSmooth(int64_t value);

  static const char kPerf_PastVideoFramesDecodedName[];
  static constexpr uint64_t kPerf_PastVideoFramesDecodedNameHash = UINT64_C(8441960325832700449);
  Media_VideoDecodePerfRecord& SetPerf_PastVideoFramesDecoded(int64_t value);

  static const char kPerf_PastVideoFramesDroppedName[];
  static constexpr uint64_t kPerf_PastVideoFramesDroppedNameHash = UINT64_C(18418972936520347850);
  Media_VideoDecodePerfRecord& SetPerf_PastVideoFramesDropped(int64_t value);

  static const char kPerf_PastVideoFramesPowerEfficientName[];
  static constexpr uint64_t kPerf_PastVideoFramesPowerEfficientNameHash = UINT64_C(7446723482648341353);
  Media_VideoDecodePerfRecord& SetPerf_PastVideoFramesPowerEfficient(int64_t value);

  static const char kPerf_RecordIsPowerEfficientName[];
  static constexpr uint64_t kPerf_RecordIsPowerEfficientNameHash = UINT64_C(8067819045200543647);
  Media_VideoDecodePerfRecord& SetPerf_RecordIsPowerEfficient(int64_t value);

  static const char kPerf_RecordIsSmoothName[];
  static constexpr uint64_t kPerf_RecordIsSmoothNameHash = UINT64_C(12667944347029598270);
  Media_VideoDecodePerfRecord& SetPerf_RecordIsSmooth(int64_t value);

  static const char kPerf_VideoFramesDecodedName[];
  static constexpr uint64_t kPerf_VideoFramesDecodedNameHash = UINT64_C(13148455826076313336);
  Media_VideoDecodePerfRecord& SetPerf_VideoFramesDecoded(int64_t value);

  static const char kPerf_VideoFramesDroppedName[];
  static constexpr uint64_t kPerf_VideoFramesDroppedNameHash = UINT64_C(9694095505089398065);
  Media_VideoDecodePerfRecord& SetPerf_VideoFramesDropped(int64_t value);

  static const char kPerf_VideoFramesPowerEfficientName[];
  static constexpr uint64_t kPerf_VideoFramesPowerEfficientNameHash = UINT64_C(977668949207851975);
  Media_VideoDecodePerfRecord& SetPerf_VideoFramesPowerEfficient(int64_t value);

  static const char kVideo_CodecProfileName[];
  static constexpr uint64_t kVideo_CodecProfileNameHash = UINT64_C(12697741592931889256);
  Media_VideoDecodePerfRecord& SetVideo_CodecProfile(int64_t value);

  static const char kVideo_FramesPerSecondName[];
  static constexpr uint64_t kVideo_FramesPerSecondNameHash = UINT64_C(9284015185136411749);
  Media_VideoDecodePerfRecord& SetVideo_FramesPerSecond(int64_t value);

  static const char kVideo_InTopFrameName[];
  static constexpr uint64_t kVideo_InTopFrameNameHash = UINT64_C(2486969173492159481);
  Media_VideoDecodePerfRecord& SetVideo_InTopFrame(int64_t value);

  static const char kVideo_NaturalHeightName[];
  static constexpr uint64_t kVideo_NaturalHeightNameHash = UINT64_C(6424389758392557464);
  Media_VideoDecodePerfRecord& SetVideo_NaturalHeight(int64_t value);

  static const char kVideo_NaturalWidthName[];
  static constexpr uint64_t kVideo_NaturalWidthNameHash = UINT64_C(12684813081500050839);
  Media_VideoDecodePerfRecord& SetVideo_NaturalWidth(int64_t value);

  static const char kVideo_PlayerIDName[];
  static constexpr uint64_t kVideo_PlayerIDNameHash = UINT64_C(11303151379432599370);
  Media_VideoDecodePerfRecord& SetVideo_PlayerID(int64_t value);

};

class Memory_Experimental final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Memory_Experimental(ukm::SourceId source_id);
  ~Memory_Experimental() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2958711939369432145);


  static const char kArrayBufferName[];
  static constexpr uint64_t kArrayBufferNameHash = UINT64_C(11725738762011925469);
  Memory_Experimental& SetArrayBuffer(int64_t value);

  static const char kBlinkGCName[];
  static constexpr uint64_t kBlinkGCNameHash = UINT64_C(7968550169431094519);
  Memory_Experimental& SetBlinkGC(int64_t value);

  static const char kBlinkGC_AllocatedObjectsName[];
  static constexpr uint64_t kBlinkGC_AllocatedObjectsNameHash = UINT64_C(2308711769835636489);
  Memory_Experimental& SetBlinkGC_AllocatedObjects(int64_t value);

  static const char kCommandBufferName[];
  static constexpr uint64_t kCommandBufferNameHash = UINT64_C(11751001059183415549);
  Memory_Experimental& SetCommandBuffer(int64_t value);

  static const char kDiscardableName[];
  static constexpr uint64_t kDiscardableNameHash = UINT64_C(200561209145538443);
  Memory_Experimental& SetDiscardable(int64_t value);

  static const char kDownloadServiceName[];
  static constexpr uint64_t kDownloadServiceNameHash = UINT64_C(7359304541321789172);
  Memory_Experimental& SetDownloadService(int64_t value);

  static const char kExtensions_ValueStoreName[];
  static constexpr uint64_t kExtensions_ValueStoreNameHash = UINT64_C(29559029929544692);
  Memory_Experimental& SetExtensions_ValueStore(int64_t value);

  static const char kFontCachesName[];
  static constexpr uint64_t kFontCachesNameHash = UINT64_C(16529061004933942300);
  Memory_Experimental& SetFontCaches(int64_t value);

  static const char kHistoryName[];
  static constexpr uint64_t kHistoryNameHash = UINT64_C(1644574205037202324);
  Memory_Experimental& SetHistory(int64_t value);

  static const char kIsVisibleName[];
  static constexpr uint64_t kIsVisibleNameHash = UINT64_C(1485165748725517792);
  Memory_Experimental& SetIsVisible(int64_t value);

  static const char kJavaHeapName[];
  static constexpr uint64_t kJavaHeapNameHash = UINT64_C(8862862044285854091);
  Memory_Experimental& SetJavaHeap(int64_t value);

  static const char kLevelDatabaseName[];
  static constexpr uint64_t kLevelDatabaseNameHash = UINT64_C(11348850218298612975);
  Memory_Experimental& SetLevelDatabase(int64_t value);

  static const char kMallocName[];
  static constexpr uint64_t kMallocNameHash = UINT64_C(1238957276816977011);
  Memory_Experimental& SetMalloc(int64_t value);

  static const char kNetName[];
  static constexpr uint64_t kNetNameHash = UINT64_C(5769866783646202089);
  Memory_Experimental& SetNet(int64_t value);

  static const char kNet_UrlRequestContextName[];
  static constexpr uint64_t kNet_UrlRequestContextNameHash = UINT64_C(4591518805853525343);
  Memory_Experimental& SetNet_UrlRequestContext(int64_t value);

  static const char kNumberOfAdSubframesName[];
  static constexpr uint64_t kNumberOfAdSubframesNameHash = UINT64_C(10743182343548519998);
  Memory_Experimental& SetNumberOfAdSubframes(int64_t value);

  static const char kNumberOfDetachedScriptStatesName[];
  static constexpr uint64_t kNumberOfDetachedScriptStatesNameHash = UINT64_C(18265098399102889270);
  Memory_Experimental& SetNumberOfDetachedScriptStates(int64_t value);

  static const char kNumberOfDocumentsName[];
  static constexpr uint64_t kNumberOfDocumentsNameHash = UINT64_C(5733109213322944724);
  Memory_Experimental& SetNumberOfDocuments(int64_t value);

  static const char kNumberOfExtensionsName[];
  static constexpr uint64_t kNumberOfExtensionsNameHash = UINT64_C(3403202119543761618);
  Memory_Experimental& SetNumberOfExtensions(int64_t value);

  static const char kNumberOfFramesName[];
  static constexpr uint64_t kNumberOfFramesNameHash = UINT64_C(6940065104966512226);
  Memory_Experimental& SetNumberOfFrames(int64_t value);

  static const char kNumberOfLayoutObjectsName[];
  static constexpr uint64_t kNumberOfLayoutObjectsNameHash = UINT64_C(3649880882460262866);
  Memory_Experimental& SetNumberOfLayoutObjects(int64_t value);

  static const char kNumberOfMojoHandlesName[];
  static constexpr uint64_t kNumberOfMojoHandlesNameHash = UINT64_C(16814172961108727736);
  Memory_Experimental& SetNumberOfMojoHandles(int64_t value);

  static const char kNumberOfNodesName[];
  static constexpr uint64_t kNumberOfNodesNameHash = UINT64_C(15643987746411267564);
  Memory_Experimental& SetNumberOfNodes(int64_t value);

  static const char kOmniboxSuggestionsName[];
  static constexpr uint64_t kOmniboxSuggestionsNameHash = UINT64_C(17355891050851009725);
  Memory_Experimental& SetOmniboxSuggestions(int64_t value);

  static const char kPartitionAllocName[];
  static constexpr uint64_t kPartitionAllocNameHash = UINT64_C(9610482673592445024);
  Memory_Experimental& SetPartitionAlloc(int64_t value);

  static const char kPartitionAlloc_AllocatedObjectsName[];
  static constexpr uint64_t kPartitionAlloc_AllocatedObjectsNameHash = UINT64_C(15224183457205092815);
  Memory_Experimental& SetPartitionAlloc_AllocatedObjects(int64_t value);

  static const char kPartitionAlloc_Partitions_ArrayBufferName[];
  static constexpr uint64_t kPartitionAlloc_Partitions_ArrayBufferNameHash = UINT64_C(806433197023658949);
  Memory_Experimental& SetPartitionAlloc_Partitions_ArrayBuffer(int64_t value);

  static const char kPartitionAlloc_Partitions_BufferName[];
  static constexpr uint64_t kPartitionAlloc_Partitions_BufferNameHash = UINT64_C(12341882596033563250);
  Memory_Experimental& SetPartitionAlloc_Partitions_Buffer(int64_t value);

  static const char kPartitionAlloc_Partitions_FastMallocName[];
  static constexpr uint64_t kPartitionAlloc_Partitions_FastMallocNameHash = UINT64_C(13878052578744598290);
  Memory_Experimental& SetPartitionAlloc_Partitions_FastMalloc(int64_t value);

  static const char kPartitionAlloc_Partitions_LayoutName[];
  static constexpr uint64_t kPartitionAlloc_Partitions_LayoutNameHash = UINT64_C(6655809818244318026);
  Memory_Experimental& SetPartitionAlloc_Partitions_Layout(int64_t value);

  static const char kPrivateMemoryFootprintName[];
  static constexpr uint64_t kPrivateMemoryFootprintNameHash = UINT64_C(10052513537419821189);
  Memory_Experimental& SetPrivateMemoryFootprint(int64_t value);

  static const char kPrivateSwapFootprintName[];
  static constexpr uint64_t kPrivateSwapFootprintNameHash = UINT64_C(13571406198520885449);
  Memory_Experimental& SetPrivateSwapFootprint(int64_t value);

  static const char kProcessTypeName[];
  static constexpr uint64_t kProcessTypeNameHash = UINT64_C(7486237172651555104);
  Memory_Experimental& SetProcessType(int64_t value);

  static const char kResidentName[];
  static constexpr uint64_t kResidentNameHash = UINT64_C(13461411595380681438);
  Memory_Experimental& SetResident(int64_t value);

  static const char kSharedMemoryFootprintName[];
  static constexpr uint64_t kSharedMemoryFootprintNameHash = UINT64_C(17500641147677751075);
  Memory_Experimental& SetSharedMemoryFootprint(int64_t value);

  static const char kSiteStorageName[];
  static constexpr uint64_t kSiteStorageNameHash = UINT64_C(9072081726198684739);
  Memory_Experimental& SetSiteStorage(int64_t value);

  static const char kSiteStorage_BlobStorageName[];
  static constexpr uint64_t kSiteStorage_BlobStorageNameHash = UINT64_C(7198093127485286680);
  Memory_Experimental& SetSiteStorage_BlobStorage(int64_t value);

  static const char kSiteStorage_IndexDBName[];
  static constexpr uint64_t kSiteStorage_IndexDBNameHash = UINT64_C(6402762799502043507);
  Memory_Experimental& SetSiteStorage_IndexDB(int64_t value);

  static const char kSiteStorage_LocalStorageName[];
  static constexpr uint64_t kSiteStorage_LocalStorageNameHash = UINT64_C(14933128457130084075);
  Memory_Experimental& SetSiteStorage_LocalStorage(int64_t value);

  static const char kSiteStorage_SessionStorageName[];
  static constexpr uint64_t kSiteStorage_SessionStorageNameHash = UINT64_C(14209441575119482215);
  Memory_Experimental& SetSiteStorage_SessionStorage(int64_t value);

  static const char kSkiaName[];
  static constexpr uint64_t kSkiaNameHash = UINT64_C(9991921243016949116);
  Memory_Experimental& SetSkia(int64_t value);

  static const char kSkia_SkGlyphCacheName[];
  static constexpr uint64_t kSkia_SkGlyphCacheNameHash = UINT64_C(8035476658629055040);
  Memory_Experimental& SetSkia_SkGlyphCache(int64_t value);

  static const char kSkia_SkResourceCacheName[];
  static constexpr uint64_t kSkia_SkResourceCacheNameHash = UINT64_C(6214163245680517898);
  Memory_Experimental& SetSkia_SkResourceCache(int64_t value);

  static const char kSqliteName[];
  static constexpr uint64_t kSqliteNameHash = UINT64_C(2900118879024321274);
  Memory_Experimental& SetSqlite(int64_t value);

  static const char kSyncName[];
  static constexpr uint64_t kSyncNameHash = UINT64_C(15629878885545645682);
  Memory_Experimental& SetSync(int64_t value);

  static const char kTabRestoreName[];
  static constexpr uint64_t kTabRestoreNameHash = UINT64_C(4112632899105915167);
  Memory_Experimental& SetTabRestore(int64_t value);

  static const char kTimeSinceLastNavigationName[];
  static constexpr uint64_t kTimeSinceLastNavigationNameHash = UINT64_C(13938385952041404158);
  Memory_Experimental& SetTimeSinceLastNavigation(int64_t value);

  static const char kTimeSinceLastVisibilityChangeName[];
  static constexpr uint64_t kTimeSinceLastVisibilityChangeNameHash = UINT64_C(6720756525548063269);
  Memory_Experimental& SetTimeSinceLastVisibilityChange(int64_t value);

  static const char kTotal2_PrivateMemoryFootprintName[];
  static constexpr uint64_t kTotal2_PrivateMemoryFootprintNameHash = UINT64_C(3202306657284943476);
  Memory_Experimental& SetTotal2_PrivateMemoryFootprint(int64_t value);

  static const char kTotal2_SharedMemoryFootprintName[];
  static constexpr uint64_t kTotal2_SharedMemoryFootprintNameHash = UINT64_C(12351660231667012712);
  Memory_Experimental& SetTotal2_SharedMemoryFootprint(int64_t value);

  static const char kUIName[];
  static constexpr uint64_t kUINameHash = UINT64_C(8214408844178480006);
  Memory_Experimental& SetUI(int64_t value);

  static const char kUptimeName[];
  static constexpr uint64_t kUptimeNameHash = UINT64_C(15054621371739184368);
  Memory_Experimental& SetUptime(int64_t value);

  static const char kV8Name[];
  static constexpr uint64_t kV8NameHash = UINT64_C(16896410219304879775);
  Memory_Experimental& SetV8(int64_t value);

  static const char kWebCacheName[];
  static constexpr uint64_t kWebCacheNameHash = UINT64_C(13488018231190606421);
  Memory_Experimental& SetWebCache(int64_t value);

  static const char kWebCache_CSSStylesheetResourcesName[];
  static constexpr uint64_t kWebCache_CSSStylesheetResourcesNameHash = UINT64_C(9097814082721146272);
  Memory_Experimental& SetWebCache_CSSStylesheetResources(int64_t value);

  static const char kWebCache_FontResourcesName[];
  static constexpr uint64_t kWebCache_FontResourcesNameHash = UINT64_C(9628146792345614317);
  Memory_Experimental& SetWebCache_FontResources(int64_t value);

  static const char kWebCache_ImageResourcesName[];
  static constexpr uint64_t kWebCache_ImageResourcesNameHash = UINT64_C(9515010466852810683);
  Memory_Experimental& SetWebCache_ImageResources(int64_t value);

  static const char kWebCache_OtherResourcesName[];
  static constexpr uint64_t kWebCache_OtherResourcesNameHash = UINT64_C(17732136591162526580);
  Memory_Experimental& SetWebCache_OtherResources(int64_t value);

  static const char kWebCache_ScriptResourcesName[];
  static constexpr uint64_t kWebCache_ScriptResourcesNameHash = UINT64_C(3925250771305782664);
  Memory_Experimental& SetWebCache_ScriptResources(int64_t value);

  static const char kWebCache_XSLStylesheetResourcesName[];
  static constexpr uint64_t kWebCache_XSLStylesheetResourcesNameHash = UINT64_C(12721691713197854566);
  Memory_Experimental& SetWebCache_XSLStylesheetResources(int64_t value);

};

class OfflinePages_SavePageRequested final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  OfflinePages_SavePageRequested(ukm::SourceId source_id);
  ~OfflinePages_SavePageRequested() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5472140254770736949);


  static const char kRequestedFromForegroundName[];
  static constexpr uint64_t kRequestedFromForegroundNameHash = UINT64_C(15523075221505978608);
  OfflinePages_SavePageRequested& SetRequestedFromForeground(int64_t value);

};

class PageDomainInfo final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PageDomainInfo(ukm::SourceId source_id);
  ~PageDomainInfo() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12853622770478513093);


  static const char kDomainTypeName[];
  static constexpr uint64_t kDomainTypeNameHash = UINT64_C(7797620970950375408);
  PageDomainInfo& SetDomainType(int64_t value);

};

class PageLoad final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PageLoad(ukm::SourceId source_id);
  ~PageLoad() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12426032810838168341);


  static const char kDocumentTiming_NavigationToDOMContentLoadedEventFiredName[];
  static constexpr uint64_t kDocumentTiming_NavigationToDOMContentLoadedEventFiredNameHash = UINT64_C(6867802542830008226);
  PageLoad& SetDocumentTiming_NavigationToDOMContentLoadedEventFired(int64_t value);

  static const char kDocumentTiming_NavigationToLoadEventFiredName[];
  static constexpr uint64_t kDocumentTiming_NavigationToLoadEventFiredNameHash = UINT64_C(9492260367886123818);
  PageLoad& SetDocumentTiming_NavigationToLoadEventFired(int64_t value);

  static const char kExperimental_NavigationToInteractiveName[];
  static constexpr uint64_t kExperimental_NavigationToInteractiveNameHash = UINT64_C(1959165619496320409);
  PageLoad& SetExperimental_NavigationToInteractive(int64_t value);

  static const char kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintName[];
  static constexpr uint64_t kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintNameHash = UINT64_C(7669206824977834951);
  PageLoad& SetExperimental_PaintTiming_NavigationToFirstMeaningfulPaint(int64_t value);

  static const char kInteractiveTiming_FirstInputDelayName[];
  static constexpr uint64_t kInteractiveTiming_FirstInputDelayNameHash = UINT64_C(2724722767820132659);
  PageLoad& SetInteractiveTiming_FirstInputDelay(int64_t value);

  static const char kInteractiveTiming_FirstInputTimestampName[];
  static constexpr uint64_t kInteractiveTiming_FirstInputTimestampNameHash = UINT64_C(15013145561501659422);
  PageLoad& SetInteractiveTiming_FirstInputTimestamp(int64_t value);

  static const char kNavigation_PageTransitionName[];
  static constexpr uint64_t kNavigation_PageTransitionNameHash = UINT64_C(6618380684727568744);
  PageLoad& SetNavigation_PageTransition(int64_t value);

  static const char kNet_CacheBytesName[];
  static constexpr uint64_t kNet_CacheBytesNameHash = UINT64_C(1759414574352858305);
  PageLoad& SetNet_CacheBytes(int64_t value);

  static const char kNet_DownstreamKbpsEstimate_OnNavigationStartName[];
  static constexpr uint64_t kNet_DownstreamKbpsEstimate_OnNavigationStartNameHash = UINT64_C(9428473883870683459);
  PageLoad& SetNet_DownstreamKbpsEstimate_OnNavigationStart(int64_t value);

  static const char kNet_EffectiveConnectionType_OnNavigationStartName[];
  static constexpr uint64_t kNet_EffectiveConnectionType_OnNavigationStartNameHash = UINT64_C(15293739332691800493);
  PageLoad& SetNet_EffectiveConnectionType_OnNavigationStart(int64_t value);

  static const char kNet_EffectiveConnectionType2_OnNavigationStartName[];
  static constexpr uint64_t kNet_EffectiveConnectionType2_OnNavigationStartNameHash = UINT64_C(12505429480755299532);
  PageLoad& SetNet_EffectiveConnectionType2_OnNavigationStart(int64_t value);

  static const char kNet_ErrorCode_OnFailedProvisionalLoadName[];
  static constexpr uint64_t kNet_ErrorCode_OnFailedProvisionalLoadNameHash = UINT64_C(10394413376607560477);
  PageLoad& SetNet_ErrorCode_OnFailedProvisionalLoad(int64_t value);

  static const char kNet_HttpRttEstimate_OnNavigationStartName[];
  static constexpr uint64_t kNet_HttpRttEstimate_OnNavigationStartNameHash = UINT64_C(5774646068519167414);
  PageLoad& SetNet_HttpRttEstimate_OnNavigationStart(int64_t value);

  static const char kNet_NetworkBytesName[];
  static constexpr uint64_t kNet_NetworkBytesNameHash = UINT64_C(13399876424414167314);
  PageLoad& SetNet_NetworkBytes(int64_t value);

  static const char kNet_TransportRttEstimate_OnNavigationStartName[];
  static constexpr uint64_t kNet_TransportRttEstimate_OnNavigationStartNameHash = UINT64_C(1015883933811308473);
  PageLoad& SetNet_TransportRttEstimate_OnNavigationStart(int64_t value);

  static const char kPageTiming_ForegroundDurationName[];
  static constexpr uint64_t kPageTiming_ForegroundDurationNameHash = UINT64_C(2843257204381097865);
  PageLoad& SetPageTiming_ForegroundDuration(int64_t value);

  static const char kPageTiming_NavigationToFailedProvisionalLoadName[];
  static constexpr uint64_t kPageTiming_NavigationToFailedProvisionalLoadNameHash = UINT64_C(11986312636689853254);
  PageLoad& SetPageTiming_NavigationToFailedProvisionalLoad(int64_t value);

  static const char kPaintTiming_NavigationToFirstContentfulPaintName[];
  static constexpr uint64_t kPaintTiming_NavigationToFirstContentfulPaintNameHash = UINT64_C(8518716400092239089);
  PageLoad& SetPaintTiming_NavigationToFirstContentfulPaint(int64_t value);

  static const char kPaintTiming_NavigationToFirstPaintName[];
  static constexpr uint64_t kPaintTiming_NavigationToFirstPaintNameHash = UINT64_C(7259095400115977984);
  PageLoad& SetPaintTiming_NavigationToFirstPaint(int64_t value);

  static const char kParseTiming_NavigationToParseStartName[];
  static constexpr uint64_t kParseTiming_NavigationToParseStartNameHash = UINT64_C(13847075934787644884);
  PageLoad& SetParseTiming_NavigationToParseStart(int64_t value);

};

class PageLoad_FromGoogleSearch final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PageLoad_FromGoogleSearch(ukm::SourceId source_id);
  ~PageLoad_FromGoogleSearch() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(8384138607730558665);


};

class PageLoad_ServiceWorkerControlled final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PageLoad_ServiceWorkerControlled(ukm::SourceId source_id);
  ~PageLoad_ServiceWorkerControlled() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(18067304287773255026);


};

class PasswordForm final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PasswordForm(ukm::SourceId source_id);
  ~PasswordForm() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(8060270586115376858);


  static const char kContext_FormSignatureName[];
  static constexpr uint64_t kContext_FormSignatureNameHash = UINT64_C(7963393494324030143);
  PasswordForm& SetContext_FormSignature(int64_t value);

  static const char kManagerFill_ActionName[];
  static constexpr uint64_t kManagerFill_ActionNameHash = UINT64_C(10479452804440058134);
  PasswordForm& SetManagerFill_Action(int64_t value);

  static const char kSaving_Prompt_InteractionName[];
  static constexpr uint64_t kSaving_Prompt_InteractionNameHash = UINT64_C(11260027812017306962);
  PasswordForm& SetSaving_Prompt_Interaction(int64_t value);

  static const char kSaving_Prompt_ShownName[];
  static constexpr uint64_t kSaving_Prompt_ShownNameHash = UINT64_C(17150803645879521558);
  PasswordForm& SetSaving_Prompt_Shown(int64_t value);

  static const char kSaving_Prompt_TriggerName[];
  static constexpr uint64_t kSaving_Prompt_TriggerNameHash = UINT64_C(14370044635698072654);
  PasswordForm& SetSaving_Prompt_Trigger(int64_t value);

  static const char kSubmission_IndicatorName[];
  static constexpr uint64_t kSubmission_IndicatorNameHash = UINT64_C(2585760809099691441);
  PasswordForm& SetSubmission_Indicator(int64_t value);

  static const char kSubmission_ObservedName[];
  static constexpr uint64_t kSubmission_ObservedNameHash = UINT64_C(4515933539223991436);
  PasswordForm& SetSubmission_Observed(int64_t value);

  static const char kSubmission_SubmissionResultName[];
  static constexpr uint64_t kSubmission_SubmissionResultNameHash = UINT64_C(15247671546925217641);
  PasswordForm& SetSubmission_SubmissionResult(int64_t value);

  static const char kSubmission_SubmittedFormTypeName[];
  static constexpr uint64_t kSubmission_SubmittedFormTypeNameHash = UINT64_C(9111877994358158676);
  PasswordForm& SetSubmission_SubmittedFormType(int64_t value);

  static const char kSuppressedAccount_Generated_HTTPSNotHTTPName[];
  static constexpr uint64_t kSuppressedAccount_Generated_HTTPSNotHTTPNameHash = UINT64_C(11392392535506360763);
  PasswordForm& SetSuppressedAccount_Generated_HTTPSNotHTTP(int64_t value);

  static const char kSuppressedAccount_Generated_PSLMatchingName[];
  static constexpr uint64_t kSuppressedAccount_Generated_PSLMatchingNameHash = UINT64_C(4906008180226599888);
  PasswordForm& SetSuppressedAccount_Generated_PSLMatching(int64_t value);

  static const char kSuppressedAccount_Generated_SameOrganizationNameName[];
  static constexpr uint64_t kSuppressedAccount_Generated_SameOrganizationNameNameHash = UINT64_C(9607381571542940970);
  PasswordForm& SetSuppressedAccount_Generated_SameOrganizationName(int64_t value);

  static const char kSuppressedAccount_Manual_HTTPSNotHTTPName[];
  static constexpr uint64_t kSuppressedAccount_Manual_HTTPSNotHTTPNameHash = UINT64_C(6134999548696096746);
  PasswordForm& SetSuppressedAccount_Manual_HTTPSNotHTTP(int64_t value);

  static const char kSuppressedAccount_Manual_PSLMatchingName[];
  static constexpr uint64_t kSuppressedAccount_Manual_PSLMatchingNameHash = UINT64_C(2670858688470284299);
  PasswordForm& SetSuppressedAccount_Manual_PSLMatching(int64_t value);

  static const char kSuppressedAccount_Manual_SameOrganizationNameName[];
  static constexpr uint64_t kSuppressedAccount_Manual_SameOrganizationNameNameHash = UINT64_C(467112644186451910);
  PasswordForm& SetSuppressedAccount_Manual_SameOrganizationName(int64_t value);

  static const char kUpdating_Prompt_InteractionName[];
  static constexpr uint64_t kUpdating_Prompt_InteractionNameHash = UINT64_C(14320711380061622942);
  PasswordForm& SetUpdating_Prompt_Interaction(int64_t value);

  static const char kUpdating_Prompt_ShownName[];
  static constexpr uint64_t kUpdating_Prompt_ShownNameHash = UINT64_C(17781634715365209800);
  PasswordForm& SetUpdating_Prompt_Shown(int64_t value);

  static const char kUpdating_Prompt_TriggerName[];
  static constexpr uint64_t kUpdating_Prompt_TriggerNameHash = UINT64_C(15209183178715629827);
  PasswordForm& SetUpdating_Prompt_Trigger(int64_t value);

  static const char kUser_ActionName[];
  static constexpr uint64_t kUser_ActionNameHash = UINT64_C(14004304744017458347);
  PasswordForm& SetUser_Action(int64_t value);

  static const char kUser_Action_CorrectedUsernameInFormName[];
  static constexpr uint64_t kUser_Action_CorrectedUsernameInFormNameHash = UINT64_C(7751416161539292552);
  PasswordForm& SetUser_Action_CorrectedUsernameInForm(int64_t value);

  static const char kUser_Action_EditedUsernameInBubbleName[];
  static constexpr uint64_t kUser_Action_EditedUsernameInBubbleNameHash = UINT64_C(10966659704643359477);
  PasswordForm& SetUser_Action_EditedUsernameInBubble(int64_t value);

  static const char kUser_Action_SelectedDifferentPasswordInBubbleName[];
  static constexpr uint64_t kUser_Action_SelectedDifferentPasswordInBubbleNameHash = UINT64_C(6311303221302518030);
  PasswordForm& SetUser_Action_SelectedDifferentPasswordInBubble(int64_t value);

  static const char kUser_Action_TriggeredManualFallbackForSavingName[];
  static constexpr uint64_t kUser_Action_TriggeredManualFallbackForSavingNameHash = UINT64_C(2587019996419876036);
  PasswordForm& SetUser_Action_TriggeredManualFallbackForSaving(int64_t value);

  static const char kUser_Action_TriggeredManualFallbackForUpdatingName[];
  static constexpr uint64_t kUser_Action_TriggeredManualFallbackForUpdatingNameHash = UINT64_C(16682562621849757289);
  PasswordForm& SetUser_Action_TriggeredManualFallbackForUpdating(int64_t value);

  static const char kUser_ActionSimplifiedName[];
  static constexpr uint64_t kUser_ActionSimplifiedNameHash = UINT64_C(17601895586902500467);
  PasswordForm& SetUser_ActionSimplified(int64_t value);

};

class PageWithPassword final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PageWithPassword(ukm::SourceId source_id);
  ~PageWithPassword() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2493630448790526384);


  static const char kPageLevelUserActionName[];
  static constexpr uint64_t kPageLevelUserActionNameHash = UINT64_C(10977249896159391035);
  PageWithPassword& SetPageLevelUserAction(int64_t value);

  static const char kProvisionalSaveFailureName[];
  static constexpr uint64_t kProvisionalSaveFailureNameHash = UINT64_C(7470710753863609401);
  PageWithPassword& SetProvisionalSaveFailure(int64_t value);

  static const char kUserModifiedPasswordFieldName[];
  static constexpr uint64_t kUserModifiedPasswordFieldNameHash = UINT64_C(2714307025842210332);
  PageWithPassword& SetUserModifiedPasswordField(int64_t value);

};

class PaymentRequest_CheckoutEvents final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  PaymentRequest_CheckoutEvents(ukm::SourceId source_id);
  ~PaymentRequest_CheckoutEvents() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(9066413457122162526);


  static const char kCompletionStatusName[];
  static constexpr uint64_t kCompletionStatusNameHash = UINT64_C(5881049836470043232);
  PaymentRequest_CheckoutEvents& SetCompletionStatus(int64_t value);

  static const char kEventsName[];
  static constexpr uint64_t kEventsNameHash = UINT64_C(9798134274041538451);
  PaymentRequest_CheckoutEvents& SetEvents(int64_t value);

};

class Permission final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Permission(ukm::SourceId source_id);
  ~Permission() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(17104084284355864347);


  static const char kActionName[];
  static constexpr uint64_t kActionNameHash = UINT64_C(21381969153622804);
  Permission& SetAction(int64_t value);

  static const char kGestureName[];
  static constexpr uint64_t kGestureNameHash = UINT64_C(1976985484619472355);
  Permission& SetGesture(int64_t value);

  static const char kPermissionTypeName[];
  static constexpr uint64_t kPermissionTypeNameHash = UINT64_C(12838086084889581840);
  Permission& SetPermissionType(int64_t value);

  static const char kPriorDismissalsName[];
  static constexpr uint64_t kPriorDismissalsNameHash = UINT64_C(9632910442238752479);
  Permission& SetPriorDismissals(int64_t value);

  static const char kPriorIgnoresName[];
  static constexpr uint64_t kPriorIgnoresNameHash = UINT64_C(1762046784113667081);
  Permission& SetPriorIgnores(int64_t value);

  static const char kSourceName[];
  static constexpr uint64_t kSourceNameHash = UINT64_C(17517803883951840204);
  Permission& SetSource(int64_t value);

};

class Plugins_FlashInstance final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Plugins_FlashInstance(ukm::SourceId source_id);
  ~Plugins_FlashInstance() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2851782918499658607);


};

class Previews final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Previews(ukm::SourceId source_id);
  ~Previews() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16176000469846917671);


  static const char kclient_lofiName[];
  static constexpr uint64_t kclient_lofiNameHash = UINT64_C(15628439540702770601);
  Previews& Setclient_lofi(int64_t value);

  static const char klite_pageName[];
  static constexpr uint64_t klite_pageNameHash = UINT64_C(3925409904844646530);
  Previews& Setlite_page(int64_t value);

  static const char knoscriptName[];
  static constexpr uint64_t knoscriptNameHash = UINT64_C(1356908301518096793);
  Previews& Setnoscript(int64_t value);

  static const char kopt_outName[];
  static constexpr uint64_t kopt_outNameHash = UINT64_C(7653551929040476);
  Previews& Setopt_out(int64_t value);

  static const char korigin_opt_outName[];
  static constexpr uint64_t korigin_opt_outNameHash = UINT64_C(17747894928105999622);
  Previews& Setorigin_opt_out(int64_t value);

  static const char ksave_data_enabledName[];
  static constexpr uint64_t ksave_data_enabledNameHash = UINT64_C(1653640859566235189);
  Previews& Setsave_data_enabled(int64_t value);

  static const char kserver_lofiName[];
  static constexpr uint64_t kserver_lofiNameHash = UINT64_C(2199964769188267144);
  Previews& Setserver_lofi(int64_t value);

};

class ResponsivenessMeasurement final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  ResponsivenessMeasurement(ukm::SourceId source_id);
  ~ResponsivenessMeasurement() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(6628044799783508745);


  static const char kExpectedTaskQueueingDurationName[];
  static constexpr uint64_t kExpectedTaskQueueingDurationNameHash = UINT64_C(17505273149654010352);
  ResponsivenessMeasurement& SetExpectedTaskQueueingDuration(int64_t value);

};

class RendererSchedulerTask final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  RendererSchedulerTask(ukm::SourceId source_id);
  ~RendererSchedulerTask() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(18249372845339521807);


  static const char kFrameStatusName[];
  static constexpr uint64_t kFrameStatusNameHash = UINT64_C(8127006928817986898);
  RendererSchedulerTask& SetFrameStatus(int64_t value);

  static const char kPageSchedulersName[];
  static constexpr uint64_t kPageSchedulersNameHash = UINT64_C(11770126887694907943);
  RendererSchedulerTask& SetPageSchedulers(int64_t value);

  static const char kQueueTypeName[];
  static constexpr uint64_t kQueueTypeNameHash = UINT64_C(11208877159905152236);
  RendererSchedulerTask& SetQueueType(int64_t value);

  static const char kRendererAudibleName[];
  static constexpr uint64_t kRendererAudibleNameHash = UINT64_C(4748648681023634603);
  RendererSchedulerTask& SetRendererAudible(int64_t value);

  static const char kRendererBackgroundedName[];
  static constexpr uint64_t kRendererBackgroundedNameHash = UINT64_C(7540850391372337744);
  RendererSchedulerTask& SetRendererBackgrounded(int64_t value);

  static const char kRendererHiddenName[];
  static constexpr uint64_t kRendererHiddenNameHash = UINT64_C(4143722852895683235);
  RendererSchedulerTask& SetRendererHidden(int64_t value);

  static const char kTaskCPUDurationName[];
  static constexpr uint64_t kTaskCPUDurationNameHash = UINT64_C(16455678090173301579);
  RendererSchedulerTask& SetTaskCPUDuration(int64_t value);

  static const char kTaskDurationName[];
  static constexpr uint64_t kTaskDurationNameHash = UINT64_C(3339793303415972546);
  RendererSchedulerTask& SetTaskDuration(int64_t value);

  static const char kTaskTypeName[];
  static constexpr uint64_t kTaskTypeNameHash = UINT64_C(12639142331433684509);
  RendererSchedulerTask& SetTaskType(int64_t value);

  static const char kUseCaseName[];
  static constexpr uint64_t kUseCaseNameHash = UINT64_C(10388051568539810908);
  RendererSchedulerTask& SetUseCase(int64_t value);

};

class Pepper_Broker final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Pepper_Broker(ukm::SourceId source_id);
  ~Pepper_Broker() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(4863880088883807024);


};

class Popup_Closed final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Popup_Closed(ukm::SourceId source_id);
  ~Popup_Closed() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5373577291340314501);


  static const char kEngagementTimeName[];
  static constexpr uint64_t kEngagementTimeNameHash = UINT64_C(5757927903187539607);
  Popup_Closed& SetEngagementTime(int64_t value);

  static const char kUserInitiatedCloseName[];
  static constexpr uint64_t kUserInitiatedCloseNameHash = UINT64_C(16452490512765540245);
  Popup_Closed& SetUserInitiatedClose(int64_t value);

};

class ScreenBrightness final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  ScreenBrightness(ukm::SourceId source_id);
  ~ScreenBrightness() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(17111718181803892778);


  static const char kBatteryPercentName[];
  static constexpr uint64_t kBatteryPercentNameHash = UINT64_C(3434325767059222004);
  ScreenBrightness& SetBatteryPercent(int64_t value);

  static const char kBrightnessName[];
  static constexpr uint64_t kBrightnessNameHash = UINT64_C(12849653716714311268);
  ScreenBrightness& SetBrightness(int64_t value);

  static const char kDayOfWeekName[];
  static constexpr uint64_t kDayOfWeekNameHash = UINT64_C(15612008539140949281);
  ScreenBrightness& SetDayOfWeek(int64_t value);

  static const char kDeviceModeName[];
  static constexpr uint64_t kDeviceModeNameHash = UINT64_C(17552034499290033273);
  ScreenBrightness& SetDeviceMode(int64_t value);

  static const char kHourOfDayName[];
  static constexpr uint64_t kHourOfDayNameHash = UINT64_C(7458652416968136217);
  ScreenBrightness& SetHourOfDay(int64_t value);

  static const char kIsAutoclickEnabledName[];
  static constexpr uint64_t kIsAutoclickEnabledNameHash = UINT64_C(12085477661763404958);
  ScreenBrightness& SetIsAutoclickEnabled(int64_t value);

  static const char kIsBrailleDisplayConnectedName[];
  static constexpr uint64_t kIsBrailleDisplayConnectedNameHash = UINT64_C(17405292260030448849);
  ScreenBrightness& SetIsBrailleDisplayConnected(int64_t value);

  static const char kIsCaretHighlightEnabledName[];
  static constexpr uint64_t kIsCaretHighlightEnabledNameHash = UINT64_C(10482296846968056654);
  ScreenBrightness& SetIsCaretHighlightEnabled(int64_t value);

  static const char kIsCursorHighlightEnabledName[];
  static constexpr uint64_t kIsCursorHighlightEnabledNameHash = UINT64_C(2111688606646287289);
  ScreenBrightness& SetIsCursorHighlightEnabled(int64_t value);

  static const char kIsFocusHighlightEnabledName[];
  static constexpr uint64_t kIsFocusHighlightEnabledNameHash = UINT64_C(4772586800047270064);
  ScreenBrightness& SetIsFocusHighlightEnabled(int64_t value);

  static const char kIsHighContrastEnabledName[];
  static constexpr uint64_t kIsHighContrastEnabledNameHash = UINT64_C(374822690988321958);
  ScreenBrightness& SetIsHighContrastEnabled(int64_t value);

  static const char kIsLargeCursorEnabledName[];
  static constexpr uint64_t kIsLargeCursorEnabledNameHash = UINT64_C(1440663063306295171);
  ScreenBrightness& SetIsLargeCursorEnabled(int64_t value);

  static const char kIsMagnifierEnabledName[];
  static constexpr uint64_t kIsMagnifierEnabledNameHash = UINT64_C(6711936056248658535);
  ScreenBrightness& SetIsMagnifierEnabled(int64_t value);

  static const char kIsMonoAudioEnabledName[];
  static constexpr uint64_t kIsMonoAudioEnabledNameHash = UINT64_C(11595411019290590600);
  ScreenBrightness& SetIsMonoAudioEnabled(int64_t value);

  static const char kIsSelectToSpeakEnabledName[];
  static constexpr uint64_t kIsSelectToSpeakEnabledNameHash = UINT64_C(4363348572679012907);
  ScreenBrightness& SetIsSelectToSpeakEnabled(int64_t value);

  static const char kIsSpokenFeedbackEnabledName[];
  static constexpr uint64_t kIsSpokenFeedbackEnabledNameHash = UINT64_C(6400938228896171943);
  ScreenBrightness& SetIsSpokenFeedbackEnabled(int64_t value);

  static const char kIsSwitchAccessEnabledName[];
  static constexpr uint64_t kIsSwitchAccessEnabledNameHash = UINT64_C(1769366891414824383);
  ScreenBrightness& SetIsSwitchAccessEnabled(int64_t value);

  static const char kIsVideoPlayingName[];
  static constexpr uint64_t kIsVideoPlayingNameHash = UINT64_C(1871421023467865761);
  ScreenBrightness& SetIsVideoPlaying(int64_t value);

  static const char kIsVirtualKeyboardEnabledName[];
  static constexpr uint64_t kIsVirtualKeyboardEnabledNameHash = UINT64_C(16129358140694558991);
  ScreenBrightness& SetIsVirtualKeyboardEnabled(int64_t value);

  static const char kLastActivityTimeSecName[];
  static constexpr uint64_t kLastActivityTimeSecNameHash = UINT64_C(2653130242002900914);
  ScreenBrightness& SetLastActivityTimeSec(int64_t value);

  static const char kNightLightTemperaturePercentName[];
  static constexpr uint64_t kNightLightTemperaturePercentNameHash = UINT64_C(10702391938559175141);
  ScreenBrightness& SetNightLightTemperaturePercent(int64_t value);

  static const char kNumRecentKeyEventsName[];
  static constexpr uint64_t kNumRecentKeyEventsNameHash = UINT64_C(17517294973322255376);
  ScreenBrightness& SetNumRecentKeyEvents(int64_t value);

  static const char kNumRecentMouseEventsName[];
  static constexpr uint64_t kNumRecentMouseEventsNameHash = UINT64_C(6164169136009494499);
  ScreenBrightness& SetNumRecentMouseEvents(int64_t value);

  static const char kNumRecentStylusEventsName[];
  static constexpr uint64_t kNumRecentStylusEventsNameHash = UINT64_C(13185006921548112034);
  ScreenBrightness& SetNumRecentStylusEvents(int64_t value);

  static const char kNumRecentTouchEventsName[];
  static constexpr uint64_t kNumRecentTouchEventsNameHash = UINT64_C(14067961327568630776);
  ScreenBrightness& SetNumRecentTouchEvents(int64_t value);

  static const char kOnBatteryName[];
  static constexpr uint64_t kOnBatteryNameHash = UINT64_C(9497943841916154435);
  ScreenBrightness& SetOnBattery(int64_t value);

  static const char kPreviousBrightnessName[];
  static constexpr uint64_t kPreviousBrightnessNameHash = UINT64_C(28161076988593854);
  ScreenBrightness& SetPreviousBrightness(int64_t value);

  static const char kReasonName[];
  static constexpr uint64_t kReasonNameHash = UINT64_C(18445816987321669298);
  ScreenBrightness& SetReason(int64_t value);

  static const char kRecentTimeActiveSecName[];
  static constexpr uint64_t kRecentTimeActiveSecNameHash = UINT64_C(8488182886786891867);
  ScreenBrightness& SetRecentTimeActiveSec(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  ScreenBrightness& SetSequenceId(int64_t value);

  static const char kTimeSinceLastEventSecName[];
  static constexpr uint64_t kTimeSinceLastEventSecNameHash = UINT64_C(8786008257637497412);
  ScreenBrightness& SetTimeSinceLastEventSec(int64_t value);

};

class Security_SiteEngagement final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Security_SiteEngagement(ukm::SourceId source_id);
  ~Security_SiteEngagement() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(10614135803401894002);


  static const char kFinalSecurityLevelName[];
  static constexpr uint64_t kFinalSecurityLevelNameHash = UINT64_C(8095555624405238595);
  Security_SiteEngagement& SetFinalSecurityLevel(int64_t value);

  static const char kInitialSecurityLevelName[];
  static constexpr uint64_t kInitialSecurityLevelNameHash = UINT64_C(7293396472423676335);
  Security_SiteEngagement& SetInitialSecurityLevel(int64_t value);

  static const char kScoreDeltaName[];
  static constexpr uint64_t kScoreDeltaNameHash = UINT64_C(9558031948839307480);
  Security_SiteEngagement& SetScoreDelta(int64_t value);

  static const char kScoreFinalName[];
  static constexpr uint64_t kScoreFinalNameHash = UINT64_C(16975692316282427253);
  Security_SiteEngagement& SetScoreFinal(int64_t value);

};

class SiteIsolation_XSD_Browser_Blocked final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  SiteIsolation_XSD_Browser_Blocked(ukm::SourceId source_id);
  ~SiteIsolation_XSD_Browser_Blocked() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12521351862360782743);


  static const char kCanonicalMimeTypeName[];
  static constexpr uint64_t kCanonicalMimeTypeNameHash = UINT64_C(17058649533868141957);
  SiteIsolation_XSD_Browser_Blocked& SetCanonicalMimeType(int64_t value);

  static const char kContentLengthWasZeroName[];
  static constexpr uint64_t kContentLengthWasZeroNameHash = UINT64_C(8450468148941141398);
  SiteIsolation_XSD_Browser_Blocked& SetContentLengthWasZero(int64_t value);

  static const char kContentResourceTypeName[];
  static constexpr uint64_t kContentResourceTypeNameHash = UINT64_C(15252314800468928817);
  SiteIsolation_XSD_Browser_Blocked& SetContentResourceType(int64_t value);

  static const char kHttpResponseCodeName[];
  static constexpr uint64_t kHttpResponseCodeNameHash = UINT64_C(10576484105257298243);
  SiteIsolation_XSD_Browser_Blocked& SetHttpResponseCode(int64_t value);

  static const char kNeededSniffingName[];
  static constexpr uint64_t kNeededSniffingNameHash = UINT64_C(8063244364663557032);
  SiteIsolation_XSD_Browser_Blocked& SetNeededSniffing(int64_t value);

};

class SubresourceFilter final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  SubresourceFilter(ukm::SourceId source_id);
  ~SubresourceFilter() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16234573202714536926);


  static const char kActivationDecisionName[];
  static constexpr uint64_t kActivationDecisionNameHash = UINT64_C(8340568698825149996);
  SubresourceFilter& SetActivationDecision(int64_t value);

  static const char kDryRunName[];
  static constexpr uint64_t kDryRunNameHash = UINT64_C(15305931645510130195);
  SubresourceFilter& SetDryRun(int64_t value);

};

class Tab_RendererOOM final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Tab_RendererOOM(ukm::SourceId source_id);
  ~Tab_RendererOOM() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(18395820288494961196);


  static const char kTimeSinceLastNavigationName[];
  static constexpr uint64_t kTimeSinceLastNavigationNameHash = UINT64_C(13938385952041404158);
  Tab_RendererOOM& SetTimeSinceLastNavigation(int64_t value);

};

class Translate final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  Translate(ukm::SourceId source_id);
  ~Translate() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16054416016310256565);


  static const char kAcceptCountName[];
  static constexpr uint64_t kAcceptCountNameHash = UINT64_C(8502235306677298033);
  Translate& SetAcceptCount(int64_t value);

  static const char kCountryName[];
  static constexpr uint64_t kCountryNameHash = UINT64_C(6445051938772793705);
  Translate& SetCountry(int64_t value);

  static const char kDeclineCountName[];
  static constexpr uint64_t kDeclineCountNameHash = UINT64_C(3180238090454488835);
  Translate& SetDeclineCount(int64_t value);

  static const char kEventTypeName[];
  static constexpr uint64_t kEventTypeNameHash = UINT64_C(5446425777535537951);
  Translate& SetEventType(int64_t value);

  static const char kIgnoreCountName[];
  static constexpr uint64_t kIgnoreCountNameHash = UINT64_C(14896378584437100759);
  Translate& SetIgnoreCount(int64_t value);

  static const char kRankerResponseName[];
  static constexpr uint64_t kRankerResponseNameHash = UINT64_C(6404631249487430957);
  Translate& SetRankerResponse(int64_t value);

  static const char kRankerVersionName[];
  static constexpr uint64_t kRankerVersionNameHash = UINT64_C(10214100949042673155);
  Translate& SetRankerVersion(int64_t value);

  static const char kSourceLanguageName[];
  static constexpr uint64_t kSourceLanguageNameHash = UINT64_C(15558163265405593795);
  Translate& SetSourceLanguage(int64_t value);

  static const char kTargetLanguageName[];
  static constexpr uint64_t kTargetLanguageNameHash = UINT64_C(8387451134401416124);
  Translate& SetTargetLanguage(int64_t value);

};

class TabManager_Background_FirstAlertFired final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_FirstAlertFired(ukm::SourceId source_id);
  ~TabManager_Background_FirstAlertFired() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(6962158576008124011);


  static const char kIsMainFrameName[];
  static constexpr uint64_t kIsMainFrameNameHash = UINT64_C(7266626398784684486);
  TabManager_Background_FirstAlertFired& SetIsMainFrame(int64_t value);

  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_FirstAlertFired& SetTimeFromBackgrounded(int64_t value);

};

class TabManager_Background_FirstAudioStarts final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_FirstAudioStarts(ukm::SourceId source_id);
  ~TabManager_Background_FirstAudioStarts() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(6253115585121265178);


  static const char kIsMainFrameName[];
  static constexpr uint64_t kIsMainFrameNameHash = UINT64_C(7266626398784684486);
  TabManager_Background_FirstAudioStarts& SetIsMainFrame(int64_t value);

  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_FirstAudioStarts& SetTimeFromBackgrounded(int64_t value);

};

class TabManager_Background_FirstFaviconUpdated final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_FirstFaviconUpdated(ukm::SourceId source_id);
  ~TabManager_Background_FirstFaviconUpdated() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(7684352713481018374);


  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_FirstFaviconUpdated& SetTimeFromBackgrounded(int64_t value);

};

class TabManager_Background_FirstNonPersistentNotificationCreated final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_FirstNonPersistentNotificationCreated(ukm::SourceId source_id);
  ~TabManager_Background_FirstNonPersistentNotificationCreated() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5800172692978642430);


  static const char kIsMainFrameName[];
  static constexpr uint64_t kIsMainFrameNameHash = UINT64_C(7266626398784684486);
  TabManager_Background_FirstNonPersistentNotificationCreated& SetIsMainFrame(int64_t value);

  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_FirstNonPersistentNotificationCreated& SetTimeFromBackgrounded(int64_t value);

};

class TabManager_Background_FirstTitleUpdated final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_FirstTitleUpdated(ukm::SourceId source_id);
  ~TabManager_Background_FirstTitleUpdated() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(13224923626166210718);


  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_FirstTitleUpdated& SetTimeFromBackgrounded(int64_t value);

};

class TabManager_Background_ForegroundedOrClosed final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Background_ForegroundedOrClosed(ukm::SourceId source_id);
  ~TabManager_Background_ForegroundedOrClosed() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(11823633373787678555);


  static const char kIsForegroundedName[];
  static constexpr uint64_t kIsForegroundedNameHash = UINT64_C(18321524612313682043);
  TabManager_Background_ForegroundedOrClosed& SetIsForegrounded(int64_t value);

  static const char kMRUIndexName[];
  static constexpr uint64_t kMRUIndexNameHash = UINT64_C(383823483369014150);
  TabManager_Background_ForegroundedOrClosed& SetMRUIndex(int64_t value);

  static const char kTimeFromBackgroundedName[];
  static constexpr uint64_t kTimeFromBackgroundedNameHash = UINT64_C(11659621178387050072);
  TabManager_Background_ForegroundedOrClosed& SetTimeFromBackgrounded(int64_t value);

  static const char kTotalTabCountName[];
  static constexpr uint64_t kTotalTabCountNameHash = UINT64_C(13301182033056356455);
  TabManager_Background_ForegroundedOrClosed& SetTotalTabCount(int64_t value);

};

class TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id);
  ~TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2947416194925354680);


  static const char kBackgroundTabLoadingCountName[];
  static constexpr uint64_t kBackgroundTabLoadingCountNameHash = UINT64_C(8108652028127565967);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetBackgroundTabLoadingCount(int64_t value);

  static const char kBackgroundTabOpeningSessionIdName[];
  static constexpr uint64_t kBackgroundTabOpeningSessionIdNameHash = UINT64_C(18258324678902146719);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetBackgroundTabOpeningSessionId(int64_t value);

  static const char kBackgroundTabPendingCountName[];
  static constexpr uint64_t kBackgroundTabPendingCountNameHash = UINT64_C(16383019845237238944);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetBackgroundTabPendingCount(int64_t value);

  static const char kExpectedTaskQueueingDurationName[];
  static constexpr uint64_t kExpectedTaskQueueingDurationNameHash = UINT64_C(17505273149654010352);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetExpectedTaskQueueingDuration(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSequenceId(int64_t value);

  static const char kSystemTabCountName[];
  static constexpr uint64_t kSystemTabCountNameHash = UINT64_C(14205160604226729773);
  TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSystemTabCount(int64_t value);

};

class TabManager_LifecycleStateChange final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_LifecycleStateChange(ukm::SourceId source_id);
  ~TabManager_LifecycleStateChange() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(15361214325300303131);


  static const char kFailureGlobalBlacklistName[];
  static constexpr uint64_t kFailureGlobalBlacklistNameHash = UINT64_C(14476327180189802143);
  TabManager_LifecycleStateChange& SetFailureGlobalBlacklist(int64_t value);

  static const char kFailureHeuristicAudioName[];
  static constexpr uint64_t kFailureHeuristicAudioNameHash = UINT64_C(12990459205506514618);
  TabManager_LifecycleStateChange& SetFailureHeuristicAudio(int64_t value);

  static const char kFailureHeuristicFaviconName[];
  static constexpr uint64_t kFailureHeuristicFaviconNameHash = UINT64_C(6690922114157445648);
  TabManager_LifecycleStateChange& SetFailureHeuristicFavicon(int64_t value);

  static const char kFailureHeuristicInsufficientObservationName[];
  static constexpr uint64_t kFailureHeuristicInsufficientObservationNameHash = UINT64_C(9049974075249313421);
  TabManager_LifecycleStateChange& SetFailureHeuristicInsufficientObservation(int64_t value);

  static const char kFailureHeuristicNotificationsName[];
  static constexpr uint64_t kFailureHeuristicNotificationsNameHash = UINT64_C(17387734332470541652);
  TabManager_LifecycleStateChange& SetFailureHeuristicNotifications(int64_t value);

  static const char kFailureHeuristicTitleName[];
  static constexpr uint64_t kFailureHeuristicTitleNameHash = UINT64_C(233030549471232823);
  TabManager_LifecycleStateChange& SetFailureHeuristicTitle(int64_t value);

  static const char kFailureLifecyclesEnterprisePolicyOptOutName[];
  static constexpr uint64_t kFailureLifecyclesEnterprisePolicyOptOutNameHash = UINT64_C(1568209932272358843);
  TabManager_LifecycleStateChange& SetFailureLifecyclesEnterprisePolicyOptOut(int64_t value);

  static const char kFailureLifecyclesFeaturePolicyOptOutName[];
  static constexpr uint64_t kFailureLifecyclesFeaturePolicyOptOutNameHash = UINT64_C(9432860270484459197);
  TabManager_LifecycleStateChange& SetFailureLifecyclesFeaturePolicyOptOut(int64_t value);

  static const char kFailureLiveStateCapturingName[];
  static constexpr uint64_t kFailureLiveStateCapturingNameHash = UINT64_C(1746761367355389825);
  TabManager_LifecycleStateChange& SetFailureLiveStateCapturing(int64_t value);

  static const char kFailureLiveStateExtensionDisallowedName[];
  static constexpr uint64_t kFailureLiveStateExtensionDisallowedNameHash = UINT64_C(14913603322702848559);
  TabManager_LifecycleStateChange& SetFailureLiveStateExtensionDisallowed(int64_t value);

  static const char kFailureLiveStateFormEntryName[];
  static constexpr uint64_t kFailureLiveStateFormEntryNameHash = UINT64_C(2603883520869794602);
  TabManager_LifecycleStateChange& SetFailureLiveStateFormEntry(int64_t value);

  static const char kFailureLiveStateIsPDFName[];
  static constexpr uint64_t kFailureLiveStateIsPDFNameHash = UINT64_C(13057031957762159216);
  TabManager_LifecycleStateChange& SetFailureLiveStateIsPDF(int64_t value);

  static const char kFailureLiveStateMirroringName[];
  static constexpr uint64_t kFailureLiveStateMirroringNameHash = UINT64_C(12092063214704219593);
  TabManager_LifecycleStateChange& SetFailureLiveStateMirroring(int64_t value);

  static const char kFailureLiveStatePlayingAudioName[];
  static constexpr uint64_t kFailureLiveStatePlayingAudioNameHash = UINT64_C(10433273516404381618);
  TabManager_LifecycleStateChange& SetFailureLiveStatePlayingAudio(int64_t value);

  static const char kFailureLiveStateUsingWebSocketsName[];
  static constexpr uint64_t kFailureLiveStateUsingWebSocketsNameHash = UINT64_C(9779613440513908570);
  TabManager_LifecycleStateChange& SetFailureLiveStateUsingWebSockets(int64_t value);

  static const char kFailureLiveStateUsingWebUSBName[];
  static constexpr uint64_t kFailureLiveStateUsingWebUSBNameHash = UINT64_C(1264204074714928849);
  TabManager_LifecycleStateChange& SetFailureLiveStateUsingWebUSB(int64_t value);

  static const char kFailureLiveStateVisibleName[];
  static constexpr uint64_t kFailureLiveStateVisibleNameHash = UINT64_C(17796621035327630907);
  TabManager_LifecycleStateChange& SetFailureLiveStateVisible(int64_t value);

  static const char kLifecycleStateChangeReasonName[];
  static constexpr uint64_t kLifecycleStateChangeReasonNameHash = UINT64_C(6890089423438918274);
  TabManager_LifecycleStateChange& SetLifecycleStateChangeReason(int64_t value);

  static const char kNewLifecycleStateName[];
  static constexpr uint64_t kNewLifecycleStateNameHash = UINT64_C(12484427846537283830);
  TabManager_LifecycleStateChange& SetNewLifecycleState(int64_t value);

  static const char kOldLifecycleStateName[];
  static constexpr uint64_t kOldLifecycleStateNameHash = UINT64_C(981152026490365644);
  TabManager_LifecycleStateChange& SetOldLifecycleState(int64_t value);

  static const char kOutcomeName[];
  static constexpr uint64_t kOutcomeNameHash = UINT64_C(14948499774890759507);
  TabManager_LifecycleStateChange& SetOutcome(int64_t value);

  static const char kSuccessGlobalWhitelistName[];
  static constexpr uint64_t kSuccessGlobalWhitelistNameHash = UINT64_C(7684829310602972911);
  TabManager_LifecycleStateChange& SetSuccessGlobalWhitelist(int64_t value);

  static const char kSuccessHeuristicName[];
  static constexpr uint64_t kSuccessHeuristicNameHash = UINT64_C(7282383856026303779);
  TabManager_LifecycleStateChange& SetSuccessHeuristic(int64_t value);

  static const char kSuccessLifecyclesFeaturePolicyOptInName[];
  static constexpr uint64_t kSuccessLifecyclesFeaturePolicyOptInNameHash = UINT64_C(7650105900317415311);
  TabManager_LifecycleStateChange& SetSuccessLifecyclesFeaturePolicyOptIn(int64_t value);

  static const char kTimeSinceNavigationMsName[];
  static constexpr uint64_t kTimeSinceNavigationMsNameHash = UINT64_C(3766804751933420871);
  TabManager_LifecycleStateChange& SetTimeSinceNavigationMs(int64_t value);

  static const char kTimeSinceVisibilityStateChangeMsName[];
  static constexpr uint64_t kTimeSinceVisibilityStateChangeMsNameHash = UINT64_C(18111893678766007520);
  TabManager_LifecycleStateChange& SetTimeSinceVisibilityStateChangeMs(int64_t value);

  static const char kTransitionForcedName[];
  static constexpr uint64_t kTransitionForcedNameHash = UINT64_C(18125642282066928712);
  TabManager_LifecycleStateChange& SetTransitionForced(int64_t value);

  static const char kVisibilityStateName[];
  static constexpr uint64_t kVisibilityStateNameHash = UINT64_C(14490984458414165309);
  TabManager_LifecycleStateChange& SetVisibilityState(int64_t value);

};

class TabManager_WindowMetrics final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_WindowMetrics(ukm::SourceId source_id);
  ~TabManager_WindowMetrics() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(12562637272871338124);


  static const char kIsActiveName[];
  static constexpr uint64_t kIsActiveNameHash = UINT64_C(145730663672890399);
  TabManager_WindowMetrics& SetIsActive(int64_t value);

  static const char kShowStateName[];
  static constexpr uint64_t kShowStateNameHash = UINT64_C(6352664330247173052);
  TabManager_WindowMetrics& SetShowState(int64_t value);

  static const char kTabCountName[];
  static constexpr uint64_t kTabCountNameHash = UINT64_C(1513537862956601777);
  TabManager_WindowMetrics& SetTabCount(int64_t value);

  static const char kTypeName[];
  static constexpr uint64_t kTypeNameHash = UINT64_C(11671684778792498320);
  TabManager_WindowMetrics& SetType(int64_t value);

  static const char kWindowIdName[];
  static constexpr uint64_t kWindowIdNameHash = UINT64_C(2294382318193398891);
  TabManager_WindowMetrics& SetWindowId(int64_t value);

};

class TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped(ukm::SourceId source_id);
  ~TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5089020187687107285);


  static const char kBackgroundTabLoadingCountName[];
  static constexpr uint64_t kBackgroundTabLoadingCountNameHash = UINT64_C(8108652028127565967);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetBackgroundTabLoadingCount(int64_t value);

  static const char kBackgroundTabOpeningSessionIdName[];
  static constexpr uint64_t kBackgroundTabOpeningSessionIdNameHash = UINT64_C(18258324678902146719);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetBackgroundTabOpeningSessionId(int64_t value);

  static const char kBackgroundTabPendingCountName[];
  static constexpr uint64_t kBackgroundTabPendingCountNameHash = UINT64_C(16383019845237238944);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetBackgroundTabPendingCount(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetSequenceId(int64_t value);

  static const char kSystemTabCountName[];
  static constexpr uint64_t kSystemTabCountNameHash = UINT64_C(14205160604226729773);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetSystemTabCount(int64_t value);

  static const char kTabSwitchLoadTimeName[];
  static constexpr uint64_t kTabSwitchLoadTimeNameHash = UINT64_C(10500091388990852613);
  TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& SetTabSwitchLoadTime(int64_t value);

};

class TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad(ukm::SourceId source_id);
  ~TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(5185149670019600507);


  static const char kSessionRestoreTabCountName[];
  static constexpr uint64_t kSessionRestoreTabCountNameHash = UINT64_C(17950866683835588578);
  TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& SetSessionRestoreTabCount(int64_t value);

  static const char kSystemTabCountName[];
  static constexpr uint64_t kSystemTabCountNameHash = UINT64_C(14205160604226729773);
  TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& SetSystemTabCount(int64_t value);

};

class TabManager_Experimental_SessionRestore_TabSwitchLoadStopped final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped(ukm::SourceId source_id);
  ~TabManager_Experimental_SessionRestore_TabSwitchLoadStopped() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(10989149245696867796);


  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& SetSequenceId(int64_t value);

  static const char kSessionRestoreSessionIdName[];
  static constexpr uint64_t kSessionRestoreSessionIdNameHash = UINT64_C(15125204540231964086);
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& SetSessionRestoreSessionId(int64_t value);

  static const char kSessionRestoreTabCountName[];
  static constexpr uint64_t kSessionRestoreTabCountNameHash = UINT64_C(17950866683835588578);
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& SetSessionRestoreTabCount(int64_t value);

  static const char kSystemTabCountName[];
  static constexpr uint64_t kSystemTabCountNameHash = UINT64_C(14205160604226729773);
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& SetSystemTabCount(int64_t value);

  static const char kTabSwitchLoadTimeName[];
  static constexpr uint64_t kTabSwitchLoadTimeNameHash = UINT64_C(10500091388990852613);
  TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& SetTabSwitchLoadTime(int64_t value);

};

class TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id);
  ~TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(8999972273877232390);


  static const char kExpectedTaskQueueingDurationName[];
  static constexpr uint64_t kExpectedTaskQueueingDurationNameHash = UINT64_C(17505273149654010352);
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetExpectedTaskQueueingDuration(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSequenceId(int64_t value);

  static const char kSessionRestoreSessionIdName[];
  static constexpr uint64_t kSessionRestoreSessionIdNameHash = UINT64_C(15125204540231964086);
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSessionRestoreSessionId(int64_t value);

  static const char kSessionRestoreTabCountName[];
  static constexpr uint64_t kSessionRestoreTabCountNameHash = UINT64_C(17950866683835588578);
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSessionRestoreTabCount(int64_t value);

  static const char kSystemTabCountName[];
  static constexpr uint64_t kSystemTabCountNameHash = UINT64_C(14205160604226729773);
  TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& SetSystemTabCount(int64_t value);

};

class TabManager_TabLifetime final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_TabLifetime(ukm::SourceId source_id);
  ~TabManager_TabLifetime() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16307465990132225428);


  static const char kTimeSinceNavigationName[];
  static constexpr uint64_t kTimeSinceNavigationNameHash = UINT64_C(18199427499238622919);
  TabManager_TabLifetime& SetTimeSinceNavigation(int64_t value);

};

class UserActivity final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  UserActivity(ukm::SourceId source_id);
  ~UserActivity() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2395897864454822590);


  static const char kBatteryPercentName[];
  static constexpr uint64_t kBatteryPercentNameHash = UINT64_C(3434325767059222004);
  UserActivity& SetBatteryPercent(int64_t value);

  static const char kDeviceManagementName[];
  static constexpr uint64_t kDeviceManagementNameHash = UINT64_C(3879735998068387644);
  UserActivity& SetDeviceManagement(int64_t value);

  static const char kDeviceModeName[];
  static constexpr uint64_t kDeviceModeNameHash = UINT64_C(17552034499290033273);
  UserActivity& SetDeviceMode(int64_t value);

  static const char kDeviceTypeName[];
  static constexpr uint64_t kDeviceTypeNameHash = UINT64_C(7795620498098931292);
  UserActivity& SetDeviceType(int64_t value);

  static const char kEventLogDurationName[];
  static constexpr uint64_t kEventLogDurationNameHash = UINT64_C(9294112700816090959);
  UserActivity& SetEventLogDuration(int64_t value);

  static const char kEventReasonName[];
  static constexpr uint64_t kEventReasonNameHash = UINT64_C(16835794410928463032);
  UserActivity& SetEventReason(int64_t value);

  static const char kEventTypeName[];
  static constexpr uint64_t kEventTypeNameHash = UINT64_C(5446425777535537951);
  UserActivity& SetEventType(int64_t value);

  static const char kKeyEventsInLastHourName[];
  static constexpr uint64_t kKeyEventsInLastHourNameHash = UINT64_C(11299844146219290596);
  UserActivity& SetKeyEventsInLastHour(int64_t value);

  static const char kLastActivityDayName[];
  static constexpr uint64_t kLastActivityDayNameHash = UINT64_C(14339230944188901365);
  UserActivity& SetLastActivityDay(int64_t value);

  static const char kLastActivityTimeName[];
  static constexpr uint64_t kLastActivityTimeNameHash = UINT64_C(14831110523312780762);
  UserActivity& SetLastActivityTime(int64_t value);

  static const char kLastUserActivityTimeName[];
  static constexpr uint64_t kLastUserActivityTimeNameHash = UINT64_C(8788245832941149939);
  UserActivity& SetLastUserActivityTime(int64_t value);

  static const char kMouseEventsInLastHourName[];
  static constexpr uint64_t kMouseEventsInLastHourNameHash = UINT64_C(11835042666579861839);
  UserActivity& SetMouseEventsInLastHour(int64_t value);

  static const char kOnBatteryName[];
  static constexpr uint64_t kOnBatteryNameHash = UINT64_C(9497943841916154435);
  UserActivity& SetOnBattery(int64_t value);

  static const char kRecentTimeActiveName[];
  static constexpr uint64_t kRecentTimeActiveNameHash = UINT64_C(14147624997432742521);
  UserActivity& SetRecentTimeActive(int64_t value);

  static const char kRecentVideoPlayingTimeName[];
  static constexpr uint64_t kRecentVideoPlayingTimeNameHash = UINT64_C(13380566763432764429);
  UserActivity& SetRecentVideoPlayingTime(int64_t value);

  static const char kScreenDimDelayName[];
  static constexpr uint64_t kScreenDimDelayNameHash = UINT64_C(16833327722358108459);
  UserActivity& SetScreenDimDelay(int64_t value);

  static const char kScreenDimmedInitiallyName[];
  static constexpr uint64_t kScreenDimmedInitiallyNameHash = UINT64_C(10179091906473872128);
  UserActivity& SetScreenDimmedInitially(int64_t value);

  static const char kScreenDimOccurredName[];
  static constexpr uint64_t kScreenDimOccurredNameHash = UINT64_C(9781953209119865440);
  UserActivity& SetScreenDimOccurred(int64_t value);

  static const char kScreenDimToOffDelayName[];
  static constexpr uint64_t kScreenDimToOffDelayNameHash = UINT64_C(6534684685018748413);
  UserActivity& SetScreenDimToOffDelay(int64_t value);

  static const char kScreenLockedInitiallyName[];
  static constexpr uint64_t kScreenLockedInitiallyNameHash = UINT64_C(17101958306385581732);
  UserActivity& SetScreenLockedInitially(int64_t value);

  static const char kScreenLockOccurredName[];
  static constexpr uint64_t kScreenLockOccurredNameHash = UINT64_C(15627670727691026054);
  UserActivity& SetScreenLockOccurred(int64_t value);

  static const char kScreenOffInitiallyName[];
  static constexpr uint64_t kScreenOffInitiallyNameHash = UINT64_C(7660996110440871532);
  UserActivity& SetScreenOffInitially(int64_t value);

  static const char kScreenOffOccurredName[];
  static constexpr uint64_t kScreenOffOccurredNameHash = UINT64_C(2742307602633466727);
  UserActivity& SetScreenOffOccurred(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  UserActivity& SetSequenceId(int64_t value);

  static const char kTimeSinceLastKeyName[];
  static constexpr uint64_t kTimeSinceLastKeyNameHash = UINT64_C(13324245886378099422);
  UserActivity& SetTimeSinceLastKey(int64_t value);

  static const char kTimeSinceLastMouseName[];
  static constexpr uint64_t kTimeSinceLastMouseNameHash = UINT64_C(17332744557102175004);
  UserActivity& SetTimeSinceLastMouse(int64_t value);

  static const char kTimeSinceLastTouchName[];
  static constexpr uint64_t kTimeSinceLastTouchNameHash = UINT64_C(14082842047789348566);
  UserActivity& SetTimeSinceLastTouch(int64_t value);

  static const char kTimeSinceLastVideoEndedName[];
  static constexpr uint64_t kTimeSinceLastVideoEndedNameHash = UINT64_C(10757682901092788351);
  UserActivity& SetTimeSinceLastVideoEnded(int64_t value);

  static const char kTouchEventsInLastHourName[];
  static constexpr uint64_t kTouchEventsInLastHourNameHash = UINT64_C(10049871984955982925);
  UserActivity& SetTouchEventsInLastHour(int64_t value);

};

class UserActivityId final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  UserActivityId(ukm::SourceId source_id);
  ~UserActivityId() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(13821826834442202003);


  static const char kActivityIdName[];
  static constexpr uint64_t kActivityIdNameHash = UINT64_C(11740600895634714945);
  UserActivityId& SetActivityId(int64_t value);

  static const char kContentTypeName[];
  static constexpr uint64_t kContentTypeNameHash = UINT64_C(13265227184175150385);
  UserActivityId& SetContentType(int64_t value);

  static const char kHasFormEntryName[];
  static constexpr uint64_t kHasFormEntryNameHash = UINT64_C(5531671421920391819);
  UserActivityId& SetHasFormEntry(int64_t value);

  static const char kIsActiveName[];
  static constexpr uint64_t kIsActiveNameHash = UINT64_C(145730663672890399);
  UserActivityId& SetIsActive(int64_t value);

  static const char kIsBrowserFocusedName[];
  static constexpr uint64_t kIsBrowserFocusedNameHash = UINT64_C(10440852628796553876);
  UserActivityId& SetIsBrowserFocused(int64_t value);

  static const char kIsBrowserVisibleName[];
  static constexpr uint64_t kIsBrowserVisibleNameHash = UINT64_C(3688875443071437947);
  UserActivityId& SetIsBrowserVisible(int64_t value);

  static const char kIsTopmostBrowserName[];
  static constexpr uint64_t kIsTopmostBrowserNameHash = UINT64_C(1520583382931955160);
  UserActivityId& SetIsTopmostBrowser(int64_t value);

  static const char kSiteEngagementScoreName[];
  static constexpr uint64_t kSiteEngagementScoreNameHash = UINT64_C(325008584515519231);
  UserActivityId& SetSiteEngagementScore(int64_t value);

};

class TabManager_TabMetrics final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  TabManager_TabMetrics(ukm::SourceId source_id);
  ~TabManager_TabMetrics() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16400979786435208530);


  static const char kContentTypeName[];
  static constexpr uint64_t kContentTypeNameHash = UINT64_C(13265227184175150385);
  TabManager_TabMetrics& SetContentType(int64_t value);

  static const char kDefaultProtocolHandlerName[];
  static constexpr uint64_t kDefaultProtocolHandlerNameHash = UINT64_C(9621417131485279191);
  TabManager_TabMetrics& SetDefaultProtocolHandler(int64_t value);

  static const char kHasBeforeUnloadHandlerName[];
  static constexpr uint64_t kHasBeforeUnloadHandlerNameHash = UINT64_C(8451320907412850621);
  TabManager_TabMetrics& SetHasBeforeUnloadHandler(int64_t value);

  static const char kHasFormEntryName[];
  static constexpr uint64_t kHasFormEntryNameHash = UINT64_C(5531671421920391819);
  TabManager_TabMetrics& SetHasFormEntry(int64_t value);

  static const char kIsExtensionProtectedName[];
  static constexpr uint64_t kIsExtensionProtectedNameHash = UINT64_C(672646190625971503);
  TabManager_TabMetrics& SetIsExtensionProtected(int64_t value);

  static const char kIsPinnedName[];
  static constexpr uint64_t kIsPinnedNameHash = UINT64_C(18335894855165892645);
  TabManager_TabMetrics& SetIsPinned(int64_t value);

  static const char kKeyEventCountName[];
  static constexpr uint64_t kKeyEventCountNameHash = UINT64_C(4163051610151272998);
  TabManager_TabMetrics& SetKeyEventCount(int64_t value);

  static const char kMouseEventCountName[];
  static constexpr uint64_t kMouseEventCountNameHash = UINT64_C(309543994040533082);
  TabManager_TabMetrics& SetMouseEventCount(int64_t value);

  static const char kNavigationEntryCountName[];
  static constexpr uint64_t kNavigationEntryCountNameHash = UINT64_C(551192753498951443);
  TabManager_TabMetrics& SetNavigationEntryCount(int64_t value);

  static const char kPageTransitionCoreTypeName[];
  static constexpr uint64_t kPageTransitionCoreTypeNameHash = UINT64_C(8252723677936572940);
  TabManager_TabMetrics& SetPageTransitionCoreType(int64_t value);

  static const char kPageTransitionFromAddressBarName[];
  static constexpr uint64_t kPageTransitionFromAddressBarNameHash = UINT64_C(622306465519288550);
  TabManager_TabMetrics& SetPageTransitionFromAddressBar(int64_t value);

  static const char kPageTransitionIsRedirectName[];
  static constexpr uint64_t kPageTransitionIsRedirectNameHash = UINT64_C(385608697209044372);
  TabManager_TabMetrics& SetPageTransitionIsRedirect(int64_t value);

  static const char kSequenceIdName[];
  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  TabManager_TabMetrics& SetSequenceId(int64_t value);

  static const char kSiteEngagementScoreName[];
  static constexpr uint64_t kSiteEngagementScoreNameHash = UINT64_C(325008584515519231);
  TabManager_TabMetrics& SetSiteEngagementScore(int64_t value);

  static const char kTouchEventCountName[];
  static constexpr uint64_t kTouchEventCountNameHash = UINT64_C(15943190177665830246);
  TabManager_TabMetrics& SetTouchEventCount(int64_t value);

  static const char kWasRecentlyAudibleName[];
  static constexpr uint64_t kWasRecentlyAudibleNameHash = UINT64_C(8155633754967058330);
  TabManager_TabMetrics& SetWasRecentlyAudible(int64_t value);

  static const char kWindowIdName[];
  static constexpr uint64_t kWindowIdNameHash = UINT64_C(2294382318193398891);
  TabManager_TabMetrics& SetWindowId(int64_t value);

};

class XR_WebXR final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  XR_WebXR(ukm::SourceId source_id);
  ~XR_WebXR() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(2966287978545946180);


  static const char kDidGetGamepadsName[];
  static constexpr uint64_t kDidGetGamepadsNameHash = UINT64_C(5493479489419198754);
  XR_WebXR& SetDidGetGamepads(int64_t value);

  static const char kDidGetXRInputSourcesName[];
  static constexpr uint64_t kDidGetXRInputSourcesNameHash = UINT64_C(14351844110769922173);
  XR_WebXR& SetDidGetXRInputSources(int64_t value);

  static const char kDidRequestAvailableDevicesName[];
  static constexpr uint64_t kDidRequestAvailableDevicesNameHash = UINT64_C(5107681164098988581);
  XR_WebXR& SetDidRequestAvailableDevices(int64_t value);

  static const char kDidRequestPoseName[];
  static constexpr uint64_t kDidRequestPoseNameHash = UINT64_C(1918328077075117272);
  XR_WebXR& SetDidRequestPose(int64_t value);

  static const char kDidRequestPresentationName[];
  static constexpr uint64_t kDidRequestPresentationNameHash = UINT64_C(15657914383994855428);
  XR_WebXR& SetDidRequestPresentation(int64_t value);

  static const char kDidUseNavigatorXRName[];
  static constexpr uint64_t kDidUseNavigatorXRNameHash = UINT64_C(10361228866366512051);
  XR_WebXR& SetDidUseNavigatorXR(int64_t value);

  static const char kReturnedDeviceName[];
  static constexpr uint64_t kReturnedDeviceNameHash = UINT64_C(1409100318625382915);
  XR_WebXR& SetReturnedDevice(int64_t value);

  static const char kReturnedPresentationCapableDeviceName[];
  static constexpr uint64_t kReturnedPresentationCapableDeviceNameHash = UINT64_C(6868640628705115096);
  XR_WebXR& SetReturnedPresentationCapableDevice(int64_t value);

};

class XR_PageSession final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  XR_PageSession(ukm::SourceId source_id);
  ~XR_PageSession() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(18380849111718717977);


  static const char kDurationName[];
  static constexpr uint64_t kDurationNameHash = UINT64_C(16153614581047612563);
  XR_PageSession& SetDuration(int64_t value);

  static const char kEnteredFullscreenName[];
  static constexpr uint64_t kEnteredFullscreenNameHash = UINT64_C(14127283418272390714);
  XR_PageSession& SetEnteredFullscreen(int64_t value);

  static const char kEnteredVROnPageReasonName[];
  static constexpr uint64_t kEnteredVROnPageReasonNameHash = UINT64_C(9268196946337994416);
  XR_PageSession& SetEnteredVROnPageReason(int64_t value);

  static const char kTimeOnPageName[];
  static constexpr uint64_t kTimeOnPageNameHash = UINT64_C(6527123490961126342);
  XR_PageSession& SetTimeOnPage(int64_t value);

  static const char kWasOmniboxNavigationName[];
  static constexpr uint64_t kWasOmniboxNavigationNameHash = UINT64_C(16093218013229692343);
  XR_PageSession& SetWasOmniboxNavigation(int64_t value);

  static const char kWasVoiceSearchNavigationName[];
  static constexpr uint64_t kWasVoiceSearchNavigationNameHash = UINT64_C(1493188913806928521);
  XR_PageSession& SetWasVoiceSearchNavigation(int64_t value);

};

class XR_WebXR_PresentationSession final : public ::ukm::internal::UkmEntryBuilderBase {
 public:
  XR_WebXR_PresentationSession(ukm::SourceId source_id);
  ~XR_WebXR_PresentationSession() override;

  static const char kEntryName[];
  static constexpr uint64_t kEntryNameHash = UINT64_C(16100523780689880831);


  static const char kDurationName[];
  static constexpr uint64_t kDurationNameHash = UINT64_C(16153614581047612563);
  XR_WebXR_PresentationSession& SetDuration(int64_t value);

  static const char kStartActionName[];
  static constexpr uint64_t kStartActionNameHash = UINT64_C(4843526477822291522);
  XR_WebXR_PresentationSession& SetStartAction(int64_t value);

};


}  // namespace builders
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_CPP_UKM_BUILDERS_H
