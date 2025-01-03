// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_factory.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/aria_properties.json5
//   ../../third_party/blink/renderer/core/html/html_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#include "third_party/blink/renderer/core/html_element_factory.h"

#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/core/html/canvas/html_canvas_element.h"
#include "third_party/blink/renderer/core/html/forms/html_button_element.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_element.h"
#include "third_party/blink/renderer/core/html/forms/html_field_set_element.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/core/html/forms/html_input_element.h"
#include "third_party/blink/renderer/core/html/forms/html_label_element.h"
#include "third_party/blink/renderer/core/html/forms/html_legend_element.h"
#include "third_party/blink/renderer/core/html/forms/html_opt_group_element.h"
#include "third_party/blink/renderer/core/html/forms/html_option_element.h"
#include "third_party/blink/renderer/core/html/forms/html_output_element.h"
#include "third_party/blink/renderer/core/html/forms/html_select_element.h"
#include "third_party/blink/renderer/core/html/forms/html_text_area_element.h"
#include "third_party/blink/renderer/core/html/html_anchor_element.h"
#include "third_party/blink/renderer/core/html/html_area_element.h"
#include "third_party/blink/renderer/core/html/html_base_element.h"
#include "third_party/blink/renderer/core/html/html_bdi_element.h"
#include "third_party/blink/renderer/core/html/html_body_element.h"
#include "third_party/blink/renderer/core/html/html_br_element.h"
#include "third_party/blink/renderer/core/html/html_content_element.h"
#include "third_party/blink/renderer/core/html/html_data_element.h"
#include "third_party/blink/renderer/core/html/html_details_element.h"
#include "third_party/blink/renderer/core/html/html_dialog_element.h"
#include "third_party/blink/renderer/core/html/html_directory_element.h"
#include "third_party/blink/renderer/core/html/html_div_element.h"
#include "third_party/blink/renderer/core/html/html_dlist_element.h"
#include "third_party/blink/renderer/core/html/html_element.h"
#include "third_party/blink/renderer/core/html/html_embed_element.h"
#include "third_party/blink/renderer/core/html/html_font_element.h"
#include "third_party/blink/renderer/core/html/html_frame_element.h"
#include "third_party/blink/renderer/core/html/html_frame_set_element.h"
#include "third_party/blink/renderer/core/html/html_head_element.h"
#include "third_party/blink/renderer/core/html/html_heading_element.h"
#include "third_party/blink/renderer/core/html/html_hr_element.h"
#include "third_party/blink/renderer/core/html/html_html_element.h"
#include "third_party/blink/renderer/core/html/html_iframe_element.h"
#include "third_party/blink/renderer/core/html/html_image_element.h"
#include "third_party/blink/renderer/core/html/html_li_element.h"
#include "third_party/blink/renderer/core/html/html_link_element.h"
#include "third_party/blink/renderer/core/html/html_map_element.h"
#include "third_party/blink/renderer/core/html/html_marquee_element.h"
#include "third_party/blink/renderer/core/html/html_menu_element.h"
#include "third_party/blink/renderer/core/html/html_meta_element.h"
#include "third_party/blink/renderer/core/html/html_meter_element.h"
#include "third_party/blink/renderer/core/html/html_mod_element.h"
#include "third_party/blink/renderer/core/html/html_no_embed_element.h"
#include "third_party/blink/renderer/core/html/html_no_script_element.h"
#include "third_party/blink/renderer/core/html/html_object_element.h"
#include "third_party/blink/renderer/core/html/html_olist_element.h"
#include "third_party/blink/renderer/core/html/html_paragraph_element.h"
#include "third_party/blink/renderer/core/html/html_param_element.h"
#include "third_party/blink/renderer/core/html/html_picture_element.h"
#include "third_party/blink/renderer/core/html/html_pre_element.h"
#include "third_party/blink/renderer/core/html/html_progress_element.h"
#include "third_party/blink/renderer/core/html/html_quote_element.h"
#include "third_party/blink/renderer/core/html/html_rt_element.h"
#include "third_party/blink/renderer/core/html/html_ruby_element.h"
#include "third_party/blink/renderer/core/html/html_script_element.h"
#include "third_party/blink/renderer/core/html/html_shadow_element.h"
#include "third_party/blink/renderer/core/html/html_slot_element.h"
#include "third_party/blink/renderer/core/html/html_source_element.h"
#include "third_party/blink/renderer/core/html/html_span_element.h"
#include "third_party/blink/renderer/core/html/html_style_element.h"
#include "third_party/blink/renderer/core/html/html_summary_element.h"
#include "third_party/blink/renderer/core/html/html_table_caption_element.h"
#include "third_party/blink/renderer/core/html/html_table_cell_element.h"
#include "third_party/blink/renderer/core/html/html_table_col_element.h"
#include "third_party/blink/renderer/core/html/html_table_element.h"
#include "third_party/blink/renderer/core/html/html_table_row_element.h"
#include "third_party/blink/renderer/core/html/html_table_section_element.h"
#include "third_party/blink/renderer/core/html/html_template_element.h"
#include "third_party/blink/renderer/core/html/html_time_element.h"
#include "third_party/blink/renderer/core/html/html_title_element.h"
#include "third_party/blink/renderer/core/html/html_ulist_element.h"
#include "third_party/blink/renderer/core/html/html_unknown_element.h"
#include "third_party/blink/renderer/core/html/html_wbr_element.h"
#include "third_party/blink/renderer/core/html/media/html_audio_element.h"
#include "third_party/blink/renderer/core/html/media/html_video_element.h"
#include "third_party/blink/renderer/core/html/track/html_track_element.h"
#include "third_party/blink/renderer/core/html/html_unknown_element.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"

