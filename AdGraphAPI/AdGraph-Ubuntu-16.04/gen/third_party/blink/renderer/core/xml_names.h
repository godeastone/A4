// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/xml/xml_attribute_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_XML_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_XML_NAMES_H_

#include "third_party/blink/renderer/core/dom/qualified_name.h"
#include <memory>

namespace blink {

class XMLQualifiedName : public QualifiedName { };

namespace XMLNames {

// Namespace
extern const WTF::AtomicString& xmlNamespaceURI;

// Tags

// Attributes
extern const blink::QualifiedName& langAttr;
extern const blink::QualifiedName& spaceAttr;


const unsigned XMLAttrsCount = 2;
std::unique_ptr<const QualifiedName*[]> getXMLAttrs();

void init();

}  // namespace XMLNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_XML_NAMES_H_
