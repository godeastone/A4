// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SEARCH_MOJOM_SHARED_H_
#define CHROME_COMMON_SEARCH_MOJOM_SHARED_H_

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
#include "chrome/common/search.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
using NTPTileImpressionDataView = mojo::native::NativeStructDataView;

using InstantMostVisitedItemDataView = mojo::native::NativeStructDataView;

using ThemeBackgroundInfoDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
using NTPLoggingEventType = mojo::NativeEnum;
using OmniboxFocusState = mojo::NativeEnum;
using OmniboxFocusChangeReason = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class EmbeddedSearchConnectorInterfaceBase {};

using EmbeddedSearchConnectorPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedSearchConnectorInterfaceBase>;
using EmbeddedSearchConnectorRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedSearchConnectorInterfaceBase>;
using EmbeddedSearchConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedSearchConnectorInterfaceBase>;
using EmbeddedSearchConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedSearchConnectorInterfaceBase>;
class EmbeddedSearchInterfaceBase {};

using EmbeddedSearchPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedSearchInterfaceBase>;
using EmbeddedSearchRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedSearchInterfaceBase>;
using EmbeddedSearchAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedSearchInterfaceBase>;
using EmbeddedSearchAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedSearchInterfaceBase>;
class EmbeddedSearchClientInterfaceBase {};

using EmbeddedSearchClientPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedSearchClientInterfaceBase>;
using EmbeddedSearchClientRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedSearchClientInterfaceBase>;
using EmbeddedSearchClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedSearchClientInterfaceBase>;
using EmbeddedSearchClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedSearchClientInterfaceBase>;
class SearchBouncerInterfaceBase {};

using SearchBouncerPtrDataView =
    mojo::InterfacePtrDataView<SearchBouncerInterfaceBase>;
using SearchBouncerRequestDataView =
    mojo::InterfaceRequestDataView<SearchBouncerInterfaceBase>;
using SearchBouncerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SearchBouncerInterfaceBase>;
using SearchBouncerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SearchBouncerInterfaceBase>;
class EmbeddedSearchConnector_Connect_ParamsDataView {
 public:
  EmbeddedSearchConnector_Connect_ParamsDataView() {}