namespace blink {

typedef HTMLElement* (*HTMLConstructorFunction)(
    Document&,
    const CreateElementFlags);

typedef HashMap<AtomicString, HTMLConstructorFunction> HTMLFunctionMap;

static HTMLFunctionMap* g_HTML_constructors = 0;

static HTMLElement* HTMLabbrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::abbrTag, document);
}
static HTMLElement* HTMLacronymConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::acronymTag, document);
}
static HTMLElement* HTMLaddressConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::addressTag, document);
}
static HTMLElement* HTMLarticleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::articleTag, document);
}
static HTMLElement* HTMLasideConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::asideTag, document);
}
static HTMLElement* HTMLbConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::bTag, document);
}
static HTMLElement* HTMLbasefontConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::basefontTag, document);
}
static HTMLElement* HTMLbdoConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::bdoTag, document);
}
static HTMLElement* HTMLbigConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::bigTag, document);
}
static HTMLElement* HTMLcenterConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::centerTag, document);
}
static HTMLElement* HTMLciteConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::citeTag, document);
}
static HTMLElement* HTMLcodeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::codeTag, document);
}
static HTMLElement* HTMLddConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::ddTag, document);
}
static HTMLElement* HTMLdfnConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::dfnTag, document);
}
static HTMLElement* HTMLdtConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::dtTag, document);
}
static HTMLElement* HTMLemConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::emTag, document);
}
static HTMLElement* HTMLfigcaptionConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::figcaptionTag, document);
}
static HTMLElement* HTMLfigureConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::figureTag, document);
}
static HTMLElement* HTMLfooterConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::footerTag, document);
}
static HTMLElement* HTMLheaderConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::headerTag, document);
}
static HTMLElement* HTMLhgroupConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::hgroupTag, document);
}
static HTMLElement* HTMLiConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::iTag, document);
}
static HTMLElement* HTMLkbdConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::kbdTag, document);
}
static HTMLElement* HTMLlayerConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::layerTag, document);
}
static HTMLElement* HTMLmainConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::mainTag, document);
}
static HTMLElement* HTMLmarkConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::markTag, document);
}
static HTMLElement* HTMLnavConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::navTag, document);
}
static HTMLElement* HTMLnobrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::nobrTag, document);
}
static HTMLElement* HTMLnoframesConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::noframesTag, document);
}
static HTMLElement* HTMLnolayerConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::nolayerTag, document);
}
static HTMLElement* HTMLplaintextConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::plaintextTag, document);
}
static HTMLElement* HTMLrbConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::rbTag, document);
}
static HTMLElement* HTMLrpConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::rpTag, document);
}
static HTMLElement* HTMLrtcConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::rtcTag, document);
}
static HTMLElement* HTMLsConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::sTag, document);
}
static HTMLElement* HTMLsampConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::sampTag, document);
}
static HTMLElement* HTMLsectionConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::sectionTag, document);
}
static HTMLElement* HTMLsmallConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::smallTag, document);
}
static HTMLElement* HTMLstrikeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::strikeTag, document);
}
static HTMLElement* HTMLstrongConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::strongTag, document);
}
static HTMLElement* HTMLsubConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::subTag, document);
}
static HTMLElement* HTMLsupConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::supTag, document);
}
static HTMLElement* HTMLttConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::ttTag, document);
}
static HTMLElement* HTMLuConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::uTag, document);
}
static HTMLElement* HTMLvarConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLElement::Create(HTMLNames::varTag, document);
}
static HTMLElement* HTMLaConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLAnchorElement::Create(document);
}
static HTMLElement* HTMLareaConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLAreaElement::Create(document);
}
static HTMLElement* HTMLaudioConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLAudioElement::Create(document);
}
static HTMLElement* HTMLbrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLBRElement::Create(document);
}
static HTMLElement* HTMLbaseConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLBaseElement::Create(document);
}
static HTMLElement* HTMLbodyConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLBodyElement::Create(document);
}
static HTMLElement* HTMLbuttonConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLButtonElement::Create(document);
}
static HTMLElement* HTMLcanvasConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLCanvasElement::Create(document);
}
static HTMLElement* HTMLcontentConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLContentElement::Create(document);
}
static HTMLElement* HTMLdlConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDListElement::Create(document);
}
static HTMLElement* HTMLdataConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDataElement::Create(document);
}
static HTMLElement* HTMLdatalistConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDataListElement::Create(document);
}
static HTMLElement* HTMLdetailsConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDetailsElement::Create(document);
}
static HTMLElement* HTMLdialogConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDialogElement::Create(document);
}
static HTMLElement* HTMLdirConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDirectoryElement::Create(document);
}
static HTMLElement* HTMLdivConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLDivElement::Create(document);
}
static HTMLElement* HTMLfieldsetConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLFieldSetElement::Create(document);
}
static HTMLElement* HTMLfontConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLFontElement::Create(document);
}
static HTMLElement* HTMLformConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLFormElement::Create(document);
}
static HTMLElement* HTMLframeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLFrameElement::Create(document);
}
static HTMLElement* HTMLframesetConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLFrameSetElement::Create(document);
}
static HTMLElement* HTMLhrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHRElement::Create(document);
}
static HTMLElement* HTMLheadConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadElement::Create(document);
}
static HTMLElement* HTMLh1Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h1Tag, document);
}
static HTMLElement* HTMLh2Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h2Tag, document);
}
static HTMLElement* HTMLh3Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h3Tag, document);
}
static HTMLElement* HTMLh4Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h4Tag, document);
}
static HTMLElement* HTMLh5Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h5Tag, document);
}
static HTMLElement* HTMLh6Constructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHeadingElement::Create(HTMLNames::h6Tag, document);
}
static HTMLElement* HTMLhtmlConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLHtmlElement::Create(document);
}
static HTMLElement* HTMLiframeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLIFrameElement::Create(document);
}
static HTMLElement* HTMLliConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLLIElement::Create(document);
}
static HTMLElement* HTMLlabelConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLLabelElement::Create(document);
}
static HTMLElement* HTMLlegendConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLLegendElement::Create(document);
}
static HTMLElement* HTMLmapConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLMapElement::Create(document);
}
static HTMLElement* HTMLmarqueeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLMarqueeElement::Create(document);
}
static HTMLElement* HTMLmenuConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLMenuElement::Create(document);
}
static HTMLElement* HTMLmetaConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLMetaElement::Create(document);
}
static HTMLElement* HTMLmeterConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLMeterElement::Create(document);
}
static HTMLElement* HTMLdelConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLModElement::Create(HTMLNames::delTag, document);
}
static HTMLElement* HTMLinsConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLModElement::Create(HTMLNames::insTag, document);
}
static HTMLElement* HTMLolConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLOListElement::Create(document);
}
static HTMLElement* HTMLoptgroupConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLOptGroupElement::Create(document);
}
static HTMLElement* HTMLoptionConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLOptionElement::Create(document);
}
static HTMLElement* HTMLoutputConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLOutputElement::Create(document);
}
static HTMLElement* HTMLpConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLParagraphElement::Create(document);
}
static HTMLElement* HTMLparamConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLParamElement::Create(document);
}
static HTMLElement* HTMLpictureConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLPictureElement::Create(document);
}
static HTMLElement* HTMLpreConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLPreElement::Create(HTMLNames::preTag, document);
}
static HTMLElement* HTMLlistingConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLPreElement::Create(HTMLNames::listingTag, document);
}
static HTMLElement* HTMLxmpConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLPreElement::Create(HTMLNames::xmpTag, document);
}
static HTMLElement* HTMLprogressConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLProgressElement::Create(document);
}
static HTMLElement* HTMLblockquoteConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLQuoteElement::Create(HTMLNames::blockquoteTag, document);
}
static HTMLElement* HTMLqConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLQuoteElement::Create(HTMLNames::qTag, document);
}
static HTMLElement* HTMLselectConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLSelectElement::Create(document);
}
static HTMLElement* HTMLshadowConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLShadowElement::Create(document);
}
static HTMLElement* HTMLslotConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLSlotElement::Create(document);
}
static HTMLElement* HTMLsourceConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLSourceElement::Create(document);
}
static HTMLElement* HTMLspanConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLSpanElement::Create(document);
}
static HTMLElement* HTMLcaptionConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableCaptionElement::Create(document);
}
static HTMLElement* HTMLtdConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableCellElement::Create(HTMLNames::tdTag, document);
}
static HTMLElement* HTMLthConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableCellElement::Create(HTMLNames::thTag, document);
}
static HTMLElement* HTMLcolConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableColElement::Create(HTMLNames::colTag, document);
}
static HTMLElement* HTMLcolgroupConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableColElement::Create(HTMLNames::colgroupTag, document);
}
static HTMLElement* HTMLtableConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableElement::Create(document);
}
static HTMLElement* HTMLtrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableRowElement::Create(document);
}
static HTMLElement* HTMLtbodyConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableSectionElement::Create(HTMLNames::tbodyTag, document);
}
static HTMLElement* HTMLtfootConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableSectionElement::Create(HTMLNames::tfootTag, document);
}
static HTMLElement* HTMLtheadConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTableSectionElement::Create(HTMLNames::theadTag, document);
}
static HTMLElement* HTMLtemplateConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTemplateElement::Create(document);
}
static HTMLElement* HTMLtextareaConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTextAreaElement::Create(document);
}
static HTMLElement* HTMLtimeConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTimeElement::Create(document);
}
static HTMLElement* HTMLtitleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTitleElement::Create(document);
}
static HTMLElement* HTMLtrackConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLTrackElement::Create(document);
}
static HTMLElement* HTMLulConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUListElement::Create(document);
}
static HTMLElement* HTMLappletConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUnknownElement::Create(HTMLNames::appletTag, document);
}
static HTMLElement* HTMLbgsoundConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUnknownElement::Create(HTMLNames::bgsoundTag, document);
}
static HTMLElement* HTMLcommandConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUnknownElement::Create(HTMLNames::commandTag, document);
}
static HTMLElement* HTMLimageConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUnknownElement::Create(HTMLNames::imageTag, document);
}
static HTMLElement* HTMLkeygenConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLUnknownElement::Create(HTMLNames::keygenTag, document);
}
static HTMLElement* HTMLvideoConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLVideoElement::Create(document);
}
static HTMLElement* HTMLembedConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLEmbedElement::Create(document, flags);
}
static HTMLElement* HTMLimgConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLImageElement::Create(document, flags);
}
static HTMLElement* HTMLinputConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLInputElement::Create(document, flags);
}
static HTMLElement* HTMLlinkConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLLinkElement::Create(document, flags);
}
static HTMLElement* HTMLobjectConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLObjectElement::Create(document, flags);
}
static HTMLElement* HTMLscriptConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLScriptElement::Create(document, flags);
}
static HTMLElement* HTMLstyleConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLStyleElement::Create(document, flags);
}
static HTMLElement* HTMLbdiConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLBDIElement::Create(document);
}
static HTMLElement* HTMLnoembedConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLNoEmbedElement::Create(document);
}
static HTMLElement* HTMLnoscriptConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLNoScriptElement::Create(document);
}
static HTMLElement* HTMLrtConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLRTElement::Create(document);
}
static HTMLElement* HTMLrubyConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLRubyElement::Create(document);
}
static HTMLElement* HTMLsummaryConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLSummaryElement::Create(document);
}
static HTMLElement* HTMLwbrConstructor(
    Document& document,
    const CreateElementFlags flags) {
  return HTMLWBRElement::Create(document);
}

