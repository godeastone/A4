// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_H_
#define SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_H_

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
#include "services/catalog/public/mojom/catalog.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
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


namespace catalog {
namespace mojom {
class Catalog;
using CatalogPtr = mojo::InterfacePtr<Catalog>;
using CatalogPtrInfo = mojo::InterfacePtrInfo<Catalog>;
using ThreadSafeCatalogPtr =
    mojo::ThreadSafeInterfacePtr<Catalog>;
using CatalogRequest = mojo::InterfaceRequest<Catalog>;
using CatalogAssociatedPtr =
    mojo::AssociatedInterfacePtr<Catalog>;
using ThreadSafeCatalogAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Catalog>;
using CatalogAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Catalog>;
using CatalogAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Catalog>;

class Entry;
using EntryPtr = mojo::InlinedStructPtr<Entry>;


class CatalogProxy;

template <typename ImplRefTraits>
class CatalogStub;

class CatalogRequestValidator;
class CatalogResponseValidator;

class  Catalog
    : public CatalogInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = CatalogProxy;

  template <typename ImplRefTraits>
  using Stub_ = CatalogStub<ImplRefTraits>;

  using RequestValidator_ = CatalogRequestValidator;
  using ResponseValidator_ = CatalogResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetEntriesMinVersion = 0,
    kGetEntriesProvidingCapabilityMinVersion = 0,
  };
  virtual ~Catalog() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* out_entries);

  using GetEntriesCallback = base::OnceCallback<void(std::vector<EntryPtr>)>;
  virtual void GetEntries(const base::Optional<std::vector<std::string>>& names, GetEntriesCallback callback) = 0;


  using GetEntriesProvidingCapabilityCallback = base::OnceCallback<void(std::vector<EntryPtr>)>;
  virtual void GetEntriesProvidingCapability(const std::string& capability, GetEntriesProvidingCapabilityCallback callback) = 0;
};
class  CatalogInterceptorForTesting : public Catalog {
  virtual Catalog* GetForwardingInterface() = 0;
  void GetEntries(const base::Optional<std::vector<std::string>>& names, GetEntriesCallback callback) override;
  void GetEntriesProvidingCapability(const std::string& capability, GetEntriesProvidingCapabilityCallback callback) override;
};
class  CatalogAsyncWaiter {
 public:
  explicit CatalogAsyncWaiter(Catalog* proxy);
  ~CatalogAsyncWaiter();
  void GetEntries(
      const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* out_entries);
  void GetEntriesProvidingCapability(
      const std::string& capability, std::vector<EntryPtr>* out_entries);

 private:
  Catalog* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CatalogAsyncWaiter);
};

class  CatalogProxy
    : public Catalog {
 public:
  explicit CatalogProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* out_entries) final;
  void GetEntries(const base::Optional<std::vector<std::string>>& names, GetEntriesCallback callback) final;
  void GetEntriesProvidingCapability(const std::string& capability, GetEntriesProvidingCapabilityCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CatalogStubDispatch {
 public:
  static bool Accept(Catalog* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Catalog* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Catalog>>
class CatalogStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CatalogStub() {}
  ~CatalogStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CatalogStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CatalogStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CatalogRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CatalogResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  Entry {
 public:
  using DataView = EntryDataView;
  using Data_ = internal::Entry_Data;

  template <typename... Args>
  static EntryPtr New(Args&&... args) {
    return EntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EntryPtr From(const U& u) {
    return mojo::TypeConverter<EntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Entry>::Convert(*this);
  }


  Entry();

  Entry(
      const std::string& name,
      const std::string& display_name);

  ~Entry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EntryPtr>
  EntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Entry>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Entry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Entry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Entry_UnserializedMessageContext<
            UserType, Entry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Entry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Entry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Entry_UnserializedMessageContext<
            UserType, Entry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Entry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string name;
  std::string display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
EntryPtr Entry::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Entry>::value>::type*>
bool Entry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace catalog

namespace mojo {


template <>
struct  StructTraits<::catalog::mojom::Entry::DataView,
                                         ::catalog::mojom::EntryPtr> {
  static bool IsNull(const ::catalog::mojom::EntryPtr& input) { return !input; }
  static void SetToNull(::catalog::mojom::EntryPtr* output) { output->reset(); }

  static const decltype(::catalog::mojom::Entry::name)& name(
      const ::catalog::mojom::EntryPtr& input) {
    return input->name;
  }

  static const decltype(::catalog::mojom::Entry::display_name)& display_name(
      const ::catalog::mojom::EntryPtr& input) {
    return input->display_name;
  }

  static bool Read(::catalog::mojom::Entry::DataView input, ::catalog::mojom::EntryPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_H_