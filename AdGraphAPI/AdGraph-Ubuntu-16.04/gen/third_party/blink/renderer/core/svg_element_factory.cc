// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_factory.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/svg/svg_attribute_names.json5
//   ../../third_party/blink/renderer/core/svg/svg_tag_names.json5


#include "third_party/blink/renderer/core/svg_element_factory.h"

#include "third_party/blink/renderer/core/svg_names.h"
#include "third_party/blink/renderer/core/svg/svg_a_element.h"
#include "third_party/blink/renderer/core/svg/svg_animate_element.h"
#include "third_party/blink/renderer/core/svg/svg_animate_motion_element.h"
#include "third_party/blink/renderer/core/svg/svg_animate_transform_element.h"
#include "third_party/blink/renderer/core/svg/svg_circle_element.h"
#include "third_party/blink/renderer/core/svg/svg_clip_path_element.h"
#include "third_party/blink/renderer/core/svg/svg_defs_element.h"
#include "third_party/blink/renderer/core/svg/svg_desc_element.h"
#include "third_party/blink/renderer/core/svg/svg_discard_element.h"
#include "third_party/blink/renderer/core/svg/svg_ellipse_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_blend_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_color_matrix_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_component_transfer_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_composite_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_convolve_matrix_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_diffuse_lighting_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_displacement_map_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_distant_light_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_drop_shadow_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_flood_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_func_a_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_func_b_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_func_g_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_func_r_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_gaussian_blur_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_image_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_merge_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_merge_node_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_morphology_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_offset_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_point_light_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_specular_lighting_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_spot_light_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_tile_element.h"
#include "third_party/blink/renderer/core/svg/svg_fe_turbulence_element.h"
#include "third_party/blink/renderer/core/svg/svg_filter_element.h"
#include "third_party/blink/renderer/core/svg/svg_foreign_object_element.h"
#include "third_party/blink/renderer/core/svg/svg_g_element.h"
#include "third_party/blink/renderer/core/svg/svg_image_element.h"
#include "third_party/blink/renderer/core/svg/svg_line_element.h"
#include "third_party/blink/renderer/core/svg/svg_linear_gradient_element.h"
#include "third_party/blink/renderer/core/svg/svg_marker_element.h"
#include "third_party/blink/renderer/core/svg/svg_mask_element.h"
#include "third_party/blink/renderer/core/svg/svg_metadata_element.h"
#include "third_party/blink/renderer/core/svg/svg_mpath_element.h"
#include "third_party/blink/renderer/core/svg/svg_path_element.h"
#include "third_party/blink/renderer/core/svg/svg_pattern_element.h"
#include "third_party/blink/renderer/core/svg/svg_polygon_element.h"
#include "third_party/blink/renderer/core/svg/svg_polyline_element.h"
#include "third_party/blink/renderer/core/svg/svg_radial_gradient_element.h"
#include "third_party/blink/renderer/core/svg/svg_rect_element.h"
#include "third_party/blink/renderer/core/svg/svg_script_element.h"
#include "third_party/blink/renderer/core/svg/svg_set_element.h"
#include "third_party/blink/renderer/core/svg/svg_stop_element.h"
#include "third_party/blink/renderer/core/svg/svg_style_element.h"
#include "third_party/blink/renderer/core/svg/svg_svg_element.h"
#include "third_party/blink/renderer/core/svg/svg_switch_element.h"
#include "third_party/blink/renderer/core/svg/svg_symbol_element.h"
#include "third_party/blink/renderer/core/svg/svg_text_element.h"
#include "third_party/blink/renderer/core/svg/svg_text_path_element.h"
#include "third_party/blink/renderer/core/svg/svg_title_element.h"
#include "third_party/blink/renderer/core/svg/svg_tspan_element.h"
#include "third_party/blink/renderer/core/svg/svg_unknown_element.h"
#include "third_party/blink/renderer/core/svg/svg_use_element.h"
#include "third_party/blink/renderer/core/svg/svg_view_element.h"
#include "third_party/blink/renderer/core/svg/svg_unknown_element.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"