  EmbeddedSearchConnector_Connect_ParamsDataView(
      internal::EmbeddedSearchConnector_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEmbeddedSearch() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::EmbeddedSearchAssociatedRequestDataView>(
            &data_->embedded_search, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::EmbeddedSearchClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedSearchConnector_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_FocusOmnibox_ParamsDataView {
 public:
  EmbeddedSearch_FocusOmnibox_ParamsDataView() {}

  EmbeddedSearch_FocusOmnibox_ParamsDataView(
      internal::EmbeddedSearch_FocusOmnibox_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::chrome::mojom::OmniboxFocusState>(
        data_value, output);
  }

  OmniboxFocusState state() const {
    return static_cast<OmniboxFocusState>(data_->state);
  }
 private:
  internal::EmbeddedSearch_FocusOmnibox_Params_Data* data_ = nullptr;
};

class EmbeddedSearch_DeleteMostVisitedItem_ParamsDataView {
 public:
  EmbeddedSearch_DeleteMostVisitedItem_ParamsDataView() {}

  EmbeddedSearch_DeleteMostVisitedItem_ParamsDataView(
      internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_UndoAllMostVisitedDeletions_ParamsDataView {
 public:
  EmbeddedSearch_UndoAllMostVisitedDeletions_ParamsDataView() {}

  EmbeddedSearch_UndoAllMostVisitedDeletions_ParamsDataView(
      internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
 private:
  internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data* data_ = nullptr;
};

class EmbeddedSearch_UndoMostVisitedDeletion_ParamsDataView {
 public:
  EmbeddedSearch_UndoMostVisitedDeletion_ParamsDataView() {}

  EmbeddedSearch_UndoMostVisitedDeletion_ParamsDataView(
      internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_LogEvent_ParamsDataView {
 public:
  EmbeddedSearch_LogEvent_ParamsDataView() {}

  EmbeddedSearch_LogEvent_ParamsDataView(
      internal::EmbeddedSearch_LogEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) const {
    auto data_value = data_->event;
    return mojo::internal::Deserialize<::chrome::mojom::NTPLoggingEventType>(
        data_value, output);
  }

  NTPLoggingEventType event() const {
    return static_cast<NTPLoggingEventType>(data_->event);
  }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_LogEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_LogMostVisitedImpression_ParamsDataView {
 public:
  EmbeddedSearch_LogMostVisitedImpression_ParamsDataView() {}

  EmbeddedSearch_LogMostVisitedImpression_ParamsDataView(
      internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetImpressionDataView(
      NTPTileImpressionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImpression(UserType* output) {
    auto* pointer = data_->impression.Get();
    return mojo::internal::Deserialize<::chrome::mojom::NTPTileImpressionDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_LogMostVisitedNavigation_ParamsDataView {
 public:
  EmbeddedSearch_LogMostVisitedNavigation_ParamsDataView() {}

  EmbeddedSearch_LogMostVisitedNavigation_ParamsDataView(
      internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetImpressionDataView(
      NTPTileImpressionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImpression(UserType* output) {
    auto* pointer = data_->impression.Get();
    return mojo::internal::Deserialize<::chrome::mojom::NTPTileImpressionDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_PasteAndOpenDropdown_ParamsDataView {
 public:
  EmbeddedSearch_PasteAndOpenDropdown_ParamsDataView() {}

  EmbeddedSearch_PasteAndOpenDropdown_ParamsDataView(
      internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetTextToBePastedDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextToBePasted(UserType* output) {
    auto* pointer = data_->text_to_be_pasted.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_HistorySyncCheck_ParamsDataView {
 public:
  EmbeddedSearch_HistorySyncCheck_ParamsDataView() {}

  EmbeddedSearch_HistorySyncCheck_ParamsDataView(
      internal::EmbeddedSearch_HistorySyncCheck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
 private:
  internal::EmbeddedSearch_HistorySyncCheck_Params_Data* data_ = nullptr;
};

class EmbeddedSearch_HistorySyncCheck_ResponseParamsDataView {
 public:
  EmbeddedSearch_HistorySyncCheck_ResponseParamsDataView() {}

  EmbeddedSearch_HistorySyncCheck_ResponseParamsDataView(
      internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool sync_history() const {
    return data_->sync_history;
  }
 private:
  internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data* data_ = nullptr;
};

class EmbeddedSearch_ChromeIdentityCheck_ParamsDataView {
 public:
  EmbeddedSearch_ChromeIdentityCheck_ParamsDataView() {}

  EmbeddedSearch_ChromeIdentityCheck_ParamsDataView(
      internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
  inline void GetIdentityDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearch_ChromeIdentityCheck_ResponseParamsDataView {
 public:
  EmbeddedSearch_ChromeIdentityCheck_ResponseParamsDataView() {}

  EmbeddedSearch_ChromeIdentityCheck_ResponseParamsDataView(
      internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool identity_match() const {
    return data_->identity_match;
  }
 private:
  internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data* data_ = nullptr;
};

class EmbeddedSearchClient_SetPageSequenceNumber_ParamsDataView {
 public:
  EmbeddedSearchClient_SetPageSequenceNumber_ParamsDataView() {}

  EmbeddedSearchClient_SetPageSequenceNumber_ParamsDataView(
      internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t page_seq_no() const {
    return data_->page_seq_no;
  }
 private:
  internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data* data_ = nullptr;
};

class EmbeddedSearchClient_FocusChanged_ParamsDataView {
 public:
  EmbeddedSearchClient_FocusChanged_ParamsDataView() {}

  EmbeddedSearchClient_FocusChanged_ParamsDataView(
      internal::EmbeddedSearchClient_FocusChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewFocusState(UserType* output) const {
    auto data_value = data_->new_focus_state;
    return mojo::internal::Deserialize<::chrome::mojom::OmniboxFocusState>(
        data_value, output);
  }

  OmniboxFocusState new_focus_state() const {
    return static_cast<OmniboxFocusState>(data_->new_focus_state);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::chrome::mojom::OmniboxFocusChangeReason>(
        data_value, output);
  }

  OmniboxFocusChangeReason reason() const {
    return static_cast<OmniboxFocusChangeReason>(data_->reason);
  }
 private:
  internal::EmbeddedSearchClient_FocusChanged_Params_Data* data_ = nullptr;
};

class EmbeddedSearchClient_MostVisitedChanged_ParamsDataView {
 public:
  EmbeddedSearchClient_MostVisitedChanged_ParamsDataView() {}

  EmbeddedSearchClient_MostVisitedChanged_ParamsDataView(
      internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetItemsDataView(
      mojo::ArrayDataView<InstantMostVisitedItemDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadItems(UserType* output) {
    auto* pointer = data_->items.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::InstantMostVisitedItemDataView>>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedSearchClient_SetInputInProgress_ParamsDataView {
 public:
  EmbeddedSearchClient_SetInputInProgress_ParamsDataView() {}

  EmbeddedSearchClient_SetInputInProgress_ParamsDataView(
      internal::EmbeddedSearchClient_SetInputInProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool input_in_progress() const {
    return data_->input_in_progress;
  }
 private:
  internal::EmbeddedSearchClient_SetInputInProgress_Params_Data* data_ = nullptr;
};

class EmbeddedSearchClient_ThemeChanged_ParamsDataView {
 public:
  EmbeddedSearchClient_ThemeChanged_ParamsDataView() {}

  EmbeddedSearchClient_ThemeChanged_ParamsDataView(
      internal::EmbeddedSearchClient_ThemeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ThemeBackgroundInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::chrome::mojom::ThemeBackgroundInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedSearchClient_ThemeChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SearchBouncer_SetNewTabPageURL_ParamsDataView {
 public:
  SearchBouncer_SetNewTabPageURL_ParamsDataView() {}

  SearchBouncer_SetNewTabPageURL_ParamsDataView(
      internal::SearchBouncer_SetNewTabPageURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNewTabPageUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewTabPageUrl(UserType* output) {
    auto* pointer = data_->new_tab_page_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::SearchBouncer_SetNewTabPageURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {





inline void EmbeddedSearch_DeleteMostVisitedItem_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void EmbeddedSearch_UndoMostVisitedDeletion_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void EmbeddedSearch_LogEvent_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void EmbeddedSearch_LogMostVisitedImpression_ParamsDataView::GetImpressionDataView(
    NTPTileImpressionDataView* output) {
  auto pointer = data_->impression.Get();
  *output = NTPTileImpressionDataView(pointer, context_);
}


inline void EmbeddedSearch_LogMostVisitedNavigation_ParamsDataView::GetImpressionDataView(
    NTPTileImpressionDataView* output) {
  auto pointer = data_->impression.Get();
  *output = NTPTileImpressionDataView(pointer, context_);
}


inline void EmbeddedSearch_PasteAndOpenDropdown_ParamsDataView::GetTextToBePastedDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text_to_be_pasted.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






inline void EmbeddedSearch_ChromeIdentityCheck_ParamsDataView::GetIdentityDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}








inline void EmbeddedSearchClient_MostVisitedChanged_ParamsDataView::GetItemsDataView(
    mojo::ArrayDataView<InstantMostVisitedItemDataView>* output) {
  auto pointer = data_->items.Get();
  *output = mojo::ArrayDataView<InstantMostVisitedItemDataView>(pointer, context_);
}




inline void EmbeddedSearchClient_ThemeChanged_ParamsDataView::GetValueDataView(
    ThemeBackgroundInfoDataView* output) {
  auto pointer = data_->value.Get();
  *output = ThemeBackgroundInfoDataView(pointer, context_);
}


inline void SearchBouncer_SetNewTabPageURL_ParamsDataView::GetNewTabPageUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->new_tab_page_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SEARCH_MOJOM_SHARED_H_
