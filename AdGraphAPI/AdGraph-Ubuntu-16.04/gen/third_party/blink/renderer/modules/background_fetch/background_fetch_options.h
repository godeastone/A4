// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BackgroundFetchOptions_h
#define BackgroundFetchOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/background_fetch/icon_definition.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BackgroundFetchOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BackgroundFetchOptions();
  virtual ~BackgroundFetchOptions();
  BackgroundFetchOptions(const BackgroundFetchOptions&);
  BackgroundFetchOptions& operator=(const BackgroundFetchOptions&);

  bool hasDownloadTotal() const { return has_download_total_; }
  uint64_t downloadTotal() const {
    DCHECK(has_download_total_);
    return download_total_;
  }
  inline void setDownloadTotal(uint64_t);

  bool hasIcons() const { return has_icons_; }
  const HeapVector<IconDefinition>& icons() const {
    DCHECK(has_icons_);
    return icons_;
  }
  void setIcons(const HeapVector<IconDefinition>&);

  bool hasTitle() const { return !title_.IsNull(); }
  const String& title() const {
    return title_;
  }
  inline void setTitle(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_download_total_ = false;
  bool has_icons_ = false;

  uint64_t download_total_;
  HeapVector<IconDefinition> icons_;
  String title_;

  friend class V8BackgroundFetchOptions;
};

void BackgroundFetchOptions::setDownloadTotal(uint64_t value) {
  download_total_ = value;
  has_download_total_ = true;
}

void BackgroundFetchOptions::setTitle(const String& value) {
  title_ = value;
}

}  // namespace blink

#endif  // BackgroundFetchOptions_h