namespace blink {

typedef SVGElement* (*SVGConstructorFunction)(
    Document&,
    const CreateElementFlags);

typedef HashMap<AtomicString, SVGConstructorFunction> SVGFunctionMap;

static SVGFunctionMap* g_SVG_constructors = 0;

static SVGElement* SVGaConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGAElement::Create(document);
}
static SVGElement* SVGanimateConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::animateTag, document);
  return SVGAnimateElement::Create(document);
}
static SVGElement* SVGanimateMotionConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::animateMotionTag, document);
  return SVGAnimateMotionElement::Create(document);
}
static SVGElement* SVGanimateTransformConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::animateTransformTag, document);
  return SVGAnimateTransformElement::Create(document);
}
static SVGElement* SVGcircleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGCircleElement::Create(document);
}
static SVGElement* SVGclipPathConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGClipPathElement::Create(document);
}
static SVGElement* SVGdefsConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGDefsElement::Create(document);
}
static SVGElement* SVGdescConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGDescElement::Create(document);
}
static SVGElement* SVGdiscardConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::discardTag, document);
  return SVGDiscardElement::Create(document);
}
static SVGElement* SVGellipseConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGEllipseElement::Create(document);
}
static SVGElement* SVGfeBlendConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEBlendElement::Create(document);
}
static SVGElement* SVGfeColorMatrixConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEColorMatrixElement::Create(document);
}
static SVGElement* SVGfeComponentTransferConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEComponentTransferElement::Create(document);
}
static SVGElement* SVGfeCompositeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFECompositeElement::Create(document);
}
static SVGElement* SVGfeConvolveMatrixConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEConvolveMatrixElement::Create(document);
}
static SVGElement* SVGfeDiffuseLightingConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEDiffuseLightingElement::Create(document);
}
static SVGElement* SVGfeDisplacementMapConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEDisplacementMapElement::Create(document);
}
static SVGElement* SVGfeDistantLightConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEDistantLightElement::Create(document);
}
static SVGElement* SVGfeDropShadowConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEDropShadowElement::Create(document);
}
static SVGElement* SVGfeFloodConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEFloodElement::Create(document);
}
static SVGElement* SVGfeFuncAConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEFuncAElement::Create(document);
}
static SVGElement* SVGfeFuncBConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEFuncBElement::Create(document);
}
static SVGElement* SVGfeFuncGConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEFuncGElement::Create(document);
}
static SVGElement* SVGfeFuncRConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEFuncRElement::Create(document);
}
static SVGElement* SVGfeGaussianBlurConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEGaussianBlurElement::Create(document);
}
static SVGElement* SVGfeImageConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEImageElement::Create(document);
}
static SVGElement* SVGfeMergeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEMergeElement::Create(document);
}
static SVGElement* SVGfeMergeNodeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEMergeNodeElement::Create(document);
}
static SVGElement* SVGfeMorphologyConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEMorphologyElement::Create(document);
}
static SVGElement* SVGfeOffsetConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEOffsetElement::Create(document);
}
static SVGElement* SVGfePointLightConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFEPointLightElement::Create(document);
}
static SVGElement* SVGfeSpecularLightingConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFESpecularLightingElement::Create(document);
}
static SVGElement* SVGfeSpotLightConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFESpotLightElement::Create(document);
}
static SVGElement* SVGfeTileConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFETileElement::Create(document);
}
static SVGElement* SVGfeTurbulenceConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFETurbulenceElement::Create(document);
}
static SVGElement* SVGfilterConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGFilterElement::Create(document);
}
static SVGElement* SVGforeignObjectConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGForeignObjectElement::Create(document);
}
static SVGElement* SVGgConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGGElement::Create(document);
}
static SVGElement* SVGimageConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGImageElement::Create(document);
}
static SVGElement* SVGlineConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGLineElement::Create(document);
}
static SVGElement* SVGlinearGradientConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGLinearGradientElement::Create(document);
}
static SVGElement* SVGmpathConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::mpathTag, document);
  return SVGMPathElement::Create(document);
}
static SVGElement* SVGmarkerConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGMarkerElement::Create(document);
}
static SVGElement* SVGmaskConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGMaskElement::Create(document);
}
static SVGElement* SVGmetadataConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGMetadataElement::Create(document);
}
static SVGElement* SVGpathConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGPathElement::Create(document);
}
static SVGElement* SVGpatternConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGPatternElement::Create(document);
}
static SVGElement* SVGpolygonConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGPolygonElement::Create(document);
}
static SVGElement* SVGpolylineConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGPolylineElement::Create(document);
}
static SVGElement* SVGradialGradientConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGRadialGradientElement::Create(document);
}
static SVGElement* SVGrectConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGRectElement::Create(document);
}
static SVGElement* SVGsvgConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGSVGElement::Create(document);
}
static SVGElement* SVGsetConstructor(
    Document& document,
    const CreateElementFlags flags) {
  if (!RuntimeEnabledFeatures::SMILEnabled())
    return SVGUnknownElement::Create(SVGNames::setTag, document);
  return SVGSetElement::Create(document);
}
static SVGElement* SVGstopConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGStopElement::Create(document);
}
static SVGElement* SVGswitchConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGSwitchElement::Create(document);
}
static SVGElement* SVGsymbolConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGSymbolElement::Create(document);
}
static SVGElement* SVGtspanConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGTSpanElement::Create(document);
}
static SVGElement* SVGtextConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGTextElement::Create(document);
}
static SVGElement* SVGtextPathConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGTextPathElement::Create(document);
}
static SVGElement* SVGtitleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGTitleElement::Create(document);
}
static SVGElement* SVGuseConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGUseElement::Create(document);
}
static SVGElement* SVGviewConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGViewElement::Create(document);
}
static SVGElement* SVGscriptConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGScriptElement::Create(document, flags);
}
static SVGElement* SVGstyleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return SVGStyleElement::Create(document, flags);
}

