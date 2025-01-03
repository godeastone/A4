// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/mathml_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/parser/mathml_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_

#include "third_party/blink/renderer/core/dom/qualified_name.h"
#include <memory>

namespace blink {

class MathMLQualifiedName : public QualifiedName { };

namespace MathMLNames {

// Namespace
extern const WTF::AtomicString& mathmlNamespaceURI;

// Tags
extern const blink::MathMLQualifiedName& annotation_xmlTag;
extern const blink::MathMLQualifiedName& malignmarkTag;
extern const blink::MathMLQualifiedName& mathTag;
extern const blink::MathMLQualifiedName& mglyphTag;
extern const blink::MathMLQualifiedName& miTag;
extern const blink::MathMLQualifiedName& mnTag;
extern const blink::MathMLQualifiedName& moTag;
extern const blink::MathMLQualifiedName& msTag;
extern const blink::MathMLQualifiedName& mtextTag;

// Attributes
extern const blink::QualifiedName& definitionURLAttr;
extern const blink::QualifiedName& encodingAttr;

const unsigned MathMLTagsCount = 9;
std::unique_ptr<const MathMLQualifiedName*[]> getMathMLTags();

const unsigned MathMLAttrsCount = 2;
std::unique_ptr<const QualifiedName*[]> getMathMLAttrs();

void init();

}  // namespace MathMLNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_
