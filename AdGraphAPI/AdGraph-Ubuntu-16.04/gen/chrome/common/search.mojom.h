// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SEARCH_MOJOM_H_
#define CHROME_COMMON_SEARCH_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "chrome/common/search.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "chrome/common/search/instant_types.h"
#include "chrome/common/search/ntp_logging_events.h"
#include "components/ntp_tiles/ntp_tile_impression.h"
#include "components/omnibox/common/omnibox_focus_state.h"


namespace chrome {
namespace mojom {
class EmbeddedSearchConnector;
using EmbeddedSearchConnectorPtr = mojo::InterfacePtr<EmbeddedSearchConnector>;
using EmbeddedSearchConnectorPtrInfo = mojo::InterfacePtrInfo<EmbeddedSearchConnector>;
using ThreadSafeEmbeddedSearchConnectorPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedSearchConnector>;
using EmbeddedSearchConnectorRequest = mojo::InterfaceRequest<EmbeddedSearchConnector>;
using EmbeddedSearchConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedSearchConnector>;
using ThreadSafeEmbeddedSearchConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedSearchConnector>;
using EmbeddedSearchConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedSearchConnector>;
using EmbeddedSearchConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedSearchConnector>;

class EmbeddedSearch;
using EmbeddedSearchPtr = mojo::InterfacePtr<EmbeddedSearch>;
using EmbeddedSearchPtrInfo = mojo::InterfacePtrInfo<EmbeddedSearch>;
using ThreadSafeEmbeddedSearchPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedSearch>;
using EmbeddedSearchRequest = mojo::InterfaceRequest<EmbeddedSearch>;
using EmbeddedSearchAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedSearch>;
using ThreadSafeEmbeddedSearchAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedSearch>;
using EmbeddedSearchAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedSearch>;
using EmbeddedSearchAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedSearch>;

class EmbeddedSearchClient;
using EmbeddedSearchClientPtr = mojo::InterfacePtr<EmbeddedSearchClient>;
using EmbeddedSearchClientPtrInfo = mojo::InterfacePtrInfo<EmbeddedSearchClient>;
using ThreadSafeEmbeddedSearchClientPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedSearchClient>;
using EmbeddedSearchClientRequest = mojo::InterfaceRequest<EmbeddedSearchClient>;
using EmbeddedSearchClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedSearchClient>;
using ThreadSafeEmbeddedSearchClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedSearchClient>;
using EmbeddedSearchClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedSearchClient>;
using EmbeddedSearchClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedSearchClient>;

class SearchBouncer;
using SearchBouncerPtr = mojo::InterfacePtr<SearchBouncer>;
using SearchBouncerPtrInfo = mojo::InterfacePtrInfo<SearchBouncer>;
using ThreadSafeSearchBouncerPtr =
    mojo::ThreadSafeInterfacePtr<SearchBouncer>;
using SearchBouncerRequest = mojo::InterfaceRequest<SearchBouncer>;
using SearchBouncerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SearchBouncer>;
using ThreadSafeSearchBouncerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SearchBouncer>;
using SearchBouncerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SearchBouncer>;
using SearchBouncerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SearchBouncer>;

using NTPTileImpression = mojo::native::NativeStruct;
using NTPTileImpressionPtr = mojo::native::NativeStructPtr;

using InstantMostVisitedItem = mojo::native::NativeStruct;
using InstantMostVisitedItemPtr = mojo::native::NativeStructPtr;

using ThemeBackgroundInfo = mojo::native::NativeStruct;
using ThemeBackgroundInfoPtr = mojo::native::NativeStructPtr;


class EmbeddedSearchConnectorProxy;

template <typename ImplRefTraits>
class EmbeddedSearchConnectorStub;

class EmbeddedSearchConnectorRequestValidator;

class  EmbeddedSearchConnector
    : public EmbeddedSearchConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EmbeddedSearchConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedSearchConnectorStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedSearchConnectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectMinVersion = 0,
  };
  virtual ~EmbeddedSearchConnector() {}

  virtual void Connect(EmbeddedSearchAssociatedRequest embedded_search, EmbeddedSearchClientAssociatedPtrInfo client) = 0;
};
class  EmbeddedSearchConnectorInterceptorForTesting : public EmbeddedSearchConnector {
  virtual EmbeddedSearchConnector* GetForwardingInterface() = 0;
  void Connect(EmbeddedSearchAssociatedRequest embedded_search, EmbeddedSearchClientAssociatedPtrInfo client) override;
};
class  EmbeddedSearchConnectorAsyncWaiter {
 public:
  explicit EmbeddedSearchConnectorAsyncWaiter(EmbeddedSearchConnector* proxy);
  ~EmbeddedSearchConnectorAsyncWaiter();

 private:
  EmbeddedSearchConnector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearchConnectorAsyncWaiter);
};

class EmbeddedSearchProxy;

template <typename ImplRefTraits>
class EmbeddedSearchStub;

