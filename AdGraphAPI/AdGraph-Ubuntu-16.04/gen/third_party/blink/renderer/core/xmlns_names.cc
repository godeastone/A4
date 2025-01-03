// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/xml/xmlns_attribute_names.json5


#include "third_party/blink/renderer/core/xmlns_names.h"

#include <memory>

#include "third_party/blink/renderer/platform/wtf/static_constructors.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace XMLNSNames {

using namespace blink;

DEFINE_GLOBAL(AtomicString, xmlnsNamespaceURI);

// Attributes

void* AttrStorage[XMLNSAttrsCount * ((sizeof(QualifiedName) + sizeof(void *) - 1) / sizeof(void *))];

const QualifiedName& xmlnsAttr = reinterpret_cast<QualifiedName*>(&AttrStorage)[0];

std::unique_ptr<const QualifiedName*[]> getXMLNSAttrs() {
  auto attrs = std::make_unique<const QualifiedName*[]>(XMLNSAttrsCount);
  for (size_t i = 0; i < XMLNSAttrsCount; i++)
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
  AtomicString xmlnsNS("http://www.w3.org/2000/xmlns/");

  // Namespace
  new ((void*)&xmlnsNamespaceURI) AtomicString(xmlnsNS);
  static const NameEntry kNames[] = {
    { "xmlns", 171597, 5, 0, 1 },
  };

  size_t attr_i = 0;
  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<QualifiedName*>(&AttrStorage) + attr_i;
    QualifiedName::CreateStatic(address, stringImpl, xmlnsNS);
    attr_i++;
  }
  DCHECK_EQ(attr_i, XMLNSAttrsCount);
}

}  // namespace XMLNSNames
}  // namespace blink
