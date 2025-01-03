
// Generated from gen_builders.py.  DO NOT EDIT!
// source: ukm.xml

#include "services/metrics/public/cpp//ukm_builders.h"

namespace ukm {
namespace builders {


const char AbusiveExperienceHeuristic::kEntryName[] = "AbusiveExperienceHeuristic";

AbusiveExperienceHeuristic::AbusiveExperienceHeuristic(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic::~AbusiveExperienceHeuristic() = default;


const char AbusiveExperienceHeuristic::kDidTabUnderName[] = "DidTabUnder";

AbusiveExperienceHeuristic& AbusiveExperienceHeuristic::SetDidTabUnder(int64_t value) {
  SetMetricInternal(kDidTabUnderNameHash, value);
  return *this;
}


const char Autofill_CardUploadDecision::kEntryName[] = "Autofill.CardUploadDecision";

Autofill_CardUploadDecision::Autofill_CardUploadDecision(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_CardUploadDecision::~Autofill_CardUploadDecision() = default;


const char Autofill_CardUploadDecision::kUploadDecisionName[] = "UploadDecision";

Autofill_CardUploadDecision& Autofill_CardUploadDecision::SetUploadDecision(int64_t value) {
  SetMetricInternal(kUploadDecisionNameHash, value);
  return *this;
}


const char Autofill_DeveloperEngagement::kEntryName[] = "Autofill.DeveloperEngagement";

Autofill_DeveloperEngagement::Autofill_DeveloperEngagement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_DeveloperEngagement::~Autofill_DeveloperEngagement() = default;


const char Autofill_DeveloperEngagement::kDeveloperEngagementName[] = "DeveloperEngagement";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetDeveloperEngagement(int64_t value) {
  SetMetricInternal(kDeveloperEngagementNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kFormSignatureName[] = "FormSignature";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kFormTypesName[] = "FormTypes";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}


const char Autofill_FieldFillStatus::kEntryName[] = "Autofill.FieldFillStatus";

Autofill_FieldFillStatus::Autofill_FieldFillStatus(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldFillStatus::~Autofill_FieldFillStatus() = default;


const char Autofill_FieldFillStatus::kFieldSignatureName[] = "FieldSignature";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kFormSignatureName[] = "FormSignature";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kIsAutofilledName[] = "IsAutofilled";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetIsAutofilled(int64_t value) {
  SetMetricInternal(kIsAutofilledNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kPredictionSourceName[] = "PredictionSource";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetPredictionSource(int64_t value) {
  SetMetricInternal(kPredictionSourceNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kValidationEventName[] = "ValidationEvent";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetValidationEvent(int64_t value) {
  SetMetricInternal(kValidationEventNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kWasPreviouslyAutofilledName[] = "WasPreviouslyAutofilled";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetWasPreviouslyAutofilled(int64_t value) {
  SetMetricInternal(kWasPreviouslyAutofilledNameHash, value);
  return *this;
}


const char Autofill_FieldTypeValidation::kEntryName[] = "Autofill.FieldTypeValidation";

Autofill_FieldTypeValidation::Autofill_FieldTypeValidation(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldTypeValidation::~Autofill_FieldTypeValidation() = default;


const char Autofill_FieldTypeValidation::kActualTypeName[] = "ActualType";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetActualType(int64_t value) {
  SetMetricInternal(kActualTypeNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kFieldSignatureName[] = "FieldSignature";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kFormSignatureName[] = "FormSignature";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kPredictedTypeName[] = "PredictedType";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetPredictedType(int64_t value) {
  SetMetricInternal(kPredictedTypeNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kPredictionSourceName[] = "PredictionSource";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetPredictionSource(int64_t value) {
  SetMetricInternal(kPredictionSourceNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kValidationEventName[] = "ValidationEvent";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetValidationEvent(int64_t value) {
  SetMetricInternal(kValidationEventNameHash, value);
  return *this;
}


const char Autofill_FormSubmitted::kEntryName[] = "Autofill.FormSubmitted";

Autofill_FormSubmitted::Autofill_FormSubmitted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FormSubmitted::~Autofill_FormSubmitted() = default;


const char Autofill_FormSubmitted::kAutofillFormSubmittedStateName[] = "AutofillFormSubmittedState";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetAutofillFormSubmittedState(int64_t value) {
  SetMetricInternal(kAutofillFormSubmittedStateNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kFormSignatureName[] = "FormSignature";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kFormTypesName[] = "FormTypes";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}


const char Autofill_InteractedWithForm::kEntryName[] = "Autofill.InteractedWithForm";

Autofill_InteractedWithForm::Autofill_InteractedWithForm(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_InteractedWithForm::~Autofill_InteractedWithForm() = default;


const char Autofill_InteractedWithForm::kFormSignatureName[] = "FormSignature";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kFormTypesName[] = "FormTypes";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kLocalRecordTypeCountName[] = "LocalRecordTypeCount";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetLocalRecordTypeCount(int64_t value) {
  SetMetricInternal(kLocalRecordTypeCountNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kServerRecordTypeCountName[] = "ServerRecordTypeCount";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetServerRecordTypeCount(int64_t value) {
  SetMetricInternal(kServerRecordTypeCountNameHash, value);
  return *this;
}


const char Autofill_SelectedMaskedServerCard::kEntryName[] = "Autofill.SelectedMaskedServerCard";

Autofill_SelectedMaskedServerCard::Autofill_SelectedMaskedServerCard(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SelectedMaskedServerCard::~Autofill_SelectedMaskedServerCard() = default;


const char Autofill_SelectedMaskedServerCard::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SelectedMaskedServerCard& Autofill_SelectedMaskedServerCard::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}


const char Autofill_SuggestionFilled::kEntryName[] = "Autofill.SuggestionFilled";

Autofill_SuggestionFilled::Autofill_SuggestionFilled(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionFilled::~Autofill_SuggestionFilled() = default;


const char Autofill_SuggestionFilled::kFieldSignatureName[] = "FieldSignature";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kFormSignatureName[] = "FormSignature";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kRecordTypeName[] = "RecordType";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetRecordType(int64_t value) {
  SetMetricInternal(kRecordTypeNameHash, value);
  return *this;
}


const char Autofill_SuggestionsShown::kEntryName[] = "Autofill.SuggestionsShown";

Autofill_SuggestionsShown::Autofill_SuggestionsShown(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionsShown::~Autofill_SuggestionsShown() = default;


const char Autofill_SuggestionsShown::kFieldSignatureName[] = "FieldSignature";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kFormSignatureName[] = "FormSignature";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kHeuristicTypeName[] = "HeuristicType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kServerTypeName[] = "ServerType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char Autofill_TextFieldDidChange::kEntryName[] = "Autofill.TextFieldDidChange";

Autofill_TextFieldDidChange::Autofill_TextFieldDidChange(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_TextFieldDidChange::~Autofill_TextFieldDidChange() = default;


const char Autofill_TextFieldDidChange::kFieldTypeGroupName[] = "FieldTypeGroup";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetFieldTypeGroup(int64_t value) {
  SetMetricInternal(kFieldTypeGroupNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHeuristicTypeName[] = "HeuristicType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHtmlFieldModeName[] = "HtmlFieldMode";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHtmlFieldMode(int64_t value) {
  SetMetricInternal(kHtmlFieldModeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kIsAutofilledName[] = "IsAutofilled";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetIsAutofilled(int64_t value) {
  SetMetricInternal(kIsAutofilledNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kIsEmptyName[] = "IsEmpty";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetIsEmpty(int64_t value) {
  SetMetricInternal(kIsEmptyNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kServerTypeName[] = "ServerType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char Blink_UpdateTime::kEntryName[] = "Blink.UpdateTime";

Blink_UpdateTime::Blink_UpdateTime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UpdateTime::~Blink_UpdateTime() = default;


const char Blink_UpdateTime::kCompositing_AverageName[] = "Compositing.Average";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_Average(int64_t value) {
  SetMetricInternal(kCompositing_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositing_WorstCaseName[] = "Compositing.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_WorstCase(int64_t value) {
  SetMetricInternal(kCompositing_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_AverageName[] = "IntersectionObservation.Average";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_Average(int64_t value) {
  SetMetricInternal(kIntersectionObservation_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_WorstCaseName[] = "IntersectionObservation.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_WorstCase(int64_t value) {
  SetMetricInternal(kIntersectionObservation_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_AverageName[] = "Paint.Average";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_Average(int64_t value) {
  SetMetricInternal(kPaint_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_WorstCaseName[] = "Paint.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_WorstCase(int64_t value) {
  SetMetricInternal(kPaint_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_AverageName[] = "PrePaint.Average";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_Average(int64_t value) {
  SetMetricInternal(kPrePaint_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_WorstCaseName[] = "PrePaint.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_WorstCase(int64_t value) {
  SetMetricInternal(kPrePaint_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_AverageName[] = "StyleAndLayout.Average";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_Average(int64_t value) {
  SetMetricInternal(kStyleAndLayout_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_WorstCaseName[] = "StyleAndLayout.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_WorstCase(int64_t value) {
  SetMetricInternal(kStyleAndLayout_WorstCaseNameHash, value);
  return *this;
}


const char Blink_UseCounter::kEntryName[] = "Blink.UseCounter";

Blink_UseCounter::Blink_UseCounter(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UseCounter::~Blink_UseCounter() = default;


const char Blink_UseCounter::kFeatureName[] = "Feature";

Blink_UseCounter& Blink_UseCounter::SetFeature(int64_t value) {
  SetMetricInternal(kFeatureNameHash, value);
  return *this;
}


const char Compositor_UserInteraction::kEntryName[] = "Compositor.UserInteraction";

Compositor_UserInteraction::Compositor_UserInteraction(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_UserInteraction::~Compositor_UserInteraction() = default;


const char Compositor_UserInteraction::kCheckerboardedContentAreaName[] = "CheckerboardedContentArea";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedContentArea(int64_t value) {
  SetMetricInternal(kCheckerboardedContentAreaNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kCheckerboardedContentAreaRatioName[] = "CheckerboardedContentAreaRatio";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedContentAreaRatio(int64_t value) {
  SetMetricInternal(kCheckerboardedContentAreaRatioNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kCheckerboardedImagesCountName[] = "CheckerboardedImagesCount";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedImagesCount(int64_t value) {
  SetMetricInternal(kCheckerboardedImagesCountNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kNumMissingTilesName[] = "NumMissingTiles";

Compositor_UserInteraction& Compositor_UserInteraction::SetNumMissingTiles(int64_t value) {
  SetMetricInternal(kNumMissingTilesNameHash, value);
  return *this;
}


const char Compositor_Rendering::kEntryName[] = "Compositor.Rendering";

Compositor_Rendering::Compositor_Rendering(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_Rendering::~Compositor_Rendering() = default;


const char Compositor_Rendering::kCheckerboardedImagesCountName[] = "CheckerboardedImagesCount";

Compositor_Rendering& Compositor_Rendering::SetCheckerboardedImagesCount(int64_t value) {
  SetMetricInternal(kCheckerboardedImagesCountNameHash, value);
  return *this;
}


const char ContextualSearch::kEntryName[] = "ContextualSearch";

ContextualSearch::ContextualSearch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSearch::~ContextualSearch() = default;


const char ContextualSearch::kDidOptInName[] = "DidOptIn";

ContextualSearch& ContextualSearch::SetDidOptIn(int64_t value) {
  SetMetricInternal(kDidOptInNameHash, value);
  return *this;
}

const char ContextualSearch::kDurationAfterScrollMsName[] = "DurationAfterScrollMs";

ContextualSearch& ContextualSearch::SetDurationAfterScrollMs(int64_t value) {
  SetMetricInternal(kDurationAfterScrollMsNameHash, value);
  return *this;
}

const char ContextualSearch::kFontSizeName[] = "FontSize";

ContextualSearch& ContextualSearch::SetFontSize(int64_t value) {
  SetMetricInternal(kFontSizeNameHash, value);
  return *this;
}

const char ContextualSearch::kIsEntityName[] = "IsEntity";

ContextualSearch& ContextualSearch::SetIsEntity(int64_t value) {
  SetMetricInternal(kIsEntityNameHash, value);
  return *this;
}

const char ContextualSearch::kIsEntityEligibleName[] = "IsEntityEligible";

ContextualSearch& ContextualSearch::SetIsEntityEligible(int64_t value) {
  SetMetricInternal(kIsEntityEligibleNameHash, value);
  return *this;
}

const char ContextualSearch::kIsHttpName[] = "IsHttp";

ContextualSearch& ContextualSearch::SetIsHttp(int64_t value) {
  SetMetricInternal(kIsHttpNameHash, value);
  return *this;
}

const char ContextualSearch::kIsLanguageMismatchName[] = "IsLanguageMismatch";

ContextualSearch& ContextualSearch::SetIsLanguageMismatch(int64_t value) {
  SetMetricInternal(kIsLanguageMismatchNameHash, value);
  return *this;
}

const char ContextualSearch::kIsLongWordName[] = "IsLongWord";

ContextualSearch& ContextualSearch::SetIsLongWord(int64_t value) {
  SetMetricInternal(kIsLongWordNameHash, value);
  return *this;
}

const char ContextualSearch::kIsSecondTapOverrideName[] = "IsSecondTapOverride";

ContextualSearch& ContextualSearch::SetIsSecondTapOverride(int64_t value) {
  SetMetricInternal(kIsSecondTapOverrideNameHash, value);
  return *this;
}

const char ContextualSearch::kIsShortWordName[] = "IsShortWord";

ContextualSearch& ContextualSearch::SetIsShortWord(int64_t value) {
  SetMetricInternal(kIsShortWordNameHash, value);
  return *this;
}

const char ContextualSearch::kIsWordEdgeName[] = "IsWordEdge";

ContextualSearch& ContextualSearch::SetIsWordEdge(int64_t value) {
  SetMetricInternal(kIsWordEdgeNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeRankerDidPredictName[] = "OutcomeRankerDidPredict";

ContextualSearch& ContextualSearch::SetOutcomeRankerDidPredict(int64_t value) {
  SetMetricInternal(kOutcomeRankerDidPredictNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeRankerPredictionName[] = "OutcomeRankerPrediction";

ContextualSearch& ContextualSearch::SetOutcomeRankerPrediction(int64_t value) {
  SetMetricInternal(kOutcomeRankerPredictionNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasCardsDataShownName[] = "OutcomeWasCardsDataShown";

ContextualSearch& ContextualSearch::SetOutcomeWasCardsDataShown(int64_t value) {
  SetMetricInternal(kOutcomeWasCardsDataShownNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasPanelOpenedName[] = "OutcomeWasPanelOpened";

ContextualSearch& ContextualSearch::SetOutcomeWasPanelOpened(int64_t value) {
  SetMetricInternal(kOutcomeWasPanelOpenedNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasQuickActionClickedName[] = "OutcomeWasQuickActionClicked";

ContextualSearch& ContextualSearch::SetOutcomeWasQuickActionClicked(int64_t value) {
  SetMetricInternal(kOutcomeWasQuickActionClickedNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasQuickAnswerSeenName[] = "OutcomeWasQuickAnswerSeen";

ContextualSearch& ContextualSearch::SetOutcomeWasQuickAnswerSeen(int64_t value) {
  SetMetricInternal(kOutcomeWasQuickAnswerSeenNameHash, value);
  return *this;
}

const char ContextualSearch::kPortionOfElementName[] = "PortionOfElement";

ContextualSearch& ContextualSearch::SetPortionOfElement(int64_t value) {
  SetMetricInternal(kPortionOfElementNameHash, value);
  return *this;
}

const char ContextualSearch::kPrevious28DayCtrPercentName[] = "Previous28DayCtrPercent";

ContextualSearch& ContextualSearch::SetPrevious28DayCtrPercent(int64_t value) {
  SetMetricInternal(kPrevious28DayCtrPercentNameHash, value);
  return *this;
}

const char ContextualSearch::kPrevious28DayImpressionsCountName[] = "Previous28DayImpressionsCount";

ContextualSearch& ContextualSearch::SetPrevious28DayImpressionsCount(int64_t value) {
  SetMetricInternal(kPrevious28DayImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kPreviousWeekCtrPercentName[] = "PreviousWeekCtrPercent";

ContextualSearch& ContextualSearch::SetPreviousWeekCtrPercent(int64_t value) {
  SetMetricInternal(kPreviousWeekCtrPercentNameHash, value);
  return *this;
}

const char ContextualSearch::kPreviousWeekImpressionsCountName[] = "PreviousWeekImpressionsCount";

ContextualSearch& ContextualSearch::SetPreviousWeekImpressionsCount(int64_t value) {
  SetMetricInternal(kPreviousWeekImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kScreenTopDpsName[] = "ScreenTopDps";

ContextualSearch& ContextualSearch::SetScreenTopDps(int64_t value) {
  SetMetricInternal(kScreenTopDpsNameHash, value);
  return *this;
}

const char ContextualSearch::kTapDurationMsName[] = "TapDurationMs";

ContextualSearch& ContextualSearch::SetTapDurationMs(int64_t value) {
  SetMetricInternal(kTapDurationMsNameHash, value);
  return *this;
}

const char ContextualSearch::kWasScreenBottomName[] = "WasScreenBottom";

ContextualSearch& ContextualSearch::SetWasScreenBottom(int64_t value) {
  SetMetricInternal(kWasScreenBottomNameHash, value);
  return *this;
}


const char ContextualSuggestions::kEntryName[] = "ContextualSuggestions";

ContextualSuggestions::ContextualSuggestions(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSuggestions::~ContextualSuggestions() = default;


const char ContextualSuggestions::kAnyDownloadedName[] = "AnyDownloaded";

ContextualSuggestions& ContextualSuggestions::SetAnyDownloaded(int64_t value) {
  SetMetricInternal(kAnyDownloadedNameHash, value);
  return *this;
}

const char ContextualSuggestions::kAnySuggestionTakenName[] = "AnySuggestionTaken";

ContextualSuggestions& ContextualSuggestions::SetAnySuggestionTaken(int64_t value) {
  SetMetricInternal(kAnySuggestionTakenNameHash, value);
  return *this;
}

const char ContextualSuggestions::kClosedFromPeekName[] = "ClosedFromPeek";

ContextualSuggestions& ContextualSuggestions::SetClosedFromPeek(int64_t value) {
  SetMetricInternal(kClosedFromPeekNameHash, value);
  return *this;
}

const char ContextualSuggestions::kEverOpenedName[] = "EverOpened";

ContextualSuggestions& ContextualSuggestions::SetEverOpened(int64_t value) {
  SetMetricInternal(kEverOpenedNameHash, value);
  return *this;
}

const char ContextualSuggestions::kFetchStateName[] = "FetchState";

ContextualSuggestions& ContextualSuggestions::SetFetchState(int64_t value) {
  SetMetricInternal(kFetchStateNameHash, value);
  return *this;
}

const char ContextualSuggestions::kShowDurationBucketMinName[] = "ShowDurationBucketMin";

ContextualSuggestions& ContextualSuggestions::SetShowDurationBucketMin(int64_t value) {
  SetMetricInternal(kShowDurationBucketMinNameHash, value);
  return *this;
}

const char ContextualSuggestions::kTriggerEventName[] = "TriggerEvent";

ContextualSuggestions& ContextualSuggestions::SetTriggerEvent(int64_t value) {
  SetMetricInternal(kTriggerEventNameHash, value);
  return *this;
}


const char CPUUsageMeasurement::kEntryName[] = "CPUUsageMeasurement";

CPUUsageMeasurement::CPUUsageMeasurement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

CPUUsageMeasurement::~CPUUsageMeasurement() = default;


const char CPUUsageMeasurement::kCPUUsageName[] = "CPUUsage";

CPUUsageMeasurement& CPUUsageMeasurement::SetCPUUsage(int64_t value) {
  SetMetricInternal(kCPUUsageNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kEventTypeName[] = "EventType";

CPUUsageMeasurement& CPUUsageMeasurement::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kIsVisibleName[] = "IsVisible";

CPUUsageMeasurement& CPUUsageMeasurement::SetIsVisible(int64_t value) {
  SetMetricInternal(kIsVisibleNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kNumberOfCoresidentTabsName[] = "NumberOfCoresidentTabs";

CPUUsageMeasurement& CPUUsageMeasurement::SetNumberOfCoresidentTabs(int64_t value) {
  SetMetricInternal(kNumberOfCoresidentTabsNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kObservationWindowSizeMsName[] = "ObservationWindowSizeMs";

CPUUsageMeasurement& CPUUsageMeasurement::SetObservationWindowSizeMs(int64_t value) {
  SetMetricInternal(kObservationWindowSizeMsNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kProcessUptimeMsName[] = "ProcessUptimeMs";

CPUUsageMeasurement& CPUUsageMeasurement::SetProcessUptimeMs(int64_t value) {
  SetMetricInternal(kProcessUptimeMsNameHash, value);
  return *this;
}


const char DocumentCreated::kEntryName[] = "DocumentCreated";

DocumentCreated::DocumentCreated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

DocumentCreated::~DocumentCreated() = default;


const char DocumentCreated::kIsMainFrameName[] = "IsMainFrame";

DocumentCreated& DocumentCreated::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char DocumentCreated::kNavigationSourceIdName[] = "NavigationSourceId";

DocumentCreated& DocumentCreated::SetNavigationSourceId(int64_t value) {
  SetMetricInternal(kNavigationSourceIdNameHash, value);
  return *this;
}


const char Document_OutliveTimeAfterShutdown::kEntryName[] = "Document.OutliveTimeAfterShutdown";

Document_OutliveTimeAfterShutdown::Document_OutliveTimeAfterShutdown(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Document_OutliveTimeAfterShutdown::~Document_OutliveTimeAfterShutdown() = default;


const char Document_OutliveTimeAfterShutdown::kGCCountName[] = "GCCount";

Document_OutliveTimeAfterShutdown& Document_OutliveTimeAfterShutdown::SetGCCount(int64_t value) {
  SetMetricInternal(kGCCountNameHash, value);
  return *this;
}


const char Download_Started::kEntryName[] = "Download.Started";

Download_Started::Download_Started(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Started::~Download_Started() = default;


const char Download_Started::kDownloadIdName[] = "DownloadId";

Download_Started& Download_Started::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Started::kDownloadSourceName[] = "DownloadSource";

Download_Started& Download_Started::SetDownloadSource(int64_t value) {
  SetMetricInternal(kDownloadSourceNameHash, value);
  return *this;
}

const char Download_Started::kFileTypeName[] = "FileType";

Download_Started& Download_Started::SetFileType(int64_t value) {
  SetMetricInternal(kFileTypeNameHash, value);
  return *this;
}


const char Download_Completed::kEntryName[] = "Download.Completed";

Download_Completed::Download_Completed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Completed::~Download_Completed() = default;


const char Download_Completed::kBytesWastedName[] = "BytesWasted";

Download_Completed& Download_Completed::SetBytesWasted(int64_t value) {
  SetMetricInternal(kBytesWastedNameHash, value);
  return *this;
}

const char Download_Completed::kDownloadIdName[] = "DownloadId";

Download_Completed& Download_Completed::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Completed::kResultingFileSizeName[] = "ResultingFileSize";

Download_Completed& Download_Completed::SetResultingFileSize(int64_t value) {
  SetMetricInternal(kResultingFileSizeNameHash, value);
  return *this;
}

const char Download_Completed::kTimeSinceStartName[] = "TimeSinceStart";

Download_Completed& Download_Completed::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Download_Interrupted::kEntryName[] = "Download.Interrupted";

Download_Interrupted::Download_Interrupted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Interrupted::~Download_Interrupted() = default;


const char Download_Interrupted::kBytesWastedName[] = "BytesWasted";

Download_Interrupted& Download_Interrupted::SetBytesWasted(int64_t value) {
  SetMetricInternal(kBytesWastedNameHash, value);
  return *this;
}

const char Download_Interrupted::kChangeInFileSizeName[] = "ChangeInFileSize";

Download_Interrupted& Download_Interrupted::SetChangeInFileSize(int64_t value) {
  SetMetricInternal(kChangeInFileSizeNameHash, value);
  return *this;
}

const char Download_Interrupted::kDownloadIdName[] = "DownloadId";

Download_Interrupted& Download_Interrupted::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Interrupted::kReasonName[] = "Reason";

Download_Interrupted& Download_Interrupted::SetReason(int64_t value) {
  SetMetricInternal(kReasonNameHash, value);
  return *this;
}

const char Download_Interrupted::kResultingFileSizeName[] = "ResultingFileSize";

Download_Interrupted& Download_Interrupted::SetResultingFileSize(int64_t value) {
  SetMetricInternal(kResultingFileSizeNameHash, value);
  return *this;
}

const char Download_Interrupted::kTimeSinceStartName[] = "TimeSinceStart";

Download_Interrupted& Download_Interrupted::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Download_Resumed::kEntryName[] = "Download.Resumed";

Download_Resumed::Download_Resumed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Resumed::~Download_Resumed() = default;


const char Download_Resumed::kDownloadIdName[] = "DownloadId";

Download_Resumed& Download_Resumed::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Resumed::kModeName[] = "Mode";

Download_Resumed& Download_Resumed::SetMode(int64_t value) {
  SetMetricInternal(kModeNameHash, value);
  return *this;
}

const char Download_Resumed::kTimeSinceStartName[] = "TimeSinceStart";

Download_Resumed& Download_Resumed::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Event_ScrollUpdate_Touch::kEntryName[] = "Event.ScrollUpdate.Touch";

Event_ScrollUpdate_Touch::Event_ScrollUpdate_Touch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Touch::~Event_ScrollUpdate_Touch() = default;


const char Event_ScrollUpdate_Touch::kIsMainThreadName[] = "IsMainThread";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Touch::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Touch::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollBegin_Touch::kEntryName[] = "Event.ScrollBegin.Touch";

Event_ScrollBegin_Touch::Event_ScrollBegin_Touch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Touch::~Event_ScrollBegin_Touch() = default;


const char Event_ScrollBegin_Touch::kIsMainThreadName[] = "IsMainThread";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Touch::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Touch::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollUpdate_Wheel::kEntryName[] = "Event.ScrollUpdate.Wheel";

Event_ScrollUpdate_Wheel::Event_ScrollUpdate_Wheel(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Wheel::~Event_ScrollUpdate_Wheel() = default;


const char Event_ScrollUpdate_Wheel::kIsMainThreadName[] = "IsMainThread";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Wheel::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Wheel::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollBegin_Wheel::kEntryName[] = "Event.ScrollBegin.Wheel";

Event_ScrollBegin_Wheel::Event_ScrollBegin_Wheel(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Wheel::~Event_ScrollBegin_Wheel() = default;


const char Event_ScrollBegin_Wheel::kIsMainThreadName[] = "IsMainThread";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Wheel::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Wheel::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Intervention_DocumentWrite_ScriptBlock::kEntryName[] = "Intervention.DocumentWrite.ScriptBlock";

Intervention_DocumentWrite_ScriptBlock::Intervention_DocumentWrite_ScriptBlock(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Intervention_DocumentWrite_ScriptBlock::~Intervention_DocumentWrite_ScriptBlock() = default;


const char Intervention_DocumentWrite_ScriptBlock::kDisabled_ReloadName[] = "Disabled.Reload";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetDisabled_Reload(int64_t value) {
  SetMetricInternal(kDisabled_ReloadNameHash, value);
  return *this;
}

const char Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteName[] = "ParseTiming.ParseBlockedOnScriptExecutionFromDocumentWrite";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetParseTiming_ParseBlockedOnScriptExecutionFromDocumentWrite(int64_t value) {
  SetMetricInternal(kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteNameHash, value);
  return *this;
}

const char Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteName[] = "ParseTiming.ParseBlockedOnScriptLoadFromDocumentWrite";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetParseTiming_ParseBlockedOnScriptLoadFromDocumentWrite(int64_t value) {
  SetMetricInternal(kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteNameHash, value);
  return *this;
}


const char LocalNetworkRequests::kEntryName[] = "LocalNetworkRequests";

LocalNetworkRequests::LocalNetworkRequests(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

LocalNetworkRequests::~LocalNetworkRequests() = default;


const char LocalNetworkRequests::kCount_FailedName[] = "Count.Failed";

LocalNetworkRequests& LocalNetworkRequests::SetCount_Failed(int64_t value) {
  SetMetricInternal(kCount_FailedNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kCount_SuccessfulName[] = "Count.Successful";

LocalNetworkRequests& LocalNetworkRequests::SetCount_Successful(int64_t value) {
  SetMetricInternal(kCount_SuccessfulNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kPortTypeName[] = "PortType";

LocalNetworkRequests& LocalNetworkRequests::SetPortType(int64_t value) {
  SetMetricInternal(kPortTypeNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kResourceTypeName[] = "ResourceType";

LocalNetworkRequests& LocalNetworkRequests::SetResourceType(int64_t value) {
  SetMetricInternal(kResourceTypeNameHash, value);
  return *this;
}


const char Media_Autoplay_Attempt::kEntryName[] = "Media.Autoplay.Attempt";

Media_Autoplay_Attempt::Media_Autoplay_Attempt(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Attempt::~Media_Autoplay_Attempt() = default;


const char Media_Autoplay_Attempt::kAudioTrackName[] = "AudioTrack";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetAudioTrack(int64_t value) {
  SetMetricInternal(kAudioTrackNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kHighMediaEngagementName[] = "HighMediaEngagement";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetHighMediaEngagement(int64_t value) {
  SetMetricInternal(kHighMediaEngagementNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kMutedName[] = "Muted";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetMuted(int64_t value) {
  SetMetricInternal(kMutedNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kSourceName[] = "Source";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kUserGestureRequiredName[] = "UserGestureRequired";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetUserGestureRequired(int64_t value) {
  SetMetricInternal(kUserGestureRequiredNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kUserGestureStatusName[] = "UserGestureStatus";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetUserGestureStatus(int64_t value) {
  SetMetricInternal(kUserGestureStatusNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kVideoTrackName[] = "VideoTrack";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetVideoTrack(int64_t value) {
  SetMetricInternal(kVideoTrackNameHash, value);
  return *this;
}


const char Media_Autoplay_Muted_UnmuteAction::kEntryName[] = "Media.Autoplay.Muted.UnmuteAction";

Media_Autoplay_Muted_UnmuteAction::Media_Autoplay_Muted_UnmuteAction(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Muted_UnmuteAction::~Media_Autoplay_Muted_UnmuteAction() = default;


const char Media_Autoplay_Muted_UnmuteAction::kResultName[] = "Result";

Media_Autoplay_Muted_UnmuteAction& Media_Autoplay_Muted_UnmuteAction::SetResult(int64_t value) {
  SetMetricInternal(kResultNameHash, value);
  return *this;
}

const char Media_Autoplay_Muted_UnmuteAction::kSourceName[] = "Source";

Media_Autoplay_Muted_UnmuteAction& Media_Autoplay_Muted_UnmuteAction::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}


const char Media_Engagement_ShortPlaybackIgnored::kEntryName[] = "Media.Engagement.ShortPlaybackIgnored";

Media_Engagement_ShortPlaybackIgnored::Media_Engagement_ShortPlaybackIgnored(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_ShortPlaybackIgnored::~Media_Engagement_ShortPlaybackIgnored() = default;


const char Media_Engagement_ShortPlaybackIgnored::kLengthName[] = "Length";

Media_Engagement_ShortPlaybackIgnored& Media_Engagement_ShortPlaybackIgnored::SetLength(int64_t value) {
  SetMetricInternal(kLengthNameHash, value);
  return *this;
}


const char Media_Engagement_SessionFinished::kEntryName[] = "Media.Engagement.SessionFinished";

Media_Engagement_SessionFinished::Media_Engagement_SessionFinished(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_SessionFinished::~Media_Engagement_SessionFinished() = default;


const char Media_Engagement_SessionFinished::kEngagement_IsHighName[] = "Engagement.IsHigh";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh(int64_t value) {
  SetMetricInternal(kEngagement_IsHighNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangedName[] = "Engagement.IsHigh.Changed";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh_Changed(int64_t value) {
  SetMetricInternal(kEngagement_IsHigh_ChangedNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangesName[] = "Engagement.IsHigh.Changes";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh_Changes(int64_t value) {
  SetMetricInternal(kEngagement_IsHigh_ChangesNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsPreloadedName[] = "Engagement.IsPreloaded";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsPreloaded(int64_t value) {
  SetMetricInternal(kEngagement_IsPreloadedNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_ScoreName[] = "Engagement.Score";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_Score(int64_t value) {
  SetMetricInternal(kEngagement_ScoreNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_DeltaName[] = "Playbacks.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_Delta(int64_t value) {
  SetMetricInternal(kPlaybacks_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_SecondsSinceLastName[] = "Playbacks.SecondsSinceLast";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_SecondsSinceLast(int64_t value) {
  SetMetricInternal(kPlaybacks_SecondsSinceLastNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_TotalName[] = "Playbacks.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_Total(int64_t value) {
  SetMetricInternal(kPlaybacks_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Audible_DeltaName[] = "Player.Audible.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Audible_Delta(int64_t value) {
  SetMetricInternal(kPlayer_Audible_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Audible_TotalName[] = "Player.Audible.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Audible_Total(int64_t value) {
  SetMetricInternal(kPlayer_Audible_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Significant_DeltaName[] = "Player.Significant.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Significant_Delta(int64_t value) {
  SetMetricInternal(kPlayer_Significant_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Significant_TotalName[] = "Player.Significant.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Significant_Total(int64_t value) {
  SetMetricInternal(kPlayer_Significant_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kVisits_TotalName[] = "Visits.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetVisits_Total(int64_t value) {
  SetMetricInternal(kVisits_TotalNameHash, value);
  return *this;
}


const char Media_SiteMuted::kEntryName[] = "Media.SiteMuted";

Media_SiteMuted::Media_SiteMuted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_SiteMuted::~Media_SiteMuted() = default;


const char Media_SiteMuted::kMuteReasonName[] = "MuteReason";

Media_SiteMuted& Media_SiteMuted::SetMuteReason(int64_t value) {
  SetMetricInternal(kMuteReasonNameHash, value);
  return *this;
}


const char Media_WatchTime::kEntryName[] = "Media.WatchTime";

Media_WatchTime::Media_WatchTime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WatchTime::~Media_WatchTime() = default;


const char Media_WatchTime::kAudio_ACName[] = "Audio.AC";

Media_WatchTime& Media_WatchTime::SetAudio_AC(int64_t value) {
  SetMetricInternal(kAudio_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_AllName[] = "Audio.All";

Media_WatchTime& Media_WatchTime::SetAudio_All(int64_t value) {
  SetMetricInternal(kAudio_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_BatteryName[] = "Audio.Battery";

Media_WatchTime& Media_WatchTime::SetAudio_Battery(int64_t value) {
  SetMetricInternal(kAudio_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_EMEName[] = "Audio.EME";

Media_WatchTime& Media_WatchTime::SetAudio_EME(int64_t value) {
  SetMetricInternal(kAudio_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_MSEName[] = "Audio.MSE";

Media_WatchTime& Media_WatchTime::SetAudio_MSE(int64_t value) {
  SetMetricInternal(kAudio_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_NativeControlsOffName[] = "Audio.NativeControlsOff";

Media_WatchTime& Media_WatchTime::SetAudio_NativeControlsOff(int64_t value) {
  SetMetricInternal(kAudio_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_NativeControlsOnName[] = "Audio.NativeControlsOn";

Media_WatchTime& Media_WatchTime::SetAudio_NativeControlsOn(int64_t value) {
  SetMetricInternal(kAudio_NativeControlsOnNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_SRCName[] = "Audio.SRC";

Media_WatchTime& Media_WatchTime::SetAudio_SRC(int64_t value) {
  SetMetricInternal(kAudio_SRCNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_ACName[] = "AudioVideo.AC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_AC(int64_t value) {
  SetMetricInternal(kAudioVideo_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_AllName[] = "AudioVideo.All";

Media_WatchTime& Media_WatchTime::SetAudioVideo_All(int64_t value) {
  SetMetricInternal(kAudioVideo_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_ACName[] = "AudioVideo.Background.AC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_AC(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_AllName[] = "AudioVideo.Background.All";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_All(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_BatteryName[] = "AudioVideo.Background.Battery";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_Battery(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_EMEName[] = "AudioVideo.Background.EME";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_EME(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_MSEName[] = "AudioVideo.Background.MSE";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_MSE(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_SRCName[] = "AudioVideo.Background.SRC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_SRC(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_SRCNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_BatteryName[] = "AudioVideo.Battery";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Battery(int64_t value) {
  SetMetricInternal(kAudioVideo_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayFullscreenName[] = "AudioVideo.DisplayFullscreen";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayFullscreen(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayFullscreenNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayInlineName[] = "AudioVideo.DisplayInline";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayInline(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayInlineNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayPictureInPictureName[] = "AudioVideo.DisplayPictureInPicture";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayPictureInPicture(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayPictureInPictureNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_EMEName[] = "AudioVideo.EME";

Media_WatchTime& Media_WatchTime::SetAudioVideo_EME(int64_t value) {
  SetMetricInternal(kAudioVideo_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_MSEName[] = "AudioVideo.MSE";

Media_WatchTime& Media_WatchTime::SetAudioVideo_MSE(int64_t value) {
  SetMetricInternal(kAudioVideo_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_NativeControlsOffName[] = "AudioVideo.NativeControlsOff";

Media_WatchTime& Media_WatchTime::SetAudioVideo_NativeControlsOff(int64_t value) {
  SetMetricInternal(kAudioVideo_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_NativeControlsOnName[] = "AudioVideo.NativeControlsOn";

Media_WatchTime& Media_WatchTime::SetAudioVideo_NativeControlsOn(int64_t value) {
  SetMetricInternal(kAudioVideo_NativeControlsOnNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_SRCName[] = "AudioVideo.SRC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_SRC(int64_t value) {
  SetMetricInternal(kAudioVideo_SRCNameHash, value);
  return *this;
}


const char Media_WebMediaPlayerState::kEntryName[] = "Media.WebMediaPlayerState";

Media_WebMediaPlayerState::Media_WebMediaPlayerState(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WebMediaPlayerState::~Media_WebMediaPlayerState() = default;


const char Media_WebMediaPlayerState::kFinalPipelineStatusName[] = "FinalPipelineStatus";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetFinalPipelineStatus(int64_t value) {
  SetMetricInternal(kFinalPipelineStatusNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsEMEName[] = "IsEME";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsEME(int64_t value) {
  SetMetricInternal(kIsEMENameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsMSEName[] = "IsMSE";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsMSE(int64_t value) {
  SetMetricInternal(kIsMSENameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsTopFrameName[] = "IsTopFrame";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsTopFrame(int64_t value) {
  SetMetricInternal(kIsTopFrameNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kPlayerIDName[] = "PlayerID";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetPlayerID(int64_t value) {
  SetMetricInternal(kPlayerIDNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToFirstFrameName[] = "TimeToFirstFrame";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToFirstFrame(int64_t value) {
  SetMetricInternal(kTimeToFirstFrameNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToMetadataName[] = "TimeToMetadata";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToMetadata(int64_t value) {
  SetMetricInternal(kTimeToMetadataNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToPlayReadyName[] = "TimeToPlayReady";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToPlayReady(int64_t value) {
  SetMetricInternal(kTimeToPlayReadyNameHash, value);
  return *this;
}


const char Media_BasicPlayback::kEntryName[] = "Media.BasicPlayback";

Media_BasicPlayback::Media_BasicPlayback(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_BasicPlayback::~Media_BasicPlayback() = default;


const char Media_BasicPlayback::kAudioCodecName[] = "AudioCodec";

Media_BasicPlayback& Media_BasicPlayback::SetAudioCodec(int64_t value) {
  SetMetricInternal(kAudioCodecNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kAudioDecoderNameName[] = "AudioDecoderName";

Media_BasicPlayback& Media_BasicPlayback::SetAudioDecoderName(int64_t value) {
  SetMetricInternal(kAudioDecoderNameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kAutoplayInitiatedName[] = "AutoplayInitiated";

Media_BasicPlayback& Media_BasicPlayback::SetAutoplayInitiated(int64_t value) {
  SetMetricInternal(kAutoplayInitiatedNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kHasAudioName[] = "HasAudio";

Media_BasicPlayback& Media_BasicPlayback::SetHasAudio(int64_t value) {
  SetMetricInternal(kHasAudioNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kHasVideoName[] = "HasVideo";

Media_BasicPlayback& Media_BasicPlayback::SetHasVideo(int64_t value) {
  SetMetricInternal(kHasVideoNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsBackgroundName[] = "IsBackground";

Media_BasicPlayback& Media_BasicPlayback::SetIsBackground(int64_t value) {
  SetMetricInternal(kIsBackgroundNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsEMEName[] = "IsEME";

Media_BasicPlayback& Media_BasicPlayback::SetIsEME(int64_t value) {
  SetMetricInternal(kIsEMENameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsMSEName[] = "IsMSE";

Media_BasicPlayback& Media_BasicPlayback::SetIsMSE(int64_t value) {
  SetMetricInternal(kIsMSENameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsMutedName[] = "IsMuted";

Media_BasicPlayback& Media_BasicPlayback::SetIsMuted(int64_t value) {
  SetMetricInternal(kIsMutedNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsTopFrameName[] = "IsTopFrame";

Media_BasicPlayback& Media_BasicPlayback::SetIsTopFrame(int64_t value) {
  SetMetricInternal(kIsTopFrameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kLastPipelineStatusName[] = "LastPipelineStatus";

Media_BasicPlayback& Media_BasicPlayback::SetLastPipelineStatus(int64_t value) {
  SetMetricInternal(kLastPipelineStatusNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kMeanTimeBetweenRebuffersName[] = "MeanTimeBetweenRebuffers";

Media_BasicPlayback& Media_BasicPlayback::SetMeanTimeBetweenRebuffers(int64_t value) {
  SetMetricInternal(kMeanTimeBetweenRebuffersNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kPlayerIDName[] = "PlayerID";

Media_BasicPlayback& Media_BasicPlayback::SetPlayerID(int64_t value) {
  SetMetricInternal(kPlayerIDNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kRebuffersCountName[] = "RebuffersCount";

Media_BasicPlayback& Media_BasicPlayback::SetRebuffersCount(int64_t value) {
  SetMetricInternal(kRebuffersCountNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoCodecName[] = "VideoCodec";

Media_BasicPlayback& Media_BasicPlayback::SetVideoCodec(int64_t value) {
  SetMetricInternal(kVideoCodecNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoDecoderNameName[] = "VideoDecoderName";

Media_BasicPlayback& Media_BasicPlayback::SetVideoDecoderName(int64_t value) {
  SetMetricInternal(kVideoDecoderNameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoNaturalHeightName[] = "VideoNaturalHeight";

Media_BasicPlayback& Media_BasicPlayback::SetVideoNaturalHeight(int64_t value) {
  SetMetricInternal(kVideoNaturalHeightNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoNaturalWidthName[] = "VideoNaturalWidth";

Media_BasicPlayback& Media_BasicPlayback::SetVideoNaturalWidth(int64_t value) {
  SetMetricInternal(kVideoNaturalWidthNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTimeName[] = "WatchTime";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime(int64_t value) {
  SetMetricInternal(kWatchTimeNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_ACName[] = "WatchTime.AC";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_AC(int64_t value) {
  SetMetricInternal(kWatchTime_ACNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_BatteryName[] = "WatchTime.Battery";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_Battery(int64_t value) {
  SetMetricInternal(kWatchTime_BatteryNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayFullscreenName[] = "WatchTime.DisplayFullscreen";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayFullscreen(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayFullscreenNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayInlineName[] = "WatchTime.DisplayInline";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayInline(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayInlineNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayPictureInPictureName[] = "WatchTime.DisplayPictureInPicture";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayPictureInPicture(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayPictureInPictureNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_NativeControlsOffName[] = "WatchTime.NativeControlsOff";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_NativeControlsOff(int64_t value) {
  SetMetricInternal(kWatchTime_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_NativeControlsOnName[] = "WatchTime.NativeControlsOn";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_NativeControlsOn(int64_t value) {
  SetMetricInternal(kWatchTime_NativeControlsOnNameHash, value);
  return *this;
}


const char Media_VideoDecodePerfRecord::kEntryName[] = "Media.VideoDecodePerfRecord";

Media_VideoDecodePerfRecord::Media_VideoDecodePerfRecord(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_VideoDecodePerfRecord::~Media_VideoDecodePerfRecord() = default;


const char Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsPowerEfficientName[] = "Perf.ApiWouldClaimIsPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_ApiWouldClaimIsPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_ApiWouldClaimIsPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsSmoothName[] = "Perf.ApiWouldClaimIsSmooth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_ApiWouldClaimIsSmooth(int64_t value) {
  SetMetricInternal(kPerf_ApiWouldClaimIsSmoothNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDecodedName[] = "Perf.PastVideoFramesDecoded";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesDecoded(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesDecodedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDroppedName[] = "Perf.PastVideoFramesDropped";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesDropped(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesDroppedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesPowerEfficientName[] = "Perf.PastVideoFramesPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_RecordIsPowerEfficientName[] = "Perf.RecordIsPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_RecordIsPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_RecordIsPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_RecordIsSmoothName[] = "Perf.RecordIsSmooth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_RecordIsSmooth(int64_t value) {
  SetMetricInternal(kPerf_RecordIsSmoothNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesDecodedName[] = "Perf.VideoFramesDecoded";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesDecoded(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesDecodedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesDroppedName[] = "Perf.VideoFramesDropped";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesDropped(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesDroppedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesPowerEfficientName[] = "Perf.VideoFramesPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_CodecProfileName[] = "Video.CodecProfile";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_CodecProfile(int64_t value) {
  SetMetricInternal(kVideo_CodecProfileNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_FramesPerSecondName[] = "Video.FramesPerSecond";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_FramesPerSecond(int64_t value) {
  SetMetricInternal(kVideo_FramesPerSecondNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_InTopFrameName[] = "Video.InTopFrame";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_InTopFrame(int64_t value) {
  SetMetricInternal(kVideo_InTopFrameNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_NaturalHeightName[] = "Video.NaturalHeight";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_NaturalHeight(int64_t value) {
  SetMetricInternal(kVideo_NaturalHeightNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_NaturalWidthName[] = "Video.NaturalWidth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_NaturalWidth(int64_t value) {
  SetMetricInternal(kVideo_NaturalWidthNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_PlayerIDName[] = "Video.PlayerID";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_PlayerID(int64_t value) {
  SetMetricInternal(kVideo_PlayerIDNameHash, value);
  return *this;
}


const char Memory_Experimental::kEntryName[] = "Memory.Experimental";

Memory_Experimental::Memory_Experimental(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Memory_Experimental::~Memory_Experimental() = default;


const char Memory_Experimental::kArrayBufferName[] = "ArrayBuffer";

Memory_Experimental& Memory_Experimental::SetArrayBuffer(int64_t value) {
  SetMetricInternal(kArrayBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kBlinkGCName[] = "BlinkGC";

Memory_Experimental& Memory_Experimental::SetBlinkGC(int64_t value) {
  SetMetricInternal(kBlinkGCNameHash, value);
  return *this;
}

const char Memory_Experimental::kBlinkGC_AllocatedObjectsName[] = "BlinkGC.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetBlinkGC_AllocatedObjects(int64_t value) {
  SetMetricInternal(kBlinkGC_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kCommandBufferName[] = "CommandBuffer";

Memory_Experimental& Memory_Experimental::SetCommandBuffer(int64_t value) {
  SetMetricInternal(kCommandBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kDiscardableName[] = "Discardable";

Memory_Experimental& Memory_Experimental::SetDiscardable(int64_t value) {
  SetMetricInternal(kDiscardableNameHash, value);
  return *this;
}

const char Memory_Experimental::kDownloadServiceName[] = "DownloadService";

Memory_Experimental& Memory_Experimental::SetDownloadService(int64_t value) {
  SetMetricInternal(kDownloadServiceNameHash, value);
  return *this;
}

const char Memory_Experimental::kExtensions_ValueStoreName[] = "Extensions.ValueStore";

Memory_Experimental& Memory_Experimental::SetExtensions_ValueStore(int64_t value) {
  SetMetricInternal(kExtensions_ValueStoreNameHash, value);
  return *this;
}

const char Memory_Experimental::kFontCachesName[] = "FontCaches";

Memory_Experimental& Memory_Experimental::SetFontCaches(int64_t value) {
  SetMetricInternal(kFontCachesNameHash, value);
  return *this;
}

const char Memory_Experimental::kHistoryName[] = "History";

Memory_Experimental& Memory_Experimental::SetHistory(int64_t value) {
  SetMetricInternal(kHistoryNameHash, value);
  return *this;
}

const char Memory_Experimental::kIsVisibleName[] = "IsVisible";

Memory_Experimental& Memory_Experimental::SetIsVisible(int64_t value) {
  SetMetricInternal(kIsVisibleNameHash, value);
  return *this;
}

const char Memory_Experimental::kJavaHeapName[] = "JavaHeap";

Memory_Experimental& Memory_Experimental::SetJavaHeap(int64_t value) {
  SetMetricInternal(kJavaHeapNameHash, value);
  return *this;
}

const char Memory_Experimental::kLevelDatabaseName[] = "LevelDatabase";

Memory_Experimental& Memory_Experimental::SetLevelDatabase(int64_t value) {
  SetMetricInternal(kLevelDatabaseNameHash, value);
  return *this;
}

const char Memory_Experimental::kMallocName[] = "Malloc";

Memory_Experimental& Memory_Experimental::SetMalloc(int64_t value) {
  SetMetricInternal(kMallocNameHash, value);
  return *this;
}

const char Memory_Experimental::kNetName[] = "Net";

Memory_Experimental& Memory_Experimental::SetNet(int64_t value) {
  SetMetricInternal(kNetNameHash, value);
  return *this;
}

const char Memory_Experimental::kNet_UrlRequestContextName[] = "Net.UrlRequestContext";

Memory_Experimental& Memory_Experimental::SetNet_UrlRequestContext(int64_t value) {
  SetMetricInternal(kNet_UrlRequestContextNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfAdSubframesName[] = "NumberOfAdSubframes";

Memory_Experimental& Memory_Experimental::SetNumberOfAdSubframes(int64_t value) {
  SetMetricInternal(kNumberOfAdSubframesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfDetachedScriptStatesName[] = "NumberOfDetachedScriptStates";

Memory_Experimental& Memory_Experimental::SetNumberOfDetachedScriptStates(int64_t value) {
  SetMetricInternal(kNumberOfDetachedScriptStatesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfDocumentsName[] = "NumberOfDocuments";

Memory_Experimental& Memory_Experimental::SetNumberOfDocuments(int64_t value) {
  SetMetricInternal(kNumberOfDocumentsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfExtensionsName[] = "NumberOfExtensions";

Memory_Experimental& Memory_Experimental::SetNumberOfExtensions(int64_t value) {
  SetMetricInternal(kNumberOfExtensionsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfFramesName[] = "NumberOfFrames";

Memory_Experimental& Memory_Experimental::SetNumberOfFrames(int64_t value) {
  SetMetricInternal(kNumberOfFramesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfLayoutObjectsName[] = "NumberOfLayoutObjects";

Memory_Experimental& Memory_Experimental::SetNumberOfLayoutObjects(int64_t value) {
  SetMetricInternal(kNumberOfLayoutObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfMojoHandlesName[] = "NumberOfMojoHandles";

Memory_Experimental& Memory_Experimental::SetNumberOfMojoHandles(int64_t value) {
  SetMetricInternal(kNumberOfMojoHandlesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfNodesName[] = "NumberOfNodes";

Memory_Experimental& Memory_Experimental::SetNumberOfNodes(int64_t value) {
  SetMetricInternal(kNumberOfNodesNameHash, value);
  return *this;
}

const char Memory_Experimental::kOmniboxSuggestionsName[] = "OmniboxSuggestions";

Memory_Experimental& Memory_Experimental::SetOmniboxSuggestions(int64_t value) {
  SetMetricInternal(kOmniboxSuggestionsNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAllocName[] = "PartitionAlloc";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc(int64_t value) {
  SetMetricInternal(kPartitionAllocNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_AllocatedObjectsName[] = "PartitionAlloc.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_AllocatedObjects(int64_t value) {
  SetMetricInternal(kPartitionAlloc_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_ArrayBufferName[] = "PartitionAlloc.Partitions.ArrayBuffer";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_ArrayBuffer(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_ArrayBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_BufferName[] = "PartitionAlloc.Partitions.Buffer";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_Buffer(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_BufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_FastMallocName[] = "PartitionAlloc.Partitions.FastMalloc";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_FastMalloc(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_FastMallocNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_LayoutName[] = "PartitionAlloc.Partitions.Layout";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_Layout(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_LayoutNameHash, value);
  return *this;
}

const char Memory_Experimental::kPrivateMemoryFootprintName[] = "PrivateMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetPrivateMemoryFootprint(int64_t value) {
  SetMetricInternal(kPrivateMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kPrivateSwapFootprintName[] = "PrivateSwapFootprint";

Memory_Experimental& Memory_Experimental::SetPrivateSwapFootprint(int64_t value) {
  SetMetricInternal(kPrivateSwapFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kProcessTypeName[] = "ProcessType";

Memory_Experimental& Memory_Experimental::SetProcessType(int64_t value) {
  SetMetricInternal(kProcessTypeNameHash, value);
  return *this;
}

const char Memory_Experimental::kResidentName[] = "Resident";

Memory_Experimental& Memory_Experimental::SetResident(int64_t value) {
  SetMetricInternal(kResidentNameHash, value);
  return *this;
}

const char Memory_Experimental::kSharedMemoryFootprintName[] = "SharedMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetSharedMemoryFootprint(int64_t value) {
  SetMetricInternal(kSharedMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorageName[] = "SiteStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage(int64_t value) {
  SetMetricInternal(kSiteStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_BlobStorageName[] = "SiteStorage.BlobStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_BlobStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_BlobStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_IndexDBName[] = "SiteStorage.IndexDB";

Memory_Experimental& Memory_Experimental::SetSiteStorage_IndexDB(int64_t value) {
  SetMetricInternal(kSiteStorage_IndexDBNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_LocalStorageName[] = "SiteStorage.LocalStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_LocalStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_LocalStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_SessionStorageName[] = "SiteStorage.SessionStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_SessionStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_SessionStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkiaName[] = "Skia";

Memory_Experimental& Memory_Experimental::SetSkia(int64_t value) {
  SetMetricInternal(kSkiaNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkia_SkGlyphCacheName[] = "Skia.SkGlyphCache";

Memory_Experimental& Memory_Experimental::SetSkia_SkGlyphCache(int64_t value) {
  SetMetricInternal(kSkia_SkGlyphCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkia_SkResourceCacheName[] = "Skia.SkResourceCache";

Memory_Experimental& Memory_Experimental::SetSkia_SkResourceCache(int64_t value) {
  SetMetricInternal(kSkia_SkResourceCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kSqliteName[] = "Sqlite";

Memory_Experimental& Memory_Experimental::SetSqlite(int64_t value) {
  SetMetricInternal(kSqliteNameHash, value);
  return *this;
}

const char Memory_Experimental::kSyncName[] = "Sync";

Memory_Experimental& Memory_Experimental::SetSync(int64_t value) {
  SetMetricInternal(kSyncNameHash, value);
  return *this;
}

const char Memory_Experimental::kTabRestoreName[] = "TabRestore";

Memory_Experimental& Memory_Experimental::SetTabRestore(int64_t value) {
  SetMetricInternal(kTabRestoreNameHash, value);
  return *this;
}

const char Memory_Experimental::kTimeSinceLastNavigationName[] = "TimeSinceLastNavigation";

Memory_Experimental& Memory_Experimental::SetTimeSinceLastNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceLastNavigationNameHash, value);
  return *this;
}

const char Memory_Experimental::kTimeSinceLastVisibilityChangeName[] = "TimeSinceLastVisibilityChange";

Memory_Experimental& Memory_Experimental::SetTimeSinceLastVisibilityChange(int64_t value) {
  SetMetricInternal(kTimeSinceLastVisibilityChangeNameHash, value);
  return *this;
}

const char Memory_Experimental::kTotal2_PrivateMemoryFootprintName[] = "Total2.PrivateMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetTotal2_PrivateMemoryFootprint(int64_t value) {
  SetMetricInternal(kTotal2_PrivateMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kTotal2_SharedMemoryFootprintName[] = "Total2.SharedMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetTotal2_SharedMemoryFootprint(int64_t value) {
  SetMetricInternal(kTotal2_SharedMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kUIName[] = "UI";

Memory_Experimental& Memory_Experimental::SetUI(int64_t value) {
  SetMetricInternal(kUINameHash, value);
  return *this;
}

const char Memory_Experimental::kUptimeName[] = "Uptime";

Memory_Experimental& Memory_Experimental::SetUptime(int64_t value) {
  SetMetricInternal(kUptimeNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8Name[] = "V8";

Memory_Experimental& Memory_Experimental::SetV8(int64_t value) {
  SetMetricInternal(kV8NameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCacheName[] = "WebCache";

Memory_Experimental& Memory_Experimental::SetWebCache(int64_t value) {
  SetMetricInternal(kWebCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_CSSStylesheetResourcesName[] = "WebCache.CSSStylesheetResources";

Memory_Experimental& Memory_Experimental::SetWebCache_CSSStylesheetResources(int64_t value) {
  SetMetricInternal(kWebCache_CSSStylesheetResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_FontResourcesName[] = "WebCache.FontResources";

Memory_Experimental& Memory_Experimental::SetWebCache_FontResources(int64_t value) {
  SetMetricInternal(kWebCache_FontResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_ImageResourcesName[] = "WebCache.ImageResources";

Memory_Experimental& Memory_Experimental::SetWebCache_ImageResources(int64_t value) {
  SetMetricInternal(kWebCache_ImageResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_OtherResourcesName[] = "WebCache.OtherResources";

Memory_Experimental& Memory_Experimental::SetWebCache_OtherResources(int64_t value) {
  SetMetricInternal(kWebCache_OtherResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_ScriptResourcesName[] = "WebCache.ScriptResources";

Memory_Experimental& Memory_Experimental::SetWebCache_ScriptResources(int64_t value) {
  SetMetricInternal(kWebCache_ScriptResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_XSLStylesheetResourcesName[] = "WebCache.XSLStylesheetResources";

Memory_Experimental& Memory_Experimental::SetWebCache_XSLStylesheetResources(int64_t value) {
  SetMetricInternal(kWebCache_XSLStylesheetResourcesNameHash, value);
  return *this;
}


const char OfflinePages_SavePageRequested::kEntryName[] = "OfflinePages.SavePageRequested";

OfflinePages_SavePageRequested::OfflinePages_SavePageRequested(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

OfflinePages_SavePageRequested::~OfflinePages_SavePageRequested() = default;


const char OfflinePages_SavePageRequested::kRequestedFromForegroundName[] = "RequestedFromForeground";

OfflinePages_SavePageRequested& OfflinePages_SavePageRequested::SetRequestedFromForeground(int64_t value) {
  SetMetricInternal(kRequestedFromForegroundNameHash, value);
  return *this;
}


const char PageDomainInfo::kEntryName[] = "PageDomainInfo";

PageDomainInfo::PageDomainInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageDomainInfo::~PageDomainInfo() = default;


const char PageDomainInfo::kDomainTypeName[] = "DomainType";

PageDomainInfo& PageDomainInfo::SetDomainType(int64_t value) {
  SetMetricInternal(kDomainTypeNameHash, value);
  return *this;
}


const char PageLoad::kEntryName[] = "PageLoad";

PageLoad::PageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad::~PageLoad() = default;


const char PageLoad::kDocumentTiming_NavigationToDOMContentLoadedEventFiredName[] = "DocumentTiming.NavigationToDOMContentLoadedEventFired";

PageLoad& PageLoad::SetDocumentTiming_NavigationToDOMContentLoadedEventFired(int64_t value) {
  SetMetricInternal(kDocumentTiming_NavigationToDOMContentLoadedEventFiredNameHash, value);
  return *this;
}

const char PageLoad::kDocumentTiming_NavigationToLoadEventFiredName[] = "DocumentTiming.NavigationToLoadEventFired";

PageLoad& PageLoad::SetDocumentTiming_NavigationToLoadEventFired(int64_t value) {
  SetMetricInternal(kDocumentTiming_NavigationToLoadEventFiredNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_NavigationToInteractiveName[] = "Experimental.NavigationToInteractive";

PageLoad& PageLoad::SetExperimental_NavigationToInteractive(int64_t value) {
  SetMetricInternal(kExperimental_NavigationToInteractiveNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintName[] = "Experimental.PaintTiming.NavigationToFirstMeaningfulPaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToFirstMeaningfulPaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelayName[] = "InteractiveTiming.FirstInputDelay";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelayNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestampName[] = "InteractiveTiming.FirstInputTimestamp";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestampNameHash, value);
  return *this;
}

const char PageLoad::kNavigation_PageTransitionName[] = "Navigation.PageTransition";

PageLoad& PageLoad::SetNavigation_PageTransition(int64_t value) {
  SetMetricInternal(kNavigation_PageTransitionNameHash, value);
  return *this;
}

const char PageLoad::kNet_CacheBytesName[] = "Net.CacheBytes";

PageLoad& PageLoad::SetNet_CacheBytes(int64_t value) {
  SetMetricInternal(kNet_CacheBytesNameHash, value);
  return *this;
}

const char PageLoad::kNet_DownstreamKbpsEstimate_OnNavigationStartName[] = "Net.DownstreamKbpsEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_DownstreamKbpsEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_DownstreamKbpsEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_EffectiveConnectionType_OnNavigationStartName[] = "Net.EffectiveConnectionType.OnNavigationStart";

PageLoad& PageLoad::SetNet_EffectiveConnectionType_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_EffectiveConnectionType_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_EffectiveConnectionType2_OnNavigationStartName[] = "Net.EffectiveConnectionType2.OnNavigationStart";

PageLoad& PageLoad::SetNet_EffectiveConnectionType2_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_EffectiveConnectionType2_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_ErrorCode_OnFailedProvisionalLoadName[] = "Net.ErrorCode.OnFailedProvisionalLoad";

PageLoad& PageLoad::SetNet_ErrorCode_OnFailedProvisionalLoad(int64_t value) {
  SetMetricInternal(kNet_ErrorCode_OnFailedProvisionalLoadNameHash, value);
  return *this;
}

const char PageLoad::kNet_HttpRttEstimate_OnNavigationStartName[] = "Net.HttpRttEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_HttpRttEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_HttpRttEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_NetworkBytesName[] = "Net.NetworkBytes";

PageLoad& PageLoad::SetNet_NetworkBytes(int64_t value) {
  SetMetricInternal(kNet_NetworkBytesNameHash, value);
  return *this;
}

const char PageLoad::kNet_TransportRttEstimate_OnNavigationStartName[] = "Net.TransportRttEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_TransportRttEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_TransportRttEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kPageTiming_ForegroundDurationName[] = "PageTiming.ForegroundDuration";

PageLoad& PageLoad::SetPageTiming_ForegroundDuration(int64_t value) {
  SetMetricInternal(kPageTiming_ForegroundDurationNameHash, value);
  return *this;
}

const char PageLoad::kPageTiming_NavigationToFailedProvisionalLoadName[] = "PageTiming.NavigationToFailedProvisionalLoad";

PageLoad& PageLoad::SetPageTiming_NavigationToFailedProvisionalLoad(int64_t value) {
  SetMetricInternal(kPageTiming_NavigationToFailedProvisionalLoadNameHash, value);
  return *this;
}

const char PageLoad::kPaintTiming_NavigationToFirstContentfulPaintName[] = "PaintTiming.NavigationToFirstContentfulPaint";

PageLoad& PageLoad::SetPaintTiming_NavigationToFirstContentfulPaint(int64_t value) {
  SetMetricInternal(kPaintTiming_NavigationToFirstContentfulPaintNameHash, value);
  return *this;
}

const char PageLoad::kPaintTiming_NavigationToFirstPaintName[] = "PaintTiming.NavigationToFirstPaint";

PageLoad& PageLoad::SetPaintTiming_NavigationToFirstPaint(int64_t value) {
  SetMetricInternal(kPaintTiming_NavigationToFirstPaintNameHash, value);
  return *this;
}

const char PageLoad::kParseTiming_NavigationToParseStartName[] = "ParseTiming.NavigationToParseStart";

PageLoad& PageLoad::SetParseTiming_NavigationToParseStart(int64_t value) {
  SetMetricInternal(kParseTiming_NavigationToParseStartNameHash, value);
  return *this;
}


const char PageLoad_FromGoogleSearch::kEntryName[] = "PageLoad.FromGoogleSearch";

PageLoad_FromGoogleSearch::PageLoad_FromGoogleSearch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_FromGoogleSearch::~PageLoad_FromGoogleSearch() = default;



const char PageLoad_ServiceWorkerControlled::kEntryName[] = "PageLoad.ServiceWorkerControlled";

PageLoad_ServiceWorkerControlled::PageLoad_ServiceWorkerControlled(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_ServiceWorkerControlled::~PageLoad_ServiceWorkerControlled() = default;



const char PasswordForm::kEntryName[] = "PasswordForm";

PasswordForm::PasswordForm(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PasswordForm::~PasswordForm() = default;


const char PasswordForm::kContext_FormSignatureName[] = "Context.FormSignature";

PasswordForm& PasswordForm::SetContext_FormSignature(int64_t value) {
  SetMetricInternal(kContext_FormSignatureNameHash, value);
  return *this;
}

const char PasswordForm::kManagerFill_ActionName[] = "ManagerFill.Action";

PasswordForm& PasswordForm::SetManagerFill_Action(int64_t value) {
  SetMetricInternal(kManagerFill_ActionNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_InteractionName[] = "Saving.Prompt.Interaction";

PasswordForm& PasswordForm::SetSaving_Prompt_Interaction(int64_t value) {
  SetMetricInternal(kSaving_Prompt_InteractionNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_ShownName[] = "Saving.Prompt.Shown";

PasswordForm& PasswordForm::SetSaving_Prompt_Shown(int64_t value) {
  SetMetricInternal(kSaving_Prompt_ShownNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_TriggerName[] = "Saving.Prompt.Trigger";

PasswordForm& PasswordForm::SetSaving_Prompt_Trigger(int64_t value) {
  SetMetricInternal(kSaving_Prompt_TriggerNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_IndicatorName[] = "Submission.Indicator";

PasswordForm& PasswordForm::SetSubmission_Indicator(int64_t value) {
  SetMetricInternal(kSubmission_IndicatorNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_ObservedName[] = "Submission.Observed";

PasswordForm& PasswordForm::SetSubmission_Observed(int64_t value) {
  SetMetricInternal(kSubmission_ObservedNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_SubmissionResultName[] = "Submission.SubmissionResult";

PasswordForm& PasswordForm::SetSubmission_SubmissionResult(int64_t value) {
  SetMetricInternal(kSubmission_SubmissionResultNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_SubmittedFormTypeName[] = "Submission.SubmittedFormType";

PasswordForm& PasswordForm::SetSubmission_SubmittedFormType(int64_t value) {
  SetMetricInternal(kSubmission_SubmittedFormTypeNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_HTTPSNotHTTPName[] = "SuppressedAccount.Generated.HTTPSNotHTTP";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_HTTPSNotHTTP(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_HTTPSNotHTTPNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_PSLMatchingName[] = "SuppressedAccount.Generated.PSLMatching";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_PSLMatching(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_PSLMatchingNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_SameOrganizationNameName[] = "SuppressedAccount.Generated.SameOrganizationName";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_SameOrganizationName(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_SameOrganizationNameNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_HTTPSNotHTTPName[] = "SuppressedAccount.Manual.HTTPSNotHTTP";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_HTTPSNotHTTP(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_HTTPSNotHTTPNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_PSLMatchingName[] = "SuppressedAccount.Manual.PSLMatching";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_PSLMatching(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_PSLMatchingNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_SameOrganizationNameName[] = "SuppressedAccount.Manual.SameOrganizationName";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_SameOrganizationName(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_SameOrganizationNameNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_InteractionName[] = "Updating.Prompt.Interaction";

PasswordForm& PasswordForm::SetUpdating_Prompt_Interaction(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_InteractionNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_ShownName[] = "Updating.Prompt.Shown";

PasswordForm& PasswordForm::SetUpdating_Prompt_Shown(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_ShownNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_TriggerName[] = "Updating.Prompt.Trigger";

PasswordForm& PasswordForm::SetUpdating_Prompt_Trigger(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_TriggerNameHash, value);
  return *this;
}

const char PasswordForm::kUser_ActionName[] = "User.Action";

PasswordForm& PasswordForm::SetUser_Action(int64_t value) {
  SetMetricInternal(kUser_ActionNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_CorrectedUsernameInFormName[] = "User.Action.CorrectedUsernameInForm";

PasswordForm& PasswordForm::SetUser_Action_CorrectedUsernameInForm(int64_t value) {
  SetMetricInternal(kUser_Action_CorrectedUsernameInFormNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_EditedUsernameInBubbleName[] = "User.Action.EditedUsernameInBubble";

PasswordForm& PasswordForm::SetUser_Action_EditedUsernameInBubble(int64_t value) {
  SetMetricInternal(kUser_Action_EditedUsernameInBubbleNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_SelectedDifferentPasswordInBubbleName[] = "User.Action.SelectedDifferentPasswordInBubble";

PasswordForm& PasswordForm::SetUser_Action_SelectedDifferentPasswordInBubble(int64_t value) {
  SetMetricInternal(kUser_Action_SelectedDifferentPasswordInBubbleNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_TriggeredManualFallbackForSavingName[] = "User.Action.TriggeredManualFallbackForSaving";

PasswordForm& PasswordForm::SetUser_Action_TriggeredManualFallbackForSaving(int64_t value) {
  SetMetricInternal(kUser_Action_TriggeredManualFallbackForSavingNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_TriggeredManualFallbackForUpdatingName[] = "User.Action.TriggeredManualFallbackForUpdating";

PasswordForm& PasswordForm::SetUser_Action_TriggeredManualFallbackForUpdating(int64_t value) {
  SetMetricInternal(kUser_Action_TriggeredManualFallbackForUpdatingNameHash, value);
  return *this;
}

const char PasswordForm::kUser_ActionSimplifiedName[] = "User.ActionSimplified";

PasswordForm& PasswordForm::SetUser_ActionSimplified(int64_t value) {
  SetMetricInternal(kUser_ActionSimplifiedNameHash, value);
  return *this;
}


const char PageWithPassword::kEntryName[] = "PageWithPassword";

PageWithPassword::PageWithPassword(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageWithPassword::~PageWithPassword() = default;


const char PageWithPassword::kPageLevelUserActionName[] = "PageLevelUserAction";

PageWithPassword& PageWithPassword::SetPageLevelUserAction(int64_t value) {
  SetMetricInternal(kPageLevelUserActionNameHash, value);
  return *this;
}

const char PageWithPassword::kProvisionalSaveFailureName[] = "ProvisionalSaveFailure";

PageWithPassword& PageWithPassword::SetProvisionalSaveFailure(int64_t value) {
  SetMetricInternal(kProvisionalSaveFailureNameHash, value);
  return *this;
}

const char PageWithPassword::kUserModifiedPasswordFieldName[] = "UserModifiedPasswordField";

PageWithPassword& PageWithPassword::SetUserModifiedPasswordField(int64_t value) {
  SetMetricInternal(kUserModifiedPasswordFieldNameHash, value);
  return *this;
}


const char PaymentRequest_CheckoutEvents::kEntryName[] = "PaymentRequest.CheckoutEvents";

PaymentRequest_CheckoutEvents::PaymentRequest_CheckoutEvents(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PaymentRequest_CheckoutEvents::~PaymentRequest_CheckoutEvents() = default;


const char PaymentRequest_CheckoutEvents::kCompletionStatusName[] = "CompletionStatus";

PaymentRequest_CheckoutEvents& PaymentRequest_CheckoutEvents::SetCompletionStatus(int64_t value) {
  SetMetricInternal(kCompletionStatusNameHash, value);
  return *this;
}

const char PaymentRequest_CheckoutEvents::kEventsName[] = "Events";

PaymentRequest_CheckoutEvents& PaymentRequest_CheckoutEvents::SetEvents(int64_t value) {
  SetMetricInternal(kEventsNameHash, value);
  return *this;
}


const char Permission::kEntryName[] = "Permission";

Permission::Permission(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Permission::~Permission() = default;


const char Permission::kActionName[] = "Action";

Permission& Permission::SetAction(int64_t value) {
  SetMetricInternal(kActionNameHash, value);
  return *this;
}

const char Permission::kGestureName[] = "Gesture";

Permission& Permission::SetGesture(int64_t value) {
  SetMetricInternal(kGestureNameHash, value);
  return *this;
}

const char Permission::kPermissionTypeName[] = "PermissionType";

Permission& Permission::SetPermissionType(int64_t value) {
  SetMetricInternal(kPermissionTypeNameHash, value);
  return *this;
}

const char Permission::kPriorDismissalsName[] = "PriorDismissals";

Permission& Permission::SetPriorDismissals(int64_t value) {
  SetMetricInternal(kPriorDismissalsNameHash, value);
  return *this;
}

const char Permission::kPriorIgnoresName[] = "PriorIgnores";

Permission& Permission::SetPriorIgnores(int64_t value) {
  SetMetricInternal(kPriorIgnoresNameHash, value);
  return *this;
}

const char Permission::kSourceName[] = "Source";

Permission& Permission::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}


const char Plugins_FlashInstance::kEntryName[] = "Plugins.FlashInstance";

Plugins_FlashInstance::Plugins_FlashInstance(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Plugins_FlashInstance::~Plugins_FlashInstance() = default;



const char Previews::kEntryName[] = "Previews";

Previews::Previews(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Previews::~Previews() = default;


const char Previews::kclient_lofiName[] = "client_lofi";

Previews& Previews::Setclient_lofi(int64_t value) {
  SetMetricInternal(kclient_lofiNameHash, value);
  return *this;
}

const char Previews::klite_pageName[] = "lite_page";

Previews& Previews::Setlite_page(int64_t value) {
  SetMetricInternal(klite_pageNameHash, value);
  return *this;
}

const char Previews::knoscriptName[] = "noscript";

Previews& Previews::Setnoscript(int64_t value) {
  SetMetricInternal(knoscriptNameHash, value);
  return *this;
}

const char Previews::kopt_outName[] = "opt_out";

Previews& Previews::Setopt_out(int64_t value) {
  SetMetricInternal(kopt_outNameHash, value);
  return *this;
}

const char Previews::korigin_opt_outName[] = "origin_opt_out";

Previews& Previews::Setorigin_opt_out(int64_t value) {
  SetMetricInternal(korigin_opt_outNameHash, value);
  return *this;
}

const char Previews::ksave_data_enabledName[] = "save_data_enabled";

Previews& Previews::Setsave_data_enabled(int64_t value) {
  SetMetricInternal(ksave_data_enabledNameHash, value);
  return *this;
}

const char Previews::kserver_lofiName[] = "server_lofi";

Previews& Previews::Setserver_lofi(int64_t value) {
  SetMetricInternal(kserver_lofiNameHash, value);
  return *this;
}


const char ResponsivenessMeasurement::kEntryName[] = "ResponsivenessMeasurement";

ResponsivenessMeasurement::ResponsivenessMeasurement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ResponsivenessMeasurement::~ResponsivenessMeasurement() = default;


const char ResponsivenessMeasurement::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

ResponsivenessMeasurement& ResponsivenessMeasurement::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}


const char RendererSchedulerTask::kEntryName[] = "RendererSchedulerTask";

RendererSchedulerTask::RendererSchedulerTask(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

RendererSchedulerTask::~RendererSchedulerTask() = default;


const char RendererSchedulerTask::kFrameStatusName[] = "FrameStatus";

RendererSchedulerTask& RendererSchedulerTask::SetFrameStatus(int64_t value) {
  SetMetricInternal(kFrameStatusNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kPageSchedulersName[] = "PageSchedulers";

RendererSchedulerTask& RendererSchedulerTask::SetPageSchedulers(int64_t value) {
  SetMetricInternal(kPageSchedulersNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kQueueTypeName[] = "QueueType";

RendererSchedulerTask& RendererSchedulerTask::SetQueueType(int64_t value) {
  SetMetricInternal(kQueueTypeNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererAudibleName[] = "RendererAudible";

RendererSchedulerTask& RendererSchedulerTask::SetRendererAudible(int64_t value) {
  SetMetricInternal(kRendererAudibleNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererBackgroundedName[] = "RendererBackgrounded";

RendererSchedulerTask& RendererSchedulerTask::SetRendererBackgrounded(int64_t value) {
  SetMetricInternal(kRendererBackgroundedNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererHiddenName[] = "RendererHidden";

RendererSchedulerTask& RendererSchedulerTask::SetRendererHidden(int64_t value) {
  SetMetricInternal(kRendererHiddenNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskCPUDurationName[] = "TaskCPUDuration";

RendererSchedulerTask& RendererSchedulerTask::SetTaskCPUDuration(int64_t value) {
  SetMetricInternal(kTaskCPUDurationNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskDurationName[] = "TaskDuration";

RendererSchedulerTask& RendererSchedulerTask::SetTaskDuration(int64_t value) {
  SetMetricInternal(kTaskDurationNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskTypeName[] = "TaskType";

RendererSchedulerTask& RendererSchedulerTask::SetTaskType(int64_t value) {
  SetMetricInternal(kTaskTypeNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kUseCaseName[] = "UseCase";

RendererSchedulerTask& RendererSchedulerTask::SetUseCase(int64_t value) {
  SetMetricInternal(kUseCaseNameHash, value);
  return *this;
}


const char Pepper_Broker::kEntryName[] = "Pepper.Broker";

Pepper_Broker::Pepper_Broker(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Pepper_Broker::~Pepper_Broker() = default;



const char Popup_Closed::kEntryName[] = "Popup.Closed";

Popup_Closed::Popup_Closed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Popup_Closed::~Popup_Closed() = default;


const char Popup_Closed::kEngagementTimeName[] = "EngagementTime";

Popup_Closed& Popup_Closed::SetEngagementTime(int64_t value) {
  SetMetricInternal(kEngagementTimeNameHash, value);
  return *this;
}

const char Popup_Closed::kUserInitiatedCloseName[] = "UserInitiatedClose";

Popup_Closed& Popup_Closed::SetUserInitiatedClose(int64_t value) {
  SetMetricInternal(kUserInitiatedCloseNameHash, value);
  return *this;
}


const char ScreenBrightness::kEntryName[] = "ScreenBrightness";

ScreenBrightness::ScreenBrightness(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ScreenBrightness::~ScreenBrightness() = default;


const char ScreenBrightness::kBatteryPercentName[] = "BatteryPercent";

ScreenBrightness& ScreenBrightness::SetBatteryPercent(int64_t value) {
  SetMetricInternal(kBatteryPercentNameHash, value);
  return *this;
}

const char ScreenBrightness::kBrightnessName[] = "Brightness";

ScreenBrightness& ScreenBrightness::SetBrightness(int64_t value) {
  SetMetricInternal(kBrightnessNameHash, value);
  return *this;
}

const char ScreenBrightness::kDayOfWeekName[] = "DayOfWeek";

ScreenBrightness& ScreenBrightness::SetDayOfWeek(int64_t value) {
  SetMetricInternal(kDayOfWeekNameHash, value);
  return *this;
}

const char ScreenBrightness::kDeviceModeName[] = "DeviceMode";

ScreenBrightness& ScreenBrightness::SetDeviceMode(int64_t value) {
  SetMetricInternal(kDeviceModeNameHash, value);
  return *this;
}

const char ScreenBrightness::kHourOfDayName[] = "HourOfDay";

ScreenBrightness& ScreenBrightness::SetHourOfDay(int64_t value) {
  SetMetricInternal(kHourOfDayNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsAutoclickEnabledName[] = "IsAutoclickEnabled";

ScreenBrightness& ScreenBrightness::SetIsAutoclickEnabled(int64_t value) {
  SetMetricInternal(kIsAutoclickEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsBrailleDisplayConnectedName[] = "IsBrailleDisplayConnected";

ScreenBrightness& ScreenBrightness::SetIsBrailleDisplayConnected(int64_t value) {
  SetMetricInternal(kIsBrailleDisplayConnectedNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsCaretHighlightEnabledName[] = "IsCaretHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsCaretHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsCaretHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsCursorHighlightEnabledName[] = "IsCursorHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsCursorHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsCursorHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsFocusHighlightEnabledName[] = "IsFocusHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsFocusHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsFocusHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsHighContrastEnabledName[] = "IsHighContrastEnabled";

ScreenBrightness& ScreenBrightness::SetIsHighContrastEnabled(int64_t value) {
  SetMetricInternal(kIsHighContrastEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsLargeCursorEnabledName[] = "IsLargeCursorEnabled";

ScreenBrightness& ScreenBrightness::SetIsLargeCursorEnabled(int64_t value) {
  SetMetricInternal(kIsLargeCursorEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsMagnifierEnabledName[] = "IsMagnifierEnabled";

ScreenBrightness& ScreenBrightness::SetIsMagnifierEnabled(int64_t value) {
  SetMetricInternal(kIsMagnifierEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsMonoAudioEnabledName[] = "IsMonoAudioEnabled";

ScreenBrightness& ScreenBrightness::SetIsMonoAudioEnabled(int64_t value) {
  SetMetricInternal(kIsMonoAudioEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSelectToSpeakEnabledName[] = "IsSelectToSpeakEnabled";

ScreenBrightness& ScreenBrightness::SetIsSelectToSpeakEnabled(int64_t value) {
  SetMetricInternal(kIsSelectToSpeakEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSpokenFeedbackEnabledName[] = "IsSpokenFeedbackEnabled";

ScreenBrightness& ScreenBrightness::SetIsSpokenFeedbackEnabled(int64_t value) {
  SetMetricInternal(kIsSpokenFeedbackEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSwitchAccessEnabledName[] = "IsSwitchAccessEnabled";

ScreenBrightness& ScreenBrightness::SetIsSwitchAccessEnabled(int64_t value) {
  SetMetricInternal(kIsSwitchAccessEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsVideoPlayingName[] = "IsVideoPlaying";

ScreenBrightness& ScreenBrightness::SetIsVideoPlaying(int64_t value) {
  SetMetricInternal(kIsVideoPlayingNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsVirtualKeyboardEnabledName[] = "IsVirtualKeyboardEnabled";

ScreenBrightness& ScreenBrightness::SetIsVirtualKeyboardEnabled(int64_t value) {
  SetMetricInternal(kIsVirtualKeyboardEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kLastActivityTimeSecName[] = "LastActivityTimeSec";

ScreenBrightness& ScreenBrightness::SetLastActivityTimeSec(int64_t value) {
  SetMetricInternal(kLastActivityTimeSecNameHash, value);
  return *this;
}

const char ScreenBrightness::kNightLightTemperaturePercentName[] = "NightLightTemperaturePercent";

ScreenBrightness& ScreenBrightness::SetNightLightTemperaturePercent(int64_t value) {
  SetMetricInternal(kNightLightTemperaturePercentNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentKeyEventsName[] = "NumRecentKeyEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentKeyEvents(int64_t value) {
  SetMetricInternal(kNumRecentKeyEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentMouseEventsName[] = "NumRecentMouseEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentMouseEvents(int64_t value) {
  SetMetricInternal(kNumRecentMouseEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentStylusEventsName[] = "NumRecentStylusEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentStylusEvents(int64_t value) {
  SetMetricInternal(kNumRecentStylusEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentTouchEventsName[] = "NumRecentTouchEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentTouchEvents(int64_t value) {
  SetMetricInternal(kNumRecentTouchEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kOnBatteryName[] = "OnBattery";

ScreenBrightness& ScreenBrightness::SetOnBattery(int64_t value) {
  SetMetricInternal(kOnBatteryNameHash, value);
  return *this;
}

const char ScreenBrightness::kPreviousBrightnessName[] = "PreviousBrightness";

ScreenBrightness& ScreenBrightness::SetPreviousBrightness(int64_t value) {
  SetMetricInternal(kPreviousBrightnessNameHash, value);
  return *this;
}

const char ScreenBrightness::kReasonName[] = "Reason";

ScreenBrightness& ScreenBrightness::SetReason(int64_t value) {
  SetMetricInternal(kReasonNameHash, value);
  return *this;
}

const char ScreenBrightness::kRecentTimeActiveSecName[] = "RecentTimeActiveSec";

ScreenBrightness& ScreenBrightness::SetRecentTimeActiveSec(int64_t value) {
  SetMetricInternal(kRecentTimeActiveSecNameHash, value);
  return *this;
}

const char ScreenBrightness::kSequenceIdName[] = "SequenceId";

ScreenBrightness& ScreenBrightness::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char ScreenBrightness::kTimeSinceLastEventSecName[] = "TimeSinceLastEventSec";

ScreenBrightness& ScreenBrightness::SetTimeSinceLastEventSec(int64_t value) {
  SetMetricInternal(kTimeSinceLastEventSecNameHash, value);
  return *this;
}


const char Security_SiteEngagement::kEntryName[] = "Security.SiteEngagement";

Security_SiteEngagement::Security_SiteEngagement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Security_SiteEngagement::~Security_SiteEngagement() = default;


const char Security_SiteEngagement::kFinalSecurityLevelName[] = "FinalSecurityLevel";

Security_SiteEngagement& Security_SiteEngagement::SetFinalSecurityLevel(int64_t value) {
  SetMetricInternal(kFinalSecurityLevelNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kInitialSecurityLevelName[] = "InitialSecurityLevel";

Security_SiteEngagement& Security_SiteEngagement::SetInitialSecurityLevel(int64_t value) {
  SetMetricInternal(kInitialSecurityLevelNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kScoreDeltaName[] = "ScoreDelta";

Security_SiteEngagement& Security_SiteEngagement::SetScoreDelta(int64_t value) {
  SetMetricInternal(kScoreDeltaNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kScoreFinalName[] = "ScoreFinal";

Security_SiteEngagement& Security_SiteEngagement::SetScoreFinal(int64_t value) {
  SetMetricInternal(kScoreFinalNameHash, value);
  return *this;
}


const char SiteIsolation_XSD_Browser_Blocked::kEntryName[] = "SiteIsolation.XSD.Browser.Blocked";

SiteIsolation_XSD_Browser_Blocked::SiteIsolation_XSD_Browser_Blocked(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SiteIsolation_XSD_Browser_Blocked::~SiteIsolation_XSD_Browser_Blocked() = default;


const char SiteIsolation_XSD_Browser_Blocked::kCanonicalMimeTypeName[] = "CanonicalMimeType";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetCanonicalMimeType(int64_t value) {
  SetMetricInternal(kCanonicalMimeTypeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kContentLengthWasZeroName[] = "ContentLengthWasZero";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetContentLengthWasZero(int64_t value) {
  SetMetricInternal(kContentLengthWasZeroNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kContentResourceTypeName[] = "ContentResourceType";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetContentResourceType(int64_t value) {
  SetMetricInternal(kContentResourceTypeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kHttpResponseCodeName[] = "HttpResponseCode";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetHttpResponseCode(int64_t value) {
  SetMetricInternal(kHttpResponseCodeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kNeededSniffingName[] = "NeededSniffing";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetNeededSniffing(int64_t value) {
  SetMetricInternal(kNeededSniffingNameHash, value);
  return *this;
}


const char SubresourceFilter::kEntryName[] = "SubresourceFilter";

SubresourceFilter::SubresourceFilter(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SubresourceFilter::~SubresourceFilter() = default;


const char SubresourceFilter::kActivationDecisionName[] = "ActivationDecision";

SubresourceFilter& SubresourceFilter::SetActivationDecision(int64_t value) {
  SetMetricInternal(kActivationDecisionNameHash, value);
  return *this;
}

const char SubresourceFilter::kDryRunName[] = "DryRun";

SubresourceFilter& SubresourceFilter::SetDryRun(int64_t value) {
  SetMetricInternal(kDryRunNameHash, value);
  return *this;
}


const char Tab_RendererOOM::kEntryName[] = "Tab.RendererOOM";

Tab_RendererOOM::Tab_RendererOOM(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Tab_RendererOOM::~Tab_RendererOOM() = default;


const char Tab_RendererOOM::kTimeSinceLastNavigationName[] = "TimeSinceLastNavigation";

Tab_RendererOOM& Tab_RendererOOM::SetTimeSinceLastNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceLastNavigationNameHash, value);
  return *this;
}


const char Translate::kEntryName[] = "Translate";

Translate::Translate(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Translate::~Translate() = default;


const char Translate::kAcceptCountName[] = "AcceptCount";

Translate& Translate::SetAcceptCount(int64_t value) {
  SetMetricInternal(kAcceptCountNameHash, value);
  return *this;
}

const char Translate::kCountryName[] = "Country";

Translate& Translate::SetCountry(int64_t value) {
  SetMetricInternal(kCountryNameHash, value);
  return *this;
}

const char Translate::kDeclineCountName[] = "DeclineCount";

Translate& Translate::SetDeclineCount(int64_t value) {
  SetMetricInternal(kDeclineCountNameHash, value);
  return *this;
}

const char Translate::kEventTypeName[] = "EventType";

Translate& Translate::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char Translate::kIgnoreCountName[] = "IgnoreCount";

Translate& Translate::SetIgnoreCount(int64_t value) {
  SetMetricInternal(kIgnoreCountNameHash, value);
  return *this;
}

const char Translate::kRankerResponseName[] = "RankerResponse";

Translate& Translate::SetRankerResponse(int64_t value) {
  SetMetricInternal(kRankerResponseNameHash, value);
  return *this;
}

const char Translate::kRankerVersionName[] = "RankerVersion";

Translate& Translate::SetRankerVersion(int64_t value) {
  SetMetricInternal(kRankerVersionNameHash, value);
  return *this;
}

const char Translate::kSourceLanguageName[] = "SourceLanguage";

Translate& Translate::SetSourceLanguage(int64_t value) {
  SetMetricInternal(kSourceLanguageNameHash, value);
  return *this;
}

const char Translate::kTargetLanguageName[] = "TargetLanguage";

Translate& Translate::SetTargetLanguage(int64_t value) {
  SetMetricInternal(kTargetLanguageNameHash, value);
  return *this;
}


const char TabManager_Background_FirstAlertFired::kEntryName[] = "TabManager.Background.FirstAlertFired";

TabManager_Background_FirstAlertFired::TabManager_Background_FirstAlertFired(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAlertFired::~TabManager_Background_FirstAlertFired() = default;


const char TabManager_Background_FirstAlertFired::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstAlertFired& TabManager_Background_FirstAlertFired::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstAlertFired::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstAlertFired& TabManager_Background_FirstAlertFired::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstAudioStarts::kEntryName[] = "TabManager.Background.FirstAudioStarts";

TabManager_Background_FirstAudioStarts::TabManager_Background_FirstAudioStarts(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAudioStarts::~TabManager_Background_FirstAudioStarts() = default;


const char TabManager_Background_FirstAudioStarts::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstAudioStarts& TabManager_Background_FirstAudioStarts::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstAudioStarts::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstAudioStarts& TabManager_Background_FirstAudioStarts::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstFaviconUpdated::kEntryName[] = "TabManager.Background.FirstFaviconUpdated";

TabManager_Background_FirstFaviconUpdated::TabManager_Background_FirstFaviconUpdated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstFaviconUpdated::~TabManager_Background_FirstFaviconUpdated() = default;


const char TabManager_Background_FirstFaviconUpdated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstFaviconUpdated& TabManager_Background_FirstFaviconUpdated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstNonPersistentNotificationCreated::kEntryName[] = "TabManager.Background.FirstNonPersistentNotificationCreated";

TabManager_Background_FirstNonPersistentNotificationCreated::TabManager_Background_FirstNonPersistentNotificationCreated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstNonPersistentNotificationCreated::~TabManager_Background_FirstNonPersistentNotificationCreated() = default;


const char TabManager_Background_FirstNonPersistentNotificationCreated::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstNonPersistentNotificationCreated& TabManager_Background_FirstNonPersistentNotificationCreated::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstNonPersistentNotificationCreated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstNonPersistentNotificationCreated& TabManager_Background_FirstNonPersistentNotificationCreated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstTitleUpdated::kEntryName[] = "TabManager.Background.FirstTitleUpdated";

TabManager_Background_FirstTitleUpdated::TabManager_Background_FirstTitleUpdated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstTitleUpdated::~TabManager_Background_FirstTitleUpdated() = default;


const char TabManager_Background_FirstTitleUpdated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstTitleUpdated& TabManager_Background_FirstTitleUpdated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_ForegroundedOrClosed::kEntryName[] = "TabManager.Background.ForegroundedOrClosed";

TabManager_Background_ForegroundedOrClosed::TabManager_Background_ForegroundedOrClosed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_ForegroundedOrClosed::~TabManager_Background_ForegroundedOrClosed() = default;


const char TabManager_Background_ForegroundedOrClosed::kIsForegroundedName[] = "IsForegrounded";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetIsForegrounded(int64_t value) {
  SetMetricInternal(kIsForegroundedNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kMRUIndexName[] = "MRUIndex";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetMRUIndex(int64_t value) {
  SetMetricInternal(kMRUIndexNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kTotalTabCountName[] = "TotalTabCount";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetTotalTabCount(int64_t value) {
  SetMetricInternal(kTotalTabCountNameHash, value);
  return *this;
}


const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName[] = "TabManager.BackgroundTabOpening.ForegroundTab.ExpectedTaskQueueingDurationInfo";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::~TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo() = default;


const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabLoadingCountName[] = "BackgroundTabLoadingCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabLoadingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabLoadingCountNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabOpeningSessionIdName[] = "BackgroundTabOpeningSessionId";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabOpeningSessionId(int64_t value) {
  SetMetricInternal(kBackgroundTabOpeningSessionIdNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabPendingCountName[] = "BackgroundTabPendingCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabPendingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabPendingCountNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName[] = "SequenceId";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName[] = "SystemTabCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_LifecycleStateChange::kEntryName[] = "TabManager.LifecycleStateChange";

TabManager_LifecycleStateChange::TabManager_LifecycleStateChange(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_LifecycleStateChange::~TabManager_LifecycleStateChange() = default;


const char TabManager_LifecycleStateChange::kFailureGlobalBlacklistName[] = "FailureGlobalBlacklist";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureGlobalBlacklist(int64_t value) {
  SetMetricInternal(kFailureGlobalBlacklistNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicAudioName[] = "FailureHeuristicAudio";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicAudio(int64_t value) {
  SetMetricInternal(kFailureHeuristicAudioNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicFaviconName[] = "FailureHeuristicFavicon";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicFavicon(int64_t value) {
  SetMetricInternal(kFailureHeuristicFaviconNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicInsufficientObservationName[] = "FailureHeuristicInsufficientObservation";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicInsufficientObservation(int64_t value) {
  SetMetricInternal(kFailureHeuristicInsufficientObservationNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicNotificationsName[] = "FailureHeuristicNotifications";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicNotifications(int64_t value) {
  SetMetricInternal(kFailureHeuristicNotificationsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicTitleName[] = "FailureHeuristicTitle";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicTitle(int64_t value) {
  SetMetricInternal(kFailureHeuristicTitleNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLifecyclesEnterprisePolicyOptOutName[] = "FailureLifecyclesEnterprisePolicyOptOut";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLifecyclesEnterprisePolicyOptOut(int64_t value) {
  SetMetricInternal(kFailureLifecyclesEnterprisePolicyOptOutNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLifecyclesFeaturePolicyOptOutName[] = "FailureLifecyclesFeaturePolicyOptOut";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLifecyclesFeaturePolicyOptOut(int64_t value) {
  SetMetricInternal(kFailureLifecyclesFeaturePolicyOptOutNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateCapturingName[] = "FailureLiveStateCapturing";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateCapturing(int64_t value) {
  SetMetricInternal(kFailureLiveStateCapturingNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateExtensionDisallowedName[] = "FailureLiveStateExtensionDisallowed";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateExtensionDisallowed(int64_t value) {
  SetMetricInternal(kFailureLiveStateExtensionDisallowedNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateFormEntryName[] = "FailureLiveStateFormEntry";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateFormEntry(int64_t value) {
  SetMetricInternal(kFailureLiveStateFormEntryNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateIsPDFName[] = "FailureLiveStateIsPDF";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateIsPDF(int64_t value) {
  SetMetricInternal(kFailureLiveStateIsPDFNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateMirroringName[] = "FailureLiveStateMirroring";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateMirroring(int64_t value) {
  SetMetricInternal(kFailureLiveStateMirroringNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStatePlayingAudioName[] = "FailureLiveStatePlayingAudio";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStatePlayingAudio(int64_t value) {
  SetMetricInternal(kFailureLiveStatePlayingAudioNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateUsingWebSocketsName[] = "FailureLiveStateUsingWebSockets";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateUsingWebSockets(int64_t value) {
  SetMetricInternal(kFailureLiveStateUsingWebSocketsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateUsingWebUSBName[] = "FailureLiveStateUsingWebUSB";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateUsingWebUSB(int64_t value) {
  SetMetricInternal(kFailureLiveStateUsingWebUSBNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateVisibleName[] = "FailureLiveStateVisible";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateVisible(int64_t value) {
  SetMetricInternal(kFailureLiveStateVisibleNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kLifecycleStateChangeReasonName[] = "LifecycleStateChangeReason";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetLifecycleStateChangeReason(int64_t value) {
  SetMetricInternal(kLifecycleStateChangeReasonNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kNewLifecycleStateName[] = "NewLifecycleState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetNewLifecycleState(int64_t value) {
  SetMetricInternal(kNewLifecycleStateNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kOldLifecycleStateName[] = "OldLifecycleState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetOldLifecycleState(int64_t value) {
  SetMetricInternal(kOldLifecycleStateNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kOutcomeName[] = "Outcome";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetOutcome(int64_t value) {
  SetMetricInternal(kOutcomeNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessGlobalWhitelistName[] = "SuccessGlobalWhitelist";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessGlobalWhitelist(int64_t value) {
  SetMetricInternal(kSuccessGlobalWhitelistNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessHeuristicName[] = "SuccessHeuristic";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessHeuristic(int64_t value) {
  SetMetricInternal(kSuccessHeuristicNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessLifecyclesFeaturePolicyOptInName[] = "SuccessLifecyclesFeaturePolicyOptIn";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessLifecyclesFeaturePolicyOptIn(int64_t value) {
  SetMetricInternal(kSuccessLifecyclesFeaturePolicyOptInNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTimeSinceNavigationMsName[] = "TimeSinceNavigationMs";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTimeSinceNavigationMs(int64_t value) {
  SetMetricInternal(kTimeSinceNavigationMsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTimeSinceVisibilityStateChangeMsName[] = "TimeSinceVisibilityStateChangeMs";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTimeSinceVisibilityStateChangeMs(int64_t value) {
  SetMetricInternal(kTimeSinceVisibilityStateChangeMsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTransitionForcedName[] = "TransitionForced";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTransitionForced(int64_t value) {
  SetMetricInternal(kTransitionForcedNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kVisibilityStateName[] = "VisibilityState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetVisibilityState(int64_t value) {
  SetMetricInternal(kVisibilityStateNameHash, value);
  return *this;
}


const char TabManager_WindowMetrics::kEntryName[] = "TabManager.WindowMetrics";

TabManager_WindowMetrics::TabManager_WindowMetrics(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_WindowMetrics::~TabManager_WindowMetrics() = default;


const char TabManager_WindowMetrics::kIsActiveName[] = "IsActive";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetIsActive(int64_t value) {
  SetMetricInternal(kIsActiveNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kShowStateName[] = "ShowState";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetShowState(int64_t value) {
  SetMetricInternal(kShowStateNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kTabCountName[] = "TabCount";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetTabCount(int64_t value) {
  SetMetricInternal(kTabCountNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kTypeName[] = "Type";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetType(int64_t value) {
  SetMetricInternal(kTypeNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kWindowIdName[] = "WindowId";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetWindowId(int64_t value) {
  SetMetricInternal(kWindowIdNameHash, value);
  return *this;
}


const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kEntryName[] = "TabManager.Experimental.BackgroundTabOpening.TabSwitchLoadStopped";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::~TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped() = default;


const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabLoadingCountName[] = "BackgroundTabLoadingCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabLoadingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabLoadingCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabOpeningSessionIdName[] = "BackgroundTabOpeningSessionId";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabOpeningSessionId(int64_t value) {
  SetMetricInternal(kBackgroundTabOpeningSessionIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabPendingCountName[] = "BackgroundTabPendingCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabPendingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabPendingCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSequenceIdName[] = "SequenceId";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kTabSwitchLoadTimeName[] = "TabSwitchLoadTime";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetTabSwitchLoadTime(int64_t value) {
  SetMetricInternal(kTabSwitchLoadTimeNameHash, value);
  return *this;
}


const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kEntryName[] = "TabManager.Experimental.SessionRestore.ForegroundTab.PageLoad";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::~TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad() = default;


const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kEntryName[] = "TabManager.Experimental.SessionRestore.TabSwitchLoadStopped";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::TabManager_Experimental_SessionRestore_TabSwitchLoadStopped(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::~TabManager_Experimental_SessionRestore_TabSwitchLoadStopped() = default;


const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSequenceIdName[] = "SequenceId";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreSessionIdName[] = "SessionRestoreSessionId";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSessionRestoreSessionId(int64_t value) {
  SetMetricInternal(kSessionRestoreSessionIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kTabSwitchLoadTimeName[] = "TabSwitchLoadTime";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetTabSwitchLoadTime(int64_t value) {
  SetMetricInternal(kTabSwitchLoadTimeNameHash, value);
  return *this;
}


const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName[] = "TabManager.SessionRestore.ForegroundTab.ExpectedTaskQueueingDurationInfo";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::~TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo() = default;


const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName[] = "SequenceId";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreSessionIdName[] = "SessionRestoreSessionId";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSessionRestoreSessionId(int64_t value) {
  SetMetricInternal(kSessionRestoreSessionIdNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName[] = "SystemTabCount";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_TabLifetime::kEntryName[] = "TabManager.TabLifetime";

TabManager_TabLifetime::TabManager_TabLifetime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabLifetime::~TabManager_TabLifetime() = default;


const char TabManager_TabLifetime::kTimeSinceNavigationName[] = "TimeSinceNavigation";

TabManager_TabLifetime& TabManager_TabLifetime::SetTimeSinceNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceNavigationNameHash, value);
  return *this;
}


const char UserActivity::kEntryName[] = "UserActivity";

UserActivity::UserActivity(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivity::~UserActivity() = default;


const char UserActivity::kBatteryPercentName[] = "BatteryPercent";

UserActivity& UserActivity::SetBatteryPercent(int64_t value) {
  SetMetricInternal(kBatteryPercentNameHash, value);
  return *this;
}

const char UserActivity::kDeviceManagementName[] = "DeviceManagement";

UserActivity& UserActivity::SetDeviceManagement(int64_t value) {
  SetMetricInternal(kDeviceManagementNameHash, value);
  return *this;
}

const char UserActivity::kDeviceModeName[] = "DeviceMode";

UserActivity& UserActivity::SetDeviceMode(int64_t value) {
  SetMetricInternal(kDeviceModeNameHash, value);
  return *this;
}

const char UserActivity::kDeviceTypeName[] = "DeviceType";

UserActivity& UserActivity::SetDeviceType(int64_t value) {
  SetMetricInternal(kDeviceTypeNameHash, value);
  return *this;
}

const char UserActivity::kEventLogDurationName[] = "EventLogDuration";

UserActivity& UserActivity::SetEventLogDuration(int64_t value) {
  SetMetricInternal(kEventLogDurationNameHash, value);
  return *this;
}

const char UserActivity::kEventReasonName[] = "EventReason";

UserActivity& UserActivity::SetEventReason(int64_t value) {
  SetMetricInternal(kEventReasonNameHash, value);
  return *this;
}

const char UserActivity::kEventTypeName[] = "EventType";

UserActivity& UserActivity::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char UserActivity::kKeyEventsInLastHourName[] = "KeyEventsInLastHour";

UserActivity& UserActivity::SetKeyEventsInLastHour(int64_t value) {
  SetMetricInternal(kKeyEventsInLastHourNameHash, value);
  return *this;
}

const char UserActivity::kLastActivityDayName[] = "LastActivityDay";

UserActivity& UserActivity::SetLastActivityDay(int64_t value) {
  SetMetricInternal(kLastActivityDayNameHash, value);
  return *this;
}

const char UserActivity::kLastActivityTimeName[] = "LastActivityTime";

UserActivity& UserActivity::SetLastActivityTime(int64_t value) {
  SetMetricInternal(kLastActivityTimeNameHash, value);
  return *this;
}

const char UserActivity::kLastUserActivityTimeName[] = "LastUserActivityTime";

UserActivity& UserActivity::SetLastUserActivityTime(int64_t value) {
  SetMetricInternal(kLastUserActivityTimeNameHash, value);
  return *this;
}

const char UserActivity::kMouseEventsInLastHourName[] = "MouseEventsInLastHour";

UserActivity& UserActivity::SetMouseEventsInLastHour(int64_t value) {
  SetMetricInternal(kMouseEventsInLastHourNameHash, value);
  return *this;
}

const char UserActivity::kOnBatteryName[] = "OnBattery";

UserActivity& UserActivity::SetOnBattery(int64_t value) {
  SetMetricInternal(kOnBatteryNameHash, value);
  return *this;
}

const char UserActivity::kRecentTimeActiveName[] = "RecentTimeActive";

UserActivity& UserActivity::SetRecentTimeActive(int64_t value) {
  SetMetricInternal(kRecentTimeActiveNameHash, value);
  return *this;
}

const char UserActivity::kRecentVideoPlayingTimeName[] = "RecentVideoPlayingTime";

UserActivity& UserActivity::SetRecentVideoPlayingTime(int64_t value) {
  SetMetricInternal(kRecentVideoPlayingTimeNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimDelayName[] = "ScreenDimDelay";

UserActivity& UserActivity::SetScreenDimDelay(int64_t value) {
  SetMetricInternal(kScreenDimDelayNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimmedInitiallyName[] = "ScreenDimmedInitially";

UserActivity& UserActivity::SetScreenDimmedInitially(int64_t value) {
  SetMetricInternal(kScreenDimmedInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimOccurredName[] = "ScreenDimOccurred";

UserActivity& UserActivity::SetScreenDimOccurred(int64_t value) {
  SetMetricInternal(kScreenDimOccurredNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimToOffDelayName[] = "ScreenDimToOffDelay";

UserActivity& UserActivity::SetScreenDimToOffDelay(int64_t value) {
  SetMetricInternal(kScreenDimToOffDelayNameHash, value);
  return *this;
}

const char UserActivity::kScreenLockedInitiallyName[] = "ScreenLockedInitially";

UserActivity& UserActivity::SetScreenLockedInitially(int64_t value) {
  SetMetricInternal(kScreenLockedInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenLockOccurredName[] = "ScreenLockOccurred";

UserActivity& UserActivity::SetScreenLockOccurred(int64_t value) {
  SetMetricInternal(kScreenLockOccurredNameHash, value);
  return *this;
}

const char UserActivity::kScreenOffInitiallyName[] = "ScreenOffInitially";

UserActivity& UserActivity::SetScreenOffInitially(int64_t value) {
  SetMetricInternal(kScreenOffInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenOffOccurredName[] = "ScreenOffOccurred";

UserActivity& UserActivity::SetScreenOffOccurred(int64_t value) {
  SetMetricInternal(kScreenOffOccurredNameHash, value);
  return *this;
}

const char UserActivity::kSequenceIdName[] = "SequenceId";

UserActivity& UserActivity::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastKeyName[] = "TimeSinceLastKey";

UserActivity& UserActivity::SetTimeSinceLastKey(int64_t value) {
  SetMetricInternal(kTimeSinceLastKeyNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastMouseName[] = "TimeSinceLastMouse";

UserActivity& UserActivity::SetTimeSinceLastMouse(int64_t value) {
  SetMetricInternal(kTimeSinceLastMouseNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastTouchName[] = "TimeSinceLastTouch";

UserActivity& UserActivity::SetTimeSinceLastTouch(int64_t value) {
  SetMetricInternal(kTimeSinceLastTouchNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastVideoEndedName[] = "TimeSinceLastVideoEnded";

UserActivity& UserActivity::SetTimeSinceLastVideoEnded(int64_t value) {
  SetMetricInternal(kTimeSinceLastVideoEndedNameHash, value);
  return *this;
}

const char UserActivity::kTouchEventsInLastHourName[] = "TouchEventsInLastHour";

UserActivity& UserActivity::SetTouchEventsInLastHour(int64_t value) {
  SetMetricInternal(kTouchEventsInLastHourNameHash, value);
  return *this;
}


const char UserActivityId::kEntryName[] = "UserActivityId";

UserActivityId::UserActivityId(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivityId::~UserActivityId() = default;


const char UserActivityId::kActivityIdName[] = "ActivityId";

UserActivityId& UserActivityId::SetActivityId(int64_t value) {
  SetMetricInternal(kActivityIdNameHash, value);
  return *this;
}

const char UserActivityId::kContentTypeName[] = "ContentType";

UserActivityId& UserActivityId::SetContentType(int64_t value) {
  SetMetricInternal(kContentTypeNameHash, value);
  return *this;
}

const char UserActivityId::kHasFormEntryName[] = "HasFormEntry";

UserActivityId& UserActivityId::SetHasFormEntry(int64_t value) {
  SetMetricInternal(kHasFormEntryNameHash, value);
  return *this;
}

const char UserActivityId::kIsActiveName[] = "IsActive";

UserActivityId& UserActivityId::SetIsActive(int64_t value) {
  SetMetricInternal(kIsActiveNameHash, value);
  return *this;
}

const char UserActivityId::kIsBrowserFocusedName[] = "IsBrowserFocused";

UserActivityId& UserActivityId::SetIsBrowserFocused(int64_t value) {
  SetMetricInternal(kIsBrowserFocusedNameHash, value);
  return *this;
}

const char UserActivityId::kIsBrowserVisibleName[] = "IsBrowserVisible";

UserActivityId& UserActivityId::SetIsBrowserVisible(int64_t value) {
  SetMetricInternal(kIsBrowserVisibleNameHash, value);
  return *this;
}

const char UserActivityId::kIsTopmostBrowserName[] = "IsTopmostBrowser";

UserActivityId& UserActivityId::SetIsTopmostBrowser(int64_t value) {
  SetMetricInternal(kIsTopmostBrowserNameHash, value);
  return *this;
}

const char UserActivityId::kSiteEngagementScoreName[] = "SiteEngagementScore";

UserActivityId& UserActivityId::SetSiteEngagementScore(int64_t value) {
  SetMetricInternal(kSiteEngagementScoreNameHash, value);
  return *this;
}


const char TabManager_TabMetrics::kEntryName[] = "TabManager.TabMetrics";

TabManager_TabMetrics::TabManager_TabMetrics(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabMetrics::~TabManager_TabMetrics() = default;


const char TabManager_TabMetrics::kContentTypeName[] = "ContentType";

TabManager_TabMetrics& TabManager_TabMetrics::SetContentType(int64_t value) {
  SetMetricInternal(kContentTypeNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kDefaultProtocolHandlerName[] = "DefaultProtocolHandler";

TabManager_TabMetrics& TabManager_TabMetrics::SetDefaultProtocolHandler(int64_t value) {
  SetMetricInternal(kDefaultProtocolHandlerNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kHasBeforeUnloadHandlerName[] = "HasBeforeUnloadHandler";

TabManager_TabMetrics& TabManager_TabMetrics::SetHasBeforeUnloadHandler(int64_t value) {
  SetMetricInternal(kHasBeforeUnloadHandlerNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kHasFormEntryName[] = "HasFormEntry";

TabManager_TabMetrics& TabManager_TabMetrics::SetHasFormEntry(int64_t value) {
  SetMetricInternal(kHasFormEntryNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kIsExtensionProtectedName[] = "IsExtensionProtected";

TabManager_TabMetrics& TabManager_TabMetrics::SetIsExtensionProtected(int64_t value) {
  SetMetricInternal(kIsExtensionProtectedNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kIsPinnedName[] = "IsPinned";

TabManager_TabMetrics& TabManager_TabMetrics::SetIsPinned(int64_t value) {
  SetMetricInternal(kIsPinnedNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kKeyEventCountName[] = "KeyEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetKeyEventCount(int64_t value) {
  SetMetricInternal(kKeyEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kMouseEventCountName[] = "MouseEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetMouseEventCount(int64_t value) {
  SetMetricInternal(kMouseEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kNavigationEntryCountName[] = "NavigationEntryCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetNavigationEntryCount(int64_t value) {
  SetMetricInternal(kNavigationEntryCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionCoreTypeName[] = "PageTransitionCoreType";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionCoreType(int64_t value) {
  SetMetricInternal(kPageTransitionCoreTypeNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionFromAddressBarName[] = "PageTransitionFromAddressBar";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionFromAddressBar(int64_t value) {
  SetMetricInternal(kPageTransitionFromAddressBarNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionIsRedirectName[] = "PageTransitionIsRedirect";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionIsRedirect(int64_t value) {
  SetMetricInternal(kPageTransitionIsRedirectNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kSequenceIdName[] = "SequenceId";

TabManager_TabMetrics& TabManager_TabMetrics::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kSiteEngagementScoreName[] = "SiteEngagementScore";

TabManager_TabMetrics& TabManager_TabMetrics::SetSiteEngagementScore(int64_t value) {
  SetMetricInternal(kSiteEngagementScoreNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kTouchEventCountName[] = "TouchEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetTouchEventCount(int64_t value) {
  SetMetricInternal(kTouchEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWasRecentlyAudibleName[] = "WasRecentlyAudible";

TabManager_TabMetrics& TabManager_TabMetrics::SetWasRecentlyAudible(int64_t value) {
  SetMetricInternal(kWasRecentlyAudibleNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowIdName[] = "WindowId";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowId(int64_t value) {
  SetMetricInternal(kWindowIdNameHash, value);
  return *this;
}


const char XR_WebXR::kEntryName[] = "XR.WebXR";

XR_WebXR::XR_WebXR(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR::~XR_WebXR() = default;


const char XR_WebXR::kDidGetGamepadsName[] = "DidGetGamepads";

XR_WebXR& XR_WebXR::SetDidGetGamepads(int64_t value) {
  SetMetricInternal(kDidGetGamepadsNameHash, value);
  return *this;
}

const char XR_WebXR::kDidGetXRInputSourcesName[] = "DidGetXRInputSources";

XR_WebXR& XR_WebXR::SetDidGetXRInputSources(int64_t value) {
  SetMetricInternal(kDidGetXRInputSourcesNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestAvailableDevicesName[] = "DidRequestAvailableDevices";

XR_WebXR& XR_WebXR::SetDidRequestAvailableDevices(int64_t value) {
  SetMetricInternal(kDidRequestAvailableDevicesNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestPoseName[] = "DidRequestPose";

XR_WebXR& XR_WebXR::SetDidRequestPose(int64_t value) {
  SetMetricInternal(kDidRequestPoseNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestPresentationName[] = "DidRequestPresentation";

XR_WebXR& XR_WebXR::SetDidRequestPresentation(int64_t value) {
  SetMetricInternal(kDidRequestPresentationNameHash, value);
  return *this;
}

const char XR_WebXR::kDidUseNavigatorXRName[] = "DidUseNavigatorXR";

XR_WebXR& XR_WebXR::SetDidUseNavigatorXR(int64_t value) {
  SetMetricInternal(kDidUseNavigatorXRNameHash, value);
  return *this;
}

const char XR_WebXR::kReturnedDeviceName[] = "ReturnedDevice";

XR_WebXR& XR_WebXR::SetReturnedDevice(int64_t value) {
  SetMetricInternal(kReturnedDeviceNameHash, value);
  return *this;
}

const char XR_WebXR::kReturnedPresentationCapableDeviceName[] = "ReturnedPresentationCapableDevice";

XR_WebXR& XR_WebXR::SetReturnedPresentationCapableDevice(int64_t value) {
  SetMetricInternal(kReturnedPresentationCapableDeviceNameHash, value);
  return *this;
}


const char XR_PageSession::kEntryName[] = "XR.PageSession";

XR_PageSession::XR_PageSession(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_PageSession::~XR_PageSession() = default;


const char XR_PageSession::kDurationName[] = "Duration";

XR_PageSession& XR_PageSession::SetDuration(int64_t value) {
  SetMetricInternal(kDurationNameHash, value);
  return *this;
}

const char XR_PageSession::kEnteredFullscreenName[] = "EnteredFullscreen";

XR_PageSession& XR_PageSession::SetEnteredFullscreen(int64_t value) {
  SetMetricInternal(kEnteredFullscreenNameHash, value);
  return *this;
}

const char XR_PageSession::kEnteredVROnPageReasonName[] = "EnteredVROnPageReason";

XR_PageSession& XR_PageSession::SetEnteredVROnPageReason(int64_t value) {
  SetMetricInternal(kEnteredVROnPageReasonNameHash, value);
  return *this;
}

const char XR_PageSession::kTimeOnPageName[] = "TimeOnPage";

XR_PageSession& XR_PageSession::SetTimeOnPage(int64_t value) {
  SetMetricInternal(kTimeOnPageNameHash, value);
  return *this;
}

const char XR_PageSession::kWasOmniboxNavigationName[] = "WasOmniboxNavigation";

XR_PageSession& XR_PageSession::SetWasOmniboxNavigation(int64_t value) {
  SetMetricInternal(kWasOmniboxNavigationNameHash, value);
  return *this;
}

const char XR_PageSession::kWasVoiceSearchNavigationName[] = "WasVoiceSearchNavigation";

XR_PageSession& XR_PageSession::SetWasVoiceSearchNavigation(int64_t value) {
  SetMetricInternal(kWasVoiceSearchNavigationNameHash, value);
  return *this;
}


const char XR_WebXR_PresentationSession::kEntryName[] = "XR.WebXR.PresentationSession";

XR_WebXR_PresentationSession::XR_WebXR_PresentationSession(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR_PresentationSession::~XR_WebXR_PresentationSession() = default;


const char XR_WebXR_PresentationSession::kDurationName[] = "Duration";

XR_WebXR_PresentationSession& XR_WebXR_PresentationSession::SetDuration(int64_t value) {
  SetMetricInternal(kDurationNameHash, value);
  return *this;
}

const char XR_WebXR_PresentationSession::kStartActionName[] = "StartAction";

XR_WebXR_PresentationSession& XR_WebXR_PresentationSession::SetStartAction(int64_t value) {
  SetMetricInternal(kStartActionNameHash, value);
  return *this;
}



}  // namespace builders
}  // namespace ukm