struct CreateSVGFunctionMapData {
  const QualifiedName& tag;
  SVGConstructorFunction func;
};

static void createSVGFunctionMap() {
  DCHECK(!g_SVG_constructors);
  g_SVG_constructors = new SVGFunctionMap;
  // Empty array initializer lists are illegal [dcl.init.aggr] and will not
  // compile in MSVC. If tags list is empty, add check to skip this.
  static const CreateSVGFunctionMapData data[] = {
    { SVGNames::aTag, SVGaConstructor },
    { SVGNames::animateTag, SVGanimateConstructor },
    { SVGNames::animateMotionTag, SVGanimateMotionConstructor },
    { SVGNames::animateTransformTag, SVGanimateTransformConstructor },
    { SVGNames::circleTag, SVGcircleConstructor },
    { SVGNames::clipPathTag, SVGclipPathConstructor },
    { SVGNames::defsTag, SVGdefsConstructor },
    { SVGNames::descTag, SVGdescConstructor },
    { SVGNames::discardTag, SVGdiscardConstructor },
    { SVGNames::ellipseTag, SVGellipseConstructor },
    { SVGNames::feBlendTag, SVGfeBlendConstructor },
    { SVGNames::feColorMatrixTag, SVGfeColorMatrixConstructor },
    { SVGNames::feComponentTransferTag, SVGfeComponentTransferConstructor },
    { SVGNames::feCompositeTag, SVGfeCompositeConstructor },
    { SVGNames::feConvolveMatrixTag, SVGfeConvolveMatrixConstructor },
    { SVGNames::feDiffuseLightingTag, SVGfeDiffuseLightingConstructor },
    { SVGNames::feDisplacementMapTag, SVGfeDisplacementMapConstructor },
    { SVGNames::feDistantLightTag, SVGfeDistantLightConstructor },
    { SVGNames::feDropShadowTag, SVGfeDropShadowConstructor },
    { SVGNames::feFloodTag, SVGfeFloodConstructor },
    { SVGNames::feFuncATag, SVGfeFuncAConstructor },
    { SVGNames::feFuncBTag, SVGfeFuncBConstructor },
    { SVGNames::feFuncGTag, SVGfeFuncGConstructor },
    { SVGNames::feFuncRTag, SVGfeFuncRConstructor },
    { SVGNames::feGaussianBlurTag, SVGfeGaussianBlurConstructor },
    { SVGNames::feImageTag, SVGfeImageConstructor },
    { SVGNames::feMergeTag, SVGfeMergeConstructor },
    { SVGNames::feMergeNodeTag, SVGfeMergeNodeConstructor },
    { SVGNames::feMorphologyTag, SVGfeMorphologyConstructor },
    { SVGNames::feOffsetTag, SVGfeOffsetConstructor },
    { SVGNames::fePointLightTag, SVGfePointLightConstructor },
    { SVGNames::feSpecularLightingTag, SVGfeSpecularLightingConstructor },
    { SVGNames::feSpotLightTag, SVGfeSpotLightConstructor },
    { SVGNames::feTileTag, SVGfeTileConstructor },
    { SVGNames::feTurbulenceTag, SVGfeTurbulenceConstructor },
    { SVGNames::filterTag, SVGfilterConstructor },
    { SVGNames::foreignObjectTag, SVGforeignObjectConstructor },
    { SVGNames::gTag, SVGgConstructor },
    { SVGNames::imageTag, SVGimageConstructor },
    { SVGNames::lineTag, SVGlineConstructor },
    { SVGNames::linearGradientTag, SVGlinearGradientConstructor },
    { SVGNames::mpathTag, SVGmpathConstructor },
    { SVGNames::markerTag, SVGmarkerConstructor },
    { SVGNames::maskTag, SVGmaskConstructor },
    { SVGNames::metadataTag, SVGmetadataConstructor },
    { SVGNames::pathTag, SVGpathConstructor },
    { SVGNames::patternTag, SVGpatternConstructor },
    { SVGNames::polygonTag, SVGpolygonConstructor },
    { SVGNames::polylineTag, SVGpolylineConstructor },
    { SVGNames::radialGradientTag, SVGradialGradientConstructor },
    { SVGNames::rectTag, SVGrectConstructor },
    { SVGNames::svgTag, SVGsvgConstructor },
    { SVGNames::setTag, SVGsetConstructor },
    { SVGNames::stopTag, SVGstopConstructor },
    { SVGNames::switchTag, SVGswitchConstructor },
    { SVGNames::symbolTag, SVGsymbolConstructor },
    { SVGNames::tspanTag, SVGtspanConstructor },
    { SVGNames::textTag, SVGtextConstructor },
    { SVGNames::textPathTag, SVGtextPathConstructor },
    { SVGNames::titleTag, SVGtitleConstructor },
    { SVGNames::useTag, SVGuseConstructor },
    { SVGNames::viewTag, SVGviewConstructor },
    { SVGNames::scriptTag, SVGscriptConstructor },
    { SVGNames::styleTag, SVGstyleConstructor },
  };
  for (size_t i = 0; i < arraysize(data); i++)
    g_SVG_constructors->Set(data[i].tag.LocalName(), data[i].func);
}

SVGElement* SVGElementFactory::Create(
    const AtomicString& localName,
    Document& document,
    const CreateElementFlags flags) {
  if (!g_SVG_constructors)
    createSVGFunctionMap();
  if (SVGConstructorFunction function = g_SVG_constructors->at(localName))
    return function(document, flags);
  return nullptr;
}

}  // namespace blink