struct CreateHTMLFunctionMapData {
  const QualifiedName& tag;
  HTMLConstructorFunction func;
};

static void createHTMLFunctionMap() {
  DCHECK(!g_HTML_constructors);
  g_HTML_constructors = new HTMLFunctionMap;
  // Empty array initializer lists are illegal [dcl.init.aggr] and will not
  // compile in MSVC. If tags list is empty, add check to skip this.
  static const CreateHTMLFunctionMapData data[] = {
    { HTMLNames::abbrTag, HTMLabbrConstructor },
    { HTMLNames::acronymTag, HTMLacronymConstructor },
    { HTMLNames::addressTag, HTMLaddressConstructor },
    { HTMLNames::articleTag, HTMLarticleConstructor },
    { HTMLNames::asideTag, HTMLasideConstructor },
    { HTMLNames::bTag, HTMLbConstructor },
    { HTMLNames::basefontTag, HTMLbasefontConstructor },
    { HTMLNames::bdoTag, HTMLbdoConstructor },
    { HTMLNames::bigTag, HTMLbigConstructor },
    { HTMLNames::centerTag, HTMLcenterConstructor },
    { HTMLNames::citeTag, HTMLciteConstructor },
    { HTMLNames::codeTag, HTMLcodeConstructor },
    { HTMLNames::ddTag, HTMLddConstructor },
    { HTMLNames::dfnTag, HTMLdfnConstructor },
    { HTMLNames::dtTag, HTMLdtConstructor },
    { HTMLNames::emTag, HTMLemConstructor },
    { HTMLNames::figcaptionTag, HTMLfigcaptionConstructor },
    { HTMLNames::figureTag, HTMLfigureConstructor },
    { HTMLNames::footerTag, HTMLfooterConstructor },
    { HTMLNames::headerTag, HTMLheaderConstructor },
    { HTMLNames::hgroupTag, HTMLhgroupConstructor },
    { HTMLNames::iTag, HTMLiConstructor },
    { HTMLNames::kbdTag, HTMLkbdConstructor },
    { HTMLNames::layerTag, HTMLlayerConstructor },
    { HTMLNames::mainTag, HTMLmainConstructor },
    { HTMLNames::markTag, HTMLmarkConstructor },
    { HTMLNames::navTag, HTMLnavConstructor },
    { HTMLNames::nobrTag, HTMLnobrConstructor },
    { HTMLNames::noframesTag, HTMLnoframesConstructor },
    { HTMLNames::nolayerTag, HTMLnolayerConstructor },
    { HTMLNames::plaintextTag, HTMLplaintextConstructor },
    { HTMLNames::rbTag, HTMLrbConstructor },
    { HTMLNames::rpTag, HTMLrpConstructor },
    { HTMLNames::rtcTag, HTMLrtcConstructor },
    { HTMLNames::sTag, HTMLsConstructor },
    { HTMLNames::sampTag, HTMLsampConstructor },
    { HTMLNames::sectionTag, HTMLsectionConstructor },
    { HTMLNames::smallTag, HTMLsmallConstructor },
    { HTMLNames::strikeTag, HTMLstrikeConstructor },
    { HTMLNames::strongTag, HTMLstrongConstructor },
    { HTMLNames::subTag, HTMLsubConstructor },
    { HTMLNames::supTag, HTMLsupConstructor },
    { HTMLNames::ttTag, HTMLttConstructor },
    { HTMLNames::uTag, HTMLuConstructor },
    { HTMLNames::varTag, HTMLvarConstructor },
    { HTMLNames::aTag, HTMLaConstructor },
    { HTMLNames::areaTag, HTMLareaConstructor },
    { HTMLNames::audioTag, HTMLaudioConstructor },
    { HTMLNames::brTag, HTMLbrConstructor },
    { HTMLNames::baseTag, HTMLbaseConstructor },
    { HTMLNames::bodyTag, HTMLbodyConstructor },
    { HTMLNames::buttonTag, HTMLbuttonConstructor },
    { HTMLNames::canvasTag, HTMLcanvasConstructor },
    { HTMLNames::contentTag, HTMLcontentConstructor },
    { HTMLNames::dlTag, HTMLdlConstructor },
    { HTMLNames::dataTag, HTMLdataConstructor },
    { HTMLNames::datalistTag, HTMLdatalistConstructor },
    { HTMLNames::detailsTag, HTMLdetailsConstructor },
    { HTMLNames::dialogTag, HTMLdialogConstructor },
    { HTMLNames::dirTag, HTMLdirConstructor },
    { HTMLNames::divTag, HTMLdivConstructor },
    { HTMLNames::fieldsetTag, HTMLfieldsetConstructor },
    { HTMLNames::fontTag, HTMLfontConstructor },
    { HTMLNames::formTag, HTMLformConstructor },
    { HTMLNames::frameTag, HTMLframeConstructor },
    { HTMLNames::framesetTag, HTMLframesetConstructor },
    { HTMLNames::hrTag, HTMLhrConstructor },
    { HTMLNames::headTag, HTMLheadConstructor },
    { HTMLNames::h1Tag, HTMLh1Constructor },
    { HTMLNames::h2Tag, HTMLh2Constructor },
    { HTMLNames::h3Tag, HTMLh3Constructor },
    { HTMLNames::h4Tag, HTMLh4Constructor },
    { HTMLNames::h5Tag, HTMLh5Constructor },
    { HTMLNames::h6Tag, HTMLh6Constructor },
    { HTMLNames::htmlTag, HTMLhtmlConstructor },
    { HTMLNames::iframeTag, HTMLiframeConstructor },
    { HTMLNames::liTag, HTMLliConstructor },
    { HTMLNames::labelTag, HTMLlabelConstructor },
    { HTMLNames::legendTag, HTMLlegendConstructor },
    { HTMLNames::mapTag, HTMLmapConstructor },
    { HTMLNames::marqueeTag, HTMLmarqueeConstructor },
    { HTMLNames::menuTag, HTMLmenuConstructor },
    { HTMLNames::metaTag, HTMLmetaConstructor },
    { HTMLNames::meterTag, HTMLmeterConstructor },
    { HTMLNames::delTag, HTMLdelConstructor },
    { HTMLNames::insTag, HTMLinsConstructor },
    { HTMLNames::olTag, HTMLolConstructor },
    { HTMLNames::optgroupTag, HTMLoptgroupConstructor },
    { HTMLNames::optionTag, HTMLoptionConstructor },
    { HTMLNames::outputTag, HTMLoutputConstructor },
    { HTMLNames::pTag, HTMLpConstructor },
    { HTMLNames::paramTag, HTMLparamConstructor },
    { HTMLNames::pictureTag, HTMLpictureConstructor },
    { HTMLNames::preTag, HTMLpreConstructor },
    { HTMLNames::listingTag, HTMLlistingConstructor },
    { HTMLNames::xmpTag, HTMLxmpConstructor },
    { HTMLNames::progressTag, HTMLprogressConstructor },
    { HTMLNames::blockquoteTag, HTMLblockquoteConstructor },
    { HTMLNames::qTag, HTMLqConstructor },
    { HTMLNames::selectTag, HTMLselectConstructor },
    { HTMLNames::shadowTag, HTMLshadowConstructor },
    { HTMLNames::slotTag, HTMLslotConstructor },
    { HTMLNames::sourceTag, HTMLsourceConstructor },
    { HTMLNames::spanTag, HTMLspanConstructor },
    { HTMLNames::captionTag, HTMLcaptionConstructor },
    { HTMLNames::tdTag, HTMLtdConstructor },
    { HTMLNames::thTag, HTMLthConstructor },
    { HTMLNames::colTag, HTMLcolConstructor },
    { HTMLNames::colgroupTag, HTMLcolgroupConstructor },
    { HTMLNames::tableTag, HTMLtableConstructor },
    { HTMLNames::trTag, HTMLtrConstructor },
    { HTMLNames::tbodyTag, HTMLtbodyConstructor },
    { HTMLNames::tfootTag, HTMLtfootConstructor },
    { HTMLNames::theadTag, HTMLtheadConstructor },
    { HTMLNames::templateTag, HTMLtemplateConstructor },
    { HTMLNames::textareaTag, HTMLtextareaConstructor },
    { HTMLNames::timeTag, HTMLtimeConstructor },
    { HTMLNames::titleTag, HTMLtitleConstructor },
    { HTMLNames::trackTag, HTMLtrackConstructor },
    { HTMLNames::ulTag, HTMLulConstructor },
    { HTMLNames::appletTag, HTMLappletConstructor },
    { HTMLNames::bgsoundTag, HTMLbgsoundConstructor },
    { HTMLNames::commandTag, HTMLcommandConstructor },
    { HTMLNames::imageTag, HTMLimageConstructor },
    { HTMLNames::keygenTag, HTMLkeygenConstructor },
    { HTMLNames::videoTag, HTMLvideoConstructor },
    { HTMLNames::embedTag, HTMLembedConstructor },
    { HTMLNames::imgTag, HTMLimgConstructor },
    { HTMLNames::inputTag, HTMLinputConstructor },
    { HTMLNames::linkTag, HTMLlinkConstructor },
    { HTMLNames::objectTag, HTMLobjectConstructor },
    { HTMLNames::scriptTag, HTMLscriptConstructor },
    { HTMLNames::styleTag, HTMLstyleConstructor },
    { HTMLNames::bdiTag, HTMLbdiConstructor },
    { HTMLNames::noembedTag, HTMLnoembedConstructor },
    { HTMLNames::noscriptTag, HTMLnoscriptConstructor },
    { HTMLNames::rtTag, HTMLrtConstructor },
    { HTMLNames::rubyTag, HTMLrubyConstructor },
    { HTMLNames::summaryTag, HTMLsummaryConstructor },
    { HTMLNames::wbrTag, HTMLwbrConstructor },
  };
  for (size_t i = 0; i < arraysize(data); i++)
    g_HTML_constructors->Set(data[i].tag.LocalName(), data[i].func);
}

HTMLElement* HTMLElementFactory::Create(
    const AtomicString& localName,
    Document& document,
    const CreateElementFlags flags) {
  if (!g_HTML_constructors)
    createHTMLFunctionMap();
  if (HTMLConstructorFunction function = g_HTML_constructors->at(localName))
    return function(document, flags);
  return nullptr;
}

}  // namespace blink
