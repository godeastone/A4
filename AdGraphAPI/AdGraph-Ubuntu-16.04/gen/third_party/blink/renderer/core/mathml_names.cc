// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/mathml_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/parser/mathml_tag_names.json5


#include "third_party/blink/renderer/core/mathml_names.h"

#include <memory>

#include "third_party/blink/renderer/platform/wtf/static_constructors.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace MathMLNames {

using namespace blink;

DEFINE_GLOBAL(AtomicString, mathmlNamespaceURI);

// Tags

void* TagStorage[MathMLTagsCount * ((sizeof(MathMLQualifiedName) + sizeof(void *) - 1) / sizeof(void *))];
const MathMLQualifiedName& annotation_xmlTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[0];
const MathMLQualifiedName& malignmarkTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[1];
const MathMLQualifiedName& mathTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[2];
const MathMLQualifiedName& mglyphTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[3];
const MathMLQualifiedName& miTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[4];
const MathMLQualifiedName& mnTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[5];
const MathMLQualifiedName& moTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[6];
const MathMLQualifiedName& msTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[7];
const MathMLQualifiedName& mtextTag = reinterpret_cast<MathMLQualifiedName*>(&TagStorage)[8];


std::unique_ptr<const MathMLQualifiedName*[]> getMathMLTags() {
  auto tags = std::make_unique<const MathMLQualifiedName*[]>(MathMLTagsCount);
  for (size_t i = 0; i < MathMLTagsCount; i++)
    tags[i] = reinterpret_cast<MathMLQualifiedName*>(&TagStorage) + i;
  return tags;
}

// Attributes

void* AttrStorage[MathMLAttrsCount * ((sizeof(QualifiedName) + sizeof(void *) - 1) / sizeof(void *))];

const QualifiedName& definitionURLAttr = reinterpret_cast<QualifiedName*>(&AttrStorage)[0];
const QualifiedName& encodingAttr = reinterpret_cast<QualifiedName*>(&AttrStorage)[1];

std::unique_ptr<const QualifiedName*[]> getMathMLAttrs() {
  auto attrs = std::make_unique<const QualifiedName*[]>(MathMLAttrsCount);
  for (size_t i = 0; i < MathMLAttrsCount; i++)
    attrs[i] = reinterpret_cast<QualifiedName*>(&AttrStorage) + i;
  return attrs;
}


void init() {
  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
    unsigned char isTag;
    unsigned char isAttr;
  };

  // Use placement new to initialize the globals.
  AtomicString mathmlNS("http://www.w3.org/1998/Math/MathML");

  // Namespace
  new ((void*)&mathmlNamespaceURI) AtomicString(mathmlNS);
  static const NameEntry kNames[] = {
    { "annotation-xml", 3437210, 14, 1, 0 },
    { "definitionURL", 5781331, 13, 0, 1 },
    { "encoding", 641915, 8, 0, 1 },
    { "malignmark", 8634190, 10, 1, 0 },
    { "math", 8182406, 4, 1, 0 },
    { "mglyph", 3316076, 6, 1, 0 },
    { "mi", 16514040, 2, 1, 0 },
    { "mn", 3612898, 2, 1, 0 },
    { "mo", 16096753, 2, 1, 0 },
    { "ms", 5264856, 2, 1, 0 },
    { "mtext", 16756693, 5, 1, 0 },
  };

  size_t tag_i = 0;
  size_t attr_i = 0;
  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    if (kNames[i].isTag) {
      void* address = reinterpret_cast<MathMLQualifiedName*>(&TagStorage) + tag_i;
      QualifiedName::CreateStatic(address, stringImpl, mathmlNS);
      tag_i++;
    }

    if (!kNames[i].isAttr)
      continue;
    void* address = reinterpret_cast<QualifiedName*>(&AttrStorage) + attr_i;
    QualifiedName::CreateStatic(address, stringImpl);
    attr_i++;
  }
  DCHECK_EQ(tag_i, MathMLTagsCount);
  DCHECK_EQ(attr_i, MathMLAttrsCount);
}

}  // namespace MathMLNames
}  // namespace blink