class EmbeddedSearchRequestValidator;
class EmbeddedSearchResponseValidator;

class  EmbeddedSearch
    : public EmbeddedSearchInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EmbeddedSearchProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedSearchStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedSearchRequestValidator;
  using ResponseValidator_ = EmbeddedSearchResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFocusOmniboxMinVersion = 0,
    kDeleteMostVisitedItemMinVersion = 0,
    kUndoAllMostVisitedDeletionsMinVersion = 0,
    kUndoMostVisitedDeletionMinVersion = 0,
    kLogEventMinVersion = 0,
    kLogMostVisitedImpressionMinVersion = 0,
    kLogMostVisitedNavigationMinVersion = 0,
    kPasteAndOpenDropdownMinVersion = 0,
    kHistorySyncCheckMinVersion = 0,
    kChromeIdentityCheckMinVersion = 0,
  };
  virtual ~EmbeddedSearch() {}

  virtual void FocusOmnibox(int32_t page_seq_no, ::OmniboxFocusState state) = 0;

  virtual void DeleteMostVisitedItem(int32_t page_seq_no, const GURL& url) = 0;

  virtual void UndoAllMostVisitedDeletions(int32_t page_seq_no) = 0;

  virtual void UndoMostVisitedDeletion(int32_t page_seq_no, const GURL& url) = 0;

  virtual void LogEvent(int32_t page_seq_no, ::NTPLoggingEventType event, base::TimeDelta time) = 0;

  virtual void LogMostVisitedImpression(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) = 0;

  virtual void LogMostVisitedNavigation(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) = 0;

  virtual void PasteAndOpenDropdown(int32_t page_seq_no, const base::string16& text_to_be_pasted) = 0;


  using HistorySyncCheckCallback = base::OnceCallback<void(bool)>;
  virtual void HistorySyncCheck(int32_t page_seq_no, HistorySyncCheckCallback callback) = 0;


  using ChromeIdentityCheckCallback = base::OnceCallback<void(bool)>;
  virtual void ChromeIdentityCheck(int32_t page_seq_no, const base::string16& identity, ChromeIdentityCheckCallback callback) = 0;
};
class  EmbeddedSearchInterceptorForTesting : public EmbeddedSearch {
  virtual EmbeddedSearch* GetForwardingInterface() = 0;
  void FocusOmnibox(int32_t page_seq_no, ::OmniboxFocusState state) override;
  void DeleteMostVisitedItem(int32_t page_seq_no, const GURL& url) override;
  void UndoAllMostVisitedDeletions(int32_t page_seq_no) override;
  void UndoMostVisitedDeletion(int32_t page_seq_no, const GURL& url) override;
  void LogEvent(int32_t page_seq_no, ::NTPLoggingEventType event, base::TimeDelta time) override;
  void LogMostVisitedImpression(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) override;
  void LogMostVisitedNavigation(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) override;
  void PasteAndOpenDropdown(int32_t page_seq_no, const base::string16& text_to_be_pasted) override;
  void HistorySyncCheck(int32_t page_seq_no, HistorySyncCheckCallback callback) override;
  void ChromeIdentityCheck(int32_t page_seq_no, const base::string16& identity, ChromeIdentityCheckCallback callback) override;
};
class  EmbeddedSearchAsyncWaiter {
 public:
  explicit EmbeddedSearchAsyncWaiter(EmbeddedSearch* proxy);
  ~EmbeddedSearchAsyncWaiter();
  void HistorySyncCheck(
      int32_t page_seq_no, bool* out_sync_history);
  void ChromeIdentityCheck(
      int32_t page_seq_no, const base::string16& identity, bool* out_identity_match);

 private:
  EmbeddedSearch* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearchAsyncWaiter);
};

class EmbeddedSearchClientProxy;

template <typename ImplRefTraits>
class EmbeddedSearchClientStub;

class EmbeddedSearchClientRequestValidator;

class  EmbeddedSearchClient
    : public EmbeddedSearchClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EmbeddedSearchClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedSearchClientStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedSearchClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPageSequenceNumberMinVersion = 0,
    kFocusChangedMinVersion = 0,
    kMostVisitedChangedMinVersion = 0,
    kSetInputInProgressMinVersion = 0,
    kThemeChangedMinVersion = 0,
  };
  virtual ~EmbeddedSearchClient() {}

  virtual void SetPageSequenceNumber(int32_t page_seq_no) = 0;

  virtual void FocusChanged(::OmniboxFocusState new_focus_state, ::OmniboxFocusChangeReason reason) = 0;

  virtual void MostVisitedChanged(const std::vector<::InstantMostVisitedItem>& items) = 0;

  virtual void SetInputInProgress(bool input_in_progress) = 0;

  virtual void ThemeChanged(const ::ThemeBackgroundInfo& value) = 0;
};
class  EmbeddedSearchClientInterceptorForTesting : public EmbeddedSearchClient {
  virtual EmbeddedSearchClient* GetForwardingInterface() = 0;
  void SetPageSequenceNumber(int32_t page_seq_no) override;
  void FocusChanged(::OmniboxFocusState new_focus_state, ::OmniboxFocusChangeReason reason) override;
  void MostVisitedChanged(const std::vector<::InstantMostVisitedItem>& items) override;
  void SetInputInProgress(bool input_in_progress) override;
  void ThemeChanged(const ::ThemeBackgroundInfo& value) override;
};
class  EmbeddedSearchClientAsyncWaiter {
 public:
  explicit EmbeddedSearchClientAsyncWaiter(EmbeddedSearchClient* proxy);
  ~EmbeddedSearchClientAsyncWaiter();

 private:
  EmbeddedSearchClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearchClientAsyncWaiter);
};

class SearchBouncerProxy;

template <typename ImplRefTraits>
class SearchBouncerStub;

class SearchBouncerRequestValidator;

class  SearchBouncer
    : public SearchBouncerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SearchBouncerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SearchBouncerStub<ImplRefTraits>;

  using RequestValidator_ = SearchBouncerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetNewTabPageURLMinVersion = 0,
  };
  virtual ~SearchBouncer() {}

  virtual void SetNewTabPageURL(const GURL& new_tab_page_url) = 0;
};
class  SearchBouncerInterceptorForTesting : public SearchBouncer {
  virtual SearchBouncer* GetForwardingInterface() = 0;
  void SetNewTabPageURL(const GURL& new_tab_page_url) override;
};
class  SearchBouncerAsyncWaiter {
 public:
  explicit SearchBouncerAsyncWaiter(SearchBouncer* proxy);
  ~SearchBouncerAsyncWaiter();

 private:
  SearchBouncer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SearchBouncerAsyncWaiter);
};

class  EmbeddedSearchConnectorProxy
    : public EmbeddedSearchConnector {
 public:
  explicit EmbeddedSearchConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(EmbeddedSearchAssociatedRequest embedded_search, EmbeddedSearchClientAssociatedPtrInfo client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  EmbeddedSearchProxy
    : public EmbeddedSearch {
 public:
  explicit EmbeddedSearchProxy(mojo::MessageReceiverWithResponder* receiver);
  void FocusOmnibox(int32_t page_seq_no, ::OmniboxFocusState state) final;
  void DeleteMostVisitedItem(int32_t page_seq_no, const GURL& url) final;
  void UndoAllMostVisitedDeletions(int32_t page_seq_no) final;
  void UndoMostVisitedDeletion(int32_t page_seq_no, const GURL& url) final;
  void LogEvent(int32_t page_seq_no, ::NTPLoggingEventType event, base::TimeDelta time) final;
  void LogMostVisitedImpression(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) final;
  void LogMostVisitedNavigation(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) final;
  void PasteAndOpenDropdown(int32_t page_seq_no, const base::string16& text_to_be_pasted) final;
  void HistorySyncCheck(int32_t page_seq_no, HistorySyncCheckCallback callback) final;
  void ChromeIdentityCheck(int32_t page_seq_no, const base::string16& identity, ChromeIdentityCheckCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  EmbeddedSearchClientProxy
    : public EmbeddedSearchClient {
 public:
  explicit EmbeddedSearchClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPageSequenceNumber(int32_t page_seq_no) final;
  void FocusChanged(::OmniboxFocusState new_focus_state, ::OmniboxFocusChangeReason reason) final;
  void MostVisitedChanged(const std::vector<::InstantMostVisitedItem>& items) final;
  void SetInputInProgress(bool input_in_progress) final;
  void ThemeChanged(const ::ThemeBackgroundInfo& value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SearchBouncerProxy
    : public SearchBouncer {
 public:
  explicit SearchBouncerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetNewTabPageURL(const GURL& new_tab_page_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  EmbeddedSearchConnectorStubDispatch {
 public:
  static bool Accept(EmbeddedSearchConnector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedSearchConnector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedSearchConnector>>
class EmbeddedSearchConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedSearchConnectorStub() {}
  ~EmbeddedSearchConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EmbeddedSearchStubDispatch {
 public:
  static bool Accept(EmbeddedSearch* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedSearch* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedSearch>>
class EmbeddedSearchStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedSearchStub() {}
  ~EmbeddedSearchStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EmbeddedSearchClientStubDispatch {
 public:
  static bool Accept(EmbeddedSearchClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedSearchClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedSearchClient>>
class EmbeddedSearchClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedSearchClientStub() {}
  ~EmbeddedSearchClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedSearchClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SearchBouncerStubDispatch {
 public:
  static bool Accept(SearchBouncer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SearchBouncer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SearchBouncer>>
class SearchBouncerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SearchBouncerStub() {}
  ~SearchBouncerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SearchBouncerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SearchBouncerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EmbeddedSearchConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EmbeddedSearchRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EmbeddedSearchClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SearchBouncerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EmbeddedSearchResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};











}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_SEARCH_MOJOM_H_