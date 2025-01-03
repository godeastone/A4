// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_playback_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_attr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_bar_prop.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_before_unload_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cdata_section.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_character_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_comment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_composition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cross_origin_setter_info.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_condition_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_font_face_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_grouping_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_import_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframe_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframes_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyword_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_invert.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_max.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_min.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_negate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_product.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_sum.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_matrix_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_media_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_namespace_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_page_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_perspective.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_position_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_scale.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_y.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_supports_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_translate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unparsed_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_viewport_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_element_registry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_implementation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_parser.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_drag_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_error_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_external.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_focus_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set_load_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_hash_change_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_headers.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_history.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_all_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_anchor_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_area_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_audio_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_base_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_body_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_br_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_button_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_content_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_data_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_data_list_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_details_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_dialog_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_directory_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_div_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_dlist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_embed_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_field_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_font_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_controls_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_frame_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_frame_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_head_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_heading_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_hr_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_iframe_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_input_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_label_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_legend_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_li_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_link_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_map_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_marquee_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_menu_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_meta_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_meter_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_mod_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_object_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_olist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_opt_group_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_option_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_options_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_output_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_paragraph_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_param_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_picture_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_pre_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_progress_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_quote_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_select_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_shadow_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_slot_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_source_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_span_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_style_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_caption_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_cell_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_col_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_row_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_section_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_template_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_text_area_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_time_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_title_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_track_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_ulist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_unknown_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_deadline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_request_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_request_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_device_capabilities.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_error.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_channel.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_request_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watcher.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_record.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_named_node_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_filter.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_iterator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_page_transition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_event_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_long_task_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_paint_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pop_state_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_processing_instruction.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_reporting_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_resize_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_resize_observer_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_screen.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_to_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_media.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_a_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_motion_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_transform_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_boolean.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_integer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_string.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_transform_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animation_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_circle_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_clip_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_component_transfer_function_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_defs_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_desc_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_discard_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_ellipse_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_blend_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_color_matrix_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_component_transfer_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_composite_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_convolve_matrix_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_diffuse_lighting_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_displacement_map_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_distant_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_drop_shadow_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_flood_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_a_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_b_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_g_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_r_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_gaussian_blur_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_merge_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_merge_node_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_morphology_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_offset_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_point_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_specular_lighting_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_spot_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_tile_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_turbulence_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_filter_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_foreign_object_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_g_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_geometry_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_graphics_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_line_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_linear_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_marker_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_mask_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_metadata_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_mpath_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_pattern_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_polygon_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_polyline_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_radial_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_stop_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_style_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_switch_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_symbol_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_content_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_positioning_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_title_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_tspan_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_unit_types.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_use_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_view_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task_attribution_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_cue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_cue_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_time_ranges.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_track_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_tree_walker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_visual_viewport.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_cue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_region.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_wheel_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_serializer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_evaluator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xslt_processor.h"
#include "third_party/blink/renderer/core/dom/global_event_handlers.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/dom_window_event_handlers.h"
#include "third_party/blink/renderer/core/frame/dom_window_timers.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/imagebitmap/image_bitmap_factories.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/core/timing/dom_window_performance.h"
#include "third_party/blink/renderer/core/window_core_constructors.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo V8Window::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Window::domTemplate,
    V8Window::InstallConditionalFeatures,
    "Window",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMWindow.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMWindow::wrapper_type_info_ = V8Window::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMWindow>::value,
    "DOMWindow inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMWindow::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMWindow is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMWindowV8Internal {

static void windowAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->window()), impl);
}

static void selfAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->self()), impl);
}

static void documentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueFast(info, WTF::GetPtr(impl->document()), impl);
}

static void originAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void originAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "origin");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setName(cppValue);
}

static void locationAttributeSetter(v8::Local<v8::Value> v8Value, const V8CrossOriginSetterInfo& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => location.href
  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Window", "location");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "location")).ToLocal(&target))
    return;
  if (!target->IsObject()) {
    exceptionState.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(isolate->GetCurrentContext(), V8AtomicString(isolate, "href"), v8Value).To(&result))
    return;
  if (!result)
    return;
}

static void historyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  History* cppValue(WTF::GetPtr(impl->history()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#history")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void locationbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->locationbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#locationbar")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void locationbarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "locationbar");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void menubarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->menubar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#menubar")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void menubarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "menubar");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void personalbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->personalbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#personalbar")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void personalbarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "personalbar");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void scrollbarsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->scrollbars()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#scrollbars")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void scrollbarsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "scrollbars");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void statusbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->statusbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#statusbar")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void statusbarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "statusbar");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void toolbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  BarProp* cppValue(WTF::GetPtr(impl->toolbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#toolbar")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void toolbarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "toolbar");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->status(), info.GetIsolate());
}

static void statusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setStatus(cppValue);
}

static void closedAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueBool(info, impl->closed());
}

static void framesAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->frames()), impl);
}

static void lengthAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void topAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->top()), impl);
}

static void openerAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->opener()), impl);
}

static void parentAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->parent()), impl);
}

static void navigatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Navigator* cppValue(WTF::GetPtr(impl->navigator()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#navigator")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void applicationCacheAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ApplicationCache* cppValue(WTF::GetPtr(impl->applicationCache()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#applicationCache")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void customElementsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  CustomElementRegistry* cppValue(impl->customElements(scriptState));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#customElements")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void externalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  External* cppValue(WTF::GetPtr(impl->external()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#external")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void externalAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "external");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void screenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Screen* cppValue(WTF::GetPtr(impl->screen()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#screen")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void screenAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "screen");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void innerWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->innerWidth());
}

static void innerWidthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "innerWidth");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void innerHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->innerHeight());
}

static void innerHeightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "innerHeight");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void scrollXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->scrollX());
}

static void scrollXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "scrollX");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void pageXOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->pageXOffset());
}

static void pageXOffsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "pageXOffset");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void scrollYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->scrollY());
}

static void scrollYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "scrollY");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void pageYOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->pageYOffset());
}

static void pageYOffsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "pageYOffset");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void visualViewportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  DOMVisualViewport* cppValue(WTF::GetPtr(impl->visualViewport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#visualViewport")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void visualViewportAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "visualViewport");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void screenXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenX());
}

static void screenXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "screenX");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void screenYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenY());
}

static void screenYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "screenY");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void outerWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->outerWidth());
}

static void outerWidthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "outerWidth");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void outerHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->outerHeight());
}

static void outerHeightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "outerHeight");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void devicePixelRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->devicePixelRatio());
}

static void devicePixelRatioAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "devicePixelRatio");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void onorientationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onorientationchange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onorientationchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnorientationchange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void orientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->orientation());
}

static void clientInformationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Navigator* cppValue(WTF::GetPtr(impl->clientInformation()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#clientInformation")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void clientInformationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "clientInformation");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void eventAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "event");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void offscreenBufferingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueBool(info, impl->offscreenBuffering());
}

static void offscreenBufferingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "offscreenBuffering");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void screenLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenLeft());
}

static void screenLeftAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "screenLeft");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void screenTopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenTop());
}

static void screenTopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "screenTop");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void defaultStatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->defaultStatus(), info.GetIsolate());
}

static void defaultStatusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setDefaultStatus(cppValue);
}

static void defaultstatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->defaultStatus(), info.GetIsolate());
}

static void defaultstatusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setDefaultStatus(cppValue);
}

static void styleMediaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  StyleMedia* cppValue(WTF::GetPtr(impl->styleMedia()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#styleMedia")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void onanimationendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onanimationend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onanimationendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onanimationiterationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onanimationiteration()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onanimationiterationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationiteration(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onanimationstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onanimationstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onanimationstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsearchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onsearch()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsearchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnsearch(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontransitionendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->ontransitionend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontransitionendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOntransitionend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwebkitanimationendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onwebkitanimationend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwebkitanimationendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwebkitanimationiterationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onwebkitanimationiteration()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwebkitanimationiterationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationiteration(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwebkitanimationstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onwebkitanimationstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwebkitanimationstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwebkittransitionendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(WTF::GetPtr(impl->onwebkittransitionend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwebkittransitionendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkittransitionend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void isSecureContextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  V8SetReturnValueBool(info, impl->isSecureContext());
}

static void onabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onabort(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onabortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnabort(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onblur(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onblurAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnblur(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oncancel(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncancelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncancel(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncanplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oncanplay(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncanplayAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplay(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncanplaythroughAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oncanplaythrough(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncanplaythroughAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplaythrough(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onchange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnchange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onclick(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onclickAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclick(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onclose(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncloseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclose(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncontextmenuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oncontextmenu(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncontextmenuAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncontextmenu(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oncuechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oncuechange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncuechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncuechange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondblclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondblclick(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondblclickAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndblclick(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondrag(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrag(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondragend(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragend(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondragenter(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragenterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragenter(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondragleave(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragleaveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragleave(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondragover(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragoverAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragover(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondragstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondragstart(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondragstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragstart(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondropAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondrop(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondropAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrop(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondurationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ondurationchange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondurationchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndurationchange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onemptiedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onemptied(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onemptiedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnemptied(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onended(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onendedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnended(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onerror(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnerror(*impl, V8EventListenerHelper::EnsureErrorHandler(ScriptState::ForRelevantRealm(info), v8Value));
}

static void onfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onfocus(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onfocusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnfocus(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onformdataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onformdata(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onformdataAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnformdata(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oninputAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oninput(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oninputAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOninput(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oninvalidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::oninvalid(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oninvalidAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOninvalid(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onkeydownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onkeydown(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onkeydownAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeydown(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onkeypressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onkeypress(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onkeypressAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeypress(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onkeyupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onkeyup(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onkeyupAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeyup(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onload(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnload(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadeddataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onloadeddata(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadeddataAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadeddata(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadedmetadataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onloadedmetadata(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadedmetadataAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadedmetadata(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onloadstart(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadstart(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmousedownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmousedown(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmousedownAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousedown(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmouseenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmouseenter(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmouseenterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::hasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseenter(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmouseleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmouseleave(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmouseleaveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::hasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseleave(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmousemoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmousemove(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmousemoveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousemove(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmouseoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmouseout(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmouseoutAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseout(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmouseoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmouseover(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmouseoverAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseover(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmouseupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmouseup(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmouseupAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseup(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmousewheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onmousewheel(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmousewheelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousewheel(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpause(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpauseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpause(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onplay(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onplayAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplay(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onplayingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onplaying(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onplayingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplaying(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onprogress(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onprogressAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnprogress(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onratechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onratechange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onratechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnratechange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onresetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onreset(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnreset(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onresizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onresize(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnresize(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onscroll(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onscrollAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnscroll(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onseekedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onseeked(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onseekedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeked(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onseekingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onseeking(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onseekingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeking(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onselectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onselect(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onselectAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselect(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onstalledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onstalled(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstalledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnstalled(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsubmitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onsubmit(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsubmitAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsubmit(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsuspendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onsuspend(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsuspendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsuspend(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontimeupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontimeupdate(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontimeupdateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntimeupdate(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontoggleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontoggle(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontoggleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntoggle(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onvolumechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onvolumechange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onvolumechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnvolumechange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwaitingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onwaiting(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwaitingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwaiting(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onwheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onwheel(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwheelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwheel(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onauxclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onauxclick(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onauxclickAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnauxclick(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ongotpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ongotpointercapture(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ongotpointercaptureAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOngotpointercapture(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onlostpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onlostpointercapture(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onlostpointercaptureAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnlostpointercapture(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointerdownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerdown(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointerdownAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerdown(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointermoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointermove(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointermoveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointermove(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointerupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerup(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointerupAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerup(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointercancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointercancel(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointercancelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointercancel(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointeroverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerover(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointeroverAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerover(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointeroutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerout(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointeroutAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerout(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointerenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerenter(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointerenterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerenter(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpointerleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::onpointerleave(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpointerleaveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerleave(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontouchcancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontouchcancel(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontouchcancelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchcancel(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontouchendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontouchend(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontouchendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchend(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontouchmoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontouchmove(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontouchmoveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchmove(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontouchstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(GlobalEventHandlers::ontouchstart(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontouchstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchstart(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onafterprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onafterprint(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onafterprintAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnafterprint(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onbeforeprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onbeforeprint(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onbeforeprintAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnbeforeprint(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onbeforeunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onbeforeunload(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onbeforeunloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnbeforeunload(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onhashchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onhashchange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onhashchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnhashchange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onlanguagechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onlanguagechange(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onlanguagechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnlanguagechange(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onmessage(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnmessage(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onmessageerror(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnmessageerror(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onofflineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onoffline(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onofflineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnoffline(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ononlineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::ononline(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ononlineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnonline(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpagehideAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onpagehide(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpagehideAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnpagehide(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpageshowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onpageshow(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpageshowAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnpageshow(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpopstateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onpopstate(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpopstateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnpopstate(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onrejectionhandled(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onrejectionhandledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnrejectionhandled(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onstorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onstorage(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstorageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnstorage(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onunhandledrejection(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onunhandledrejectionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnunhandledrejection(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowEventHandlers::onunload(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onunloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowEventHandlers::setOnunload(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void performanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Performance* cppValue(DOMWindowPerformance::performance(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#performance")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void performanceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "performance");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->close(CurrentDOMWindow(info.GetIsolate()));
}

static void closeOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Window::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Window::closeMethodCallback, V8Undefined(), signature, 0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "close");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  impl->stop();
}

static void focusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->focus(CurrentDOMWindow(info.GetIsolate()));
}

static void focusOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Window::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Window::focusMethodCallback, V8Undefined(), signature, 0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "focus");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void blurMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->blur();
}

static void blurOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Window::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Window::blurMethodCallback, V8Undefined(), signature, 0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "blur");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void openMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "open");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  V8StringResource<kTreatNullAsEmptyString> url;
  V8StringResource<> target;
  V8StringResource<kTreatNullAsEmptyString> features;
  if (!info[0]->IsUndefined()) {
    url = NativeValueTraits<IDLUSVStringBase<kTreatNullAsEmptyString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    url = WTF::g_empty_string;
  }
  if (!info[1]->IsUndefined()) {
    target = info[1];
    if (!target.Prepare())
      return;
  } else {
    target = "_blank";
  }
  if (!info[2]->IsUndefined()) {
    features = info[2];
    if (!features.Prepare())
      return;
  } else {
    features = WTF::g_empty_string;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  DOMWindow* result = impl->open(executionContext, CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), url, target, features, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void alert1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  impl->alert(scriptState);
}

static void alert2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  message = info[0];
  if (!message.Prepare())
    return;

  impl->alert(scriptState, message);
}

static void alertMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_Alert_Method);
        alert1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_Alert_Method);
        alert2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "alert");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void confirmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }

  bool result = impl->confirm(scriptState, message);
  V8SetReturnValueBool(info, result);
}

static void promptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  V8StringResource<> defaultValue;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }
  if (!info[1]->IsUndefined()) {
    defaultValue = info[1];
    if (!defaultValue.Prepare())
      return;
  } else {
    defaultValue = WTF::g_empty_string;
  }

  String result = impl->prompt(scriptState, message, defaultValue);
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void printMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  impl->print(scriptState);
}

static void requestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "requestAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  V8SetReturnValueInt(info, impl->requestAnimationFrame(callback));
}

static void cancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "cancelAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->cancelAnimationFrame(handle);
}

static void requestIdleCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "requestIdleCallback");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8IdleRequestCallback* callback;
  IdleRequestOptions options;
  if (info[0]->IsFunction()) {
    callback = V8IdleRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  V8IdleRequestOptions::ToImpl(info.GetIsolate(), info[1], options, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueInt(info, impl->requestIdleCallback(callback, options));
}

static void cancelIdleCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "cancelIdleCallback");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->cancelIdleCallback(handle);
}

static void postMessageOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Window::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Window::postMessageMethodCallback, V8Undefined(), signature, 2);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "postMessage");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void captureEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  impl->captureEvents();
}

static void releaseEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  impl->releaseEvents();
}

static void getComputedStyleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "getComputedStyle");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* elt;
  V8StringResource<kTreatNullAndUndefinedAsNullString> pseudoElt;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  elt = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!elt) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    CSSStyleDeclaration* result = impl->getComputedStyle(elt);
    // [NewObject] must always create a new wrapper.  Check that a wrapper
    // does not exist yet.
    DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
    V8SetReturnValue(info, result);
    return;
  }
  pseudoElt = info[1];
  if (!pseudoElt.Prepare())
    return;

  CSSStyleDeclaration* result = impl->getComputedStyle(elt, pseudoElt);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void matchMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "matchMedia");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> query;
  query = info[0];
  if (!query.Prepare())
    return;

  MediaQueryList* result = impl->matchMedia(query);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void moveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "moveTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->moveTo(x, y);
}

static void moveByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "moveBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->moveBy(x, y);
}

static void resizeToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "resizeTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->resizeTo(x, y);
}

static void resizeByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "resizeBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->resizeBy(x, y);
}

static void scroll1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScrollToOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8ScrollToOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scroll(options);
}

static void scroll2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scroll(x, y);
}

static int scrollMethodLength() {
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 0;
  }
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 1;
  }
  return 2;
}

static void scrollMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scroll1Method(info);
          return;
        }
      }
      break;
    case 1:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scroll1Method(info);
          return;
        }
      }
      break;
    case 2:
      if (true) {
        scroll2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");
  if (isArityError) {
    if (info.Length() < DOMWindowV8Internal::scrollMethodLength()) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(DOMWindowV8Internal::scrollMethodLength(), info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void scrollTo1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScrollToOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8ScrollToOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scrollTo(options);
}

static void scrollTo2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scrollTo(x, y);
}

static int scrollToMethodLength() {
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 0;
  }
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 1;
  }
  return 2;
}

static void scrollToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scrollTo1Method(info);
          return;
        }
      }
      break;
    case 1:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scrollTo1Method(info);
          return;
        }
      }
      break;
    case 2:
      if (true) {
        scrollTo2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");
  if (isArityError) {
    if (info.Length() < DOMWindowV8Internal::scrollToMethodLength()) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(DOMWindowV8Internal::scrollToMethodLength(), info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void scrollBy1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScrollToOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8ScrollToOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scrollBy(options);
}

static void scrollBy2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scrollBy(x, y);
}

static int scrollByMethodLength() {
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 0;
  }
  if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
    return 1;
  }
  return 2;
}

static void scrollByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scrollBy1Method(info);
          return;
        }
      }
      break;
    case 1:
      if (RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled()) {
        if (true) {
          scrollBy1Method(info);
          return;
        }
      }
      break;
    case 2:
      if (true) {
        scrollBy2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");
  if (isArityError) {
    if (info.Length() < DOMWindowV8Internal::scrollByMethodLength()) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(DOMWindowV8Internal::scrollByMethodLength(), info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getSelectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  V8SetReturnValue(info, impl->getSelection());
}

static void getComputedAccessibleNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "getComputedAccessibleNode");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  ScriptPromise result = impl->getComputedAccessibleNode(scriptState, element);
  V8SetReturnValue(info, result.V8Value());
}

static void findMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "find");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  V8StringResource<> string;
  bool caseSensitive;
  bool backwards;
  bool wrap;
  bool wholeWord;
  bool searchInFrames;
  bool showDialog;
  string = info[0];
  if (!string.Prepare())
    return;

  caseSensitive = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  backwards = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  wrap = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  wholeWord = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  searchInFrames = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  showDialog = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->find(string, caseSensitive, backwards, wrap, wholeWord, searchInFrames, showDialog));
}

static void webkitRequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitRequestAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  V8SetReturnValueInt(info, impl->webkitRequestAnimationFrame(callback));
}

static void webkitCancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitCancelAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t id;
  id = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->cancelAnimationFrame(id);
}

static void fetchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "fetch");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RequestOrUSVString input;
  Dictionary init;
  V8RequestOrUSVString::ToImpl(info.GetIsolate(), info[0], input, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = GlobalFetch::fetch(scriptState, *impl, input, init, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void btoaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "btoa");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> btoa;
  btoa = info[0];
  if (!btoa.Prepare())
    return;

  String result = impl->btoa(btoa, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void atobMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "atob");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> atob;
  atob = info[0];
  if (!atob.Prepare())
    return;

  String result = impl->atob(atob, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void setTimeout1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exceptionState);
  if (exceptionState.HadException())
    return;

  int32_t result = DOMWindowTimers::setTimeout(scriptState, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void setTimeout2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  handler = info[0];
  if (!handler.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exceptionState);
  if (exceptionState.HadException())
    return;

  int32_t result = DOMWindowTimers::setTimeout(scriptState, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void setTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        setTimeout1Method(info);
        return;
      }
      if (true) {
        setTimeout2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        setTimeout1Method(info);
        return;
      }
      if (true) {
        setTimeout2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        setTimeout1Method(info);
        return;
      }
      if (true) {
        setTimeout2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "clearTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    handle = 0;
  }

  DOMWindowTimers::clearTimeout(*impl, handle);
}

static void setInterval1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exceptionState);
  if (exceptionState.HadException())
    return;

  int32_t result = DOMWindowTimers::setInterval(scriptState, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void setInterval2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  handler = info[0];
  if (!handler.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exceptionState);
  if (exceptionState.HadException())
    return;

  int32_t result = DOMWindowTimers::setInterval(scriptState, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void setIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        setInterval1Method(info);
        return;
      }
      if (true) {
        setInterval2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        setInterval1Method(info);
        return;
      }
      if (true) {
        setInterval2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        setInterval1Method(info);
        return;
      }
      if (true) {
        setInterval2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "clearInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    handle = 0;
  }

  DOMWindowTimers::clearInterval(*impl, handle);
}

static void createImageBitmap1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas imageBitmap;
  ImageBitmapOptions options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], imageBitmap, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  V8ImageBitmapOptions::ToImpl(info.GetIsolate(), info[1], options, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = ImageBitmapFactories::createImageBitmap(scriptState, *impl, imageBitmap, options);
  V8SetReturnValue(info, result.V8Value());
}

static void createImageBitmap2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas imageBitmap;
  int32_t sx;
  int32_t sy;
  int32_t sw;
  int32_t sh;
  ImageBitmapOptions options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], imageBitmap, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  sx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[5]->IsNullOrUndefined() && !info[5]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 6 ('options') is not an object.");
    return;
  }
  V8ImageBitmapOptions::ToImpl(info.GetIsolate(), info[5], options, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = ImageBitmapFactories::createImageBitmap(scriptState, *impl, imageBitmap, sx, sy, sw, sh, options);
  V8SetReturnValue(info, result.V8Value());
}

static void createImageBitmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(6, info.Length())) {
    case 1:
      if (true) {
        createImageBitmap1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        createImageBitmap1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        createImageBitmap2Method(info);
        return;
      }
      break;
    case 6:
      if (true) {
        createImageBitmap2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 2, 5, 6]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void DOMWindowOriginSafeMethodSetter(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info) {
  if (!name->IsString())
    return;
  v8::Local<v8::Object> holder = V8Window::findInstanceInPrototypeChain(info.Holder(), info.GetIsolate());
  if (holder.IsEmpty())
    return;
  DOMWindow* impl = V8Window::ToImpl(holder);
  v8::String::Utf8Value methodName(info.GetIsolate(), name);
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kSetterContext, "Window", *methodName);
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, exceptionState)) {
    return;
  }

  // |methodName| must be same with {{method.name}} in
  // {{method.name}}OriginSafeMethodGetter{{world_suffix}} defined in
  // methods.cpp.tmpl
  V8PrivateProperty::GetSymbol(info.GetIsolate(), *methodName)
      .Set(v8::Local<v8::Object>::Cast(info.Holder()), v8Value);
}
static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  DOMWindow* result = impl->AnonymousIndexedGetter(index);
  V8SetReturnValueFast(info, result, impl);
}

static void indexedPropertyDescriptor(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8Window::indexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getterValue = info.GetReturnValue().Get();
  if (!getterValue->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getterValue, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

static const struct {
  using GetterCallback = void(*)(const v8::PropertyCallbackInfo<v8::Value>&);
  using SetterCallback = void(*)(v8::Local<v8::Value>, const V8CrossOriginSetterInfo&);

  const char* const name;
  const GetterCallback getter;
  const SetterCallback setter;
} kCrossOriginAttributeTable[] = {
  {
    "window",
    &DOMWindowV8Internal::windowAttributeGetter,
    nullptr,
  },
  {
    "self",
    &DOMWindowV8Internal::selfAttributeGetter,
    nullptr,
  },
  {
    "location",
    V8Window::locationAttributeGetterCustom,
    &DOMWindowV8Internal::locationAttributeSetter,
  },
  {
    "closed",
    &DOMWindowV8Internal::closedAttributeGetter,
    nullptr,
  },
  {
    "frames",
    &DOMWindowV8Internal::framesAttributeGetter,
    nullptr,
  },
  {
    "length",
    &DOMWindowV8Internal::lengthAttributeGetter,
    nullptr,
  },
  {
    "top",
    &DOMWindowV8Internal::topAttributeGetter,
    nullptr,
  },
  {
    "opener",
    &DOMWindowV8Internal::openerAttributeGetter,
    nullptr,
  },
  {
    "parent",
    &DOMWindowV8Internal::parentAttributeGetter,
    nullptr,
  },
  {"close", &DOMWindowV8Internal::closeOriginSafeMethodGetter, nullptr},
  {"focus", &DOMWindowV8Internal::focusOriginSafeMethodGetter, nullptr},
  {"blur", &DOMWindowV8Internal::blurOriginSafeMethodGetter, nullptr},
  {"postMessage", &DOMWindowV8Internal::postMessageOriginSafeMethodGetter, nullptr},
};
} // namespace DOMWindowV8Internal

void V8Window::windowAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_window_Getter");

  DOMWindowV8Internal::windowAttributeGetter(info);
}

void V8Window::selfAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_self_Getter");

  DOMWindowV8Internal::selfAttributeGetter(info);
}

void V8Window::documentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_document_Getter");

  DOMWindowV8Internal::documentAttributeGetter(info);
}

void V8Window::originAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_origin_Getter");

  DOMWindowV8Internal::originAttributeGetter(info);
}

void V8Window::originAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_origin_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::originAttributeSetter(v8Value, info);
}

void V8Window::nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_name_Getter");

  DOMWindowV8Internal::nameAttributeGetter(info);
}

void V8Window::nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_name_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::nameAttributeSetter(v8Value, info);
}

void V8Window::locationAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_location_Getter");

  V8Window::locationAttributeGetterCustom(info);
}

void V8Window::locationAttributeSetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_location_Setter");

  DOMWindowV8Internal::locationAttributeSetter(v8Value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
}

void V8Window::historyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_history_Getter");

  DOMWindowV8Internal::historyAttributeGetter(info);
}

void V8Window::locationbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_locationbar_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropLocationbar);

  DOMWindowV8Internal::locationbarAttributeGetter(info);
}

void V8Window::locationbarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_locationbar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropLocationbar);

  DOMWindowV8Internal::locationbarAttributeSetter(v8Value, info);
}

void V8Window::menubarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_menubar_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropMenubar);

  DOMWindowV8Internal::menubarAttributeGetter(info);
}

void V8Window::menubarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_menubar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropMenubar);

  DOMWindowV8Internal::menubarAttributeSetter(v8Value, info);
}

void V8Window::personalbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_personalbar_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropPersonalbar);

  DOMWindowV8Internal::personalbarAttributeGetter(info);
}

void V8Window::personalbarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_personalbar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropPersonalbar);

  DOMWindowV8Internal::personalbarAttributeSetter(v8Value, info);
}

void V8Window::scrollbarsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollbars_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropScrollbars);

  DOMWindowV8Internal::scrollbarsAttributeGetter(info);
}

void V8Window::scrollbarsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollbars_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropScrollbars);

  DOMWindowV8Internal::scrollbarsAttributeSetter(v8Value, info);
}

void V8Window::statusbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_statusbar_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropStatusbar);

  DOMWindowV8Internal::statusbarAttributeGetter(info);
}

void V8Window::statusbarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_statusbar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropStatusbar);

  DOMWindowV8Internal::statusbarAttributeSetter(v8Value, info);
}

void V8Window::toolbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_toolbar_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropToolbar);

  DOMWindowV8Internal::toolbarAttributeGetter(info);
}

void V8Window::toolbarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_toolbar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropToolbar);

  DOMWindowV8Internal::toolbarAttributeSetter(v8Value, info);
}

void V8Window::statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_status_Getter");

  DOMWindowV8Internal::statusAttributeGetter(info);
}

void V8Window::statusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_status_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::statusAttributeSetter(v8Value, info);
}

void V8Window::closedAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_closed_Getter");

  DOMWindowV8Internal::closedAttributeGetter(info);
}

void V8Window::framesAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_frames_Getter");

  DOMWindowV8Internal::framesAttributeGetter(info);
}

void V8Window::lengthAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_length_Getter");

  DOMWindowV8Internal::lengthAttributeGetter(info);
}

void V8Window::topAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_top_Getter");

  DOMWindowV8Internal::topAttributeGetter(info);
}

void V8Window::openerAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_opener_Getter");

  DOMWindowV8Internal::openerAttributeGetter(info);
}

void V8Window::openerAttributeSetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_opener_Setter");

  V8Window::openerAttributeSetterCustom(v8Value, info);
}

void V8Window::parentAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_parent_Getter");

  DOMWindowV8Internal::parentAttributeGetter(info);
}

void V8Window::frameElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_frameElement_Getter");

  V8Window::frameElementAttributeGetterCustom(info);
}

void V8Window::navigatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_navigator_Getter");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (scriptState->World().IsIsolatedWorld() && contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogGetter("Window.navigator");
  }

  DOMWindowV8Internal::navigatorAttributeGetter(info);
}

void V8Window::applicationCacheAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_applicationCache_Getter");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (scriptState->World().IsIsolatedWorld() && contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogGetter("Window.applicationCache");
  }

  DOMWindowV8Internal::applicationCacheAttributeGetter(info);
}

void V8Window::customElementsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_customElements_Getter");

  DOMWindowV8Internal::customElementsAttributeGetter(info);
}

void V8Window::externalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_external_Getter");

  DOMWindowV8Internal::externalAttributeGetter(info);
}

void V8Window::externalAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_external_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::externalAttributeSetter(v8Value, info);
}

void V8Window::screenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screen_Getter");

  DOMWindowV8Internal::screenAttributeGetter(info);
}

void V8Window::screenAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screen_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::screenAttributeSetter(v8Value, info);
}

void V8Window::innerWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerWidth_Getter");

  DOMWindowV8Internal::innerWidthAttributeGetter(info);
}

void V8Window::innerWidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerWidth_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::innerWidthAttributeSetter(v8Value, info);
}

void V8Window::innerHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerHeight_Getter");

  DOMWindowV8Internal::innerHeightAttributeGetter(info);
}

void V8Window::innerHeightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerHeight_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::innerHeightAttributeSetter(v8Value, info);
}

void V8Window::scrollXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollX_Getter");

  DOMWindowV8Internal::scrollXAttributeGetter(info);
}

void V8Window::scrollXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::scrollXAttributeSetter(v8Value, info);
}

void V8Window::pageXOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageXOffset_Getter");

  DOMWindowV8Internal::pageXOffsetAttributeGetter(info);
}

void V8Window::pageXOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageXOffset_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::pageXOffsetAttributeSetter(v8Value, info);
}

void V8Window::scrollYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollY_Getter");

  DOMWindowV8Internal::scrollYAttributeGetter(info);
}

void V8Window::scrollYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::scrollYAttributeSetter(v8Value, info);
}

void V8Window::pageYOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageYOffset_Getter");

  DOMWindowV8Internal::pageYOffsetAttributeGetter(info);
}

void V8Window::pageYOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageYOffset_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::pageYOffsetAttributeSetter(v8Value, info);
}

void V8Window::visualViewportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_visualViewport_Getter");

  DOMWindowV8Internal::visualViewportAttributeGetter(info);
}

void V8Window::visualViewportAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_visualViewport_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::visualViewportAttributeSetter(v8Value, info);
}

void V8Window::screenXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenX_Getter");

  DOMWindowV8Internal::screenXAttributeGetter(info);
}

void V8Window::screenXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::screenXAttributeSetter(v8Value, info);
}

void V8Window::screenYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenY_Getter");

  DOMWindowV8Internal::screenYAttributeGetter(info);
}

void V8Window::screenYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::screenYAttributeSetter(v8Value, info);
}

void V8Window::outerWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerWidth_Getter");

  DOMWindowV8Internal::outerWidthAttributeGetter(info);
}

void V8Window::outerWidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerWidth_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::outerWidthAttributeSetter(v8Value, info);
}

void V8Window::outerHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerHeight_Getter");

  DOMWindowV8Internal::outerHeightAttributeGetter(info);
}

void V8Window::outerHeightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerHeight_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::outerHeightAttributeSetter(v8Value, info);
}

void V8Window::devicePixelRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_devicePixelRatio_Getter");

  DOMWindowV8Internal::devicePixelRatioAttributeGetter(info);
}

void V8Window::devicePixelRatioAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_devicePixelRatio_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::devicePixelRatioAttributeSetter(v8Value, info);
}

void V8Window::onorientationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onorientationchange_Getter");

  DOMWindowV8Internal::onorientationchangeAttributeGetter(info);
}

void V8Window::onorientationchangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onorientationchange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onorientationchangeAttributeSetter(v8Value, info);
}

void V8Window::orientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_orientation_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOrientation);

  DOMWindowV8Internal::orientationAttributeGetter(info);
}

void V8Window::clientInformationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clientInformation_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowClientInformation);

  DOMWindowV8Internal::clientInformationAttributeGetter(info);
}

void V8Window::clientInformationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clientInformation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowClientInformation);

  DOMWindowV8Internal::clientInformationAttributeSetter(v8Value, info);
}

void V8Window::eventAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_event_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowEvent);

  V8Window::eventAttributeGetterCustom(info);
}

void V8Window::eventAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_event_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowEvent);

  DOMWindowV8Internal::eventAttributeSetter(v8Value, info);
}

void V8Window::offscreenBufferingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_offscreenBuffering_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOffscreenBuffering);

  DOMWindowV8Internal::offscreenBufferingAttributeGetter(info);
}

void V8Window::offscreenBufferingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_offscreenBuffering_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOffscreenBuffering);

  DOMWindowV8Internal::offscreenBufferingAttributeSetter(v8Value, info);
}

void V8Window::screenLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenLeft_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenLeft);

  DOMWindowV8Internal::screenLeftAttributeGetter(info);
}

void V8Window::screenLeftAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenLeft_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenLeft);

  DOMWindowV8Internal::screenLeftAttributeSetter(v8Value, info);
}

void V8Window::screenTopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenTop_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenTop);

  DOMWindowV8Internal::screenTopAttributeGetter(info);
}

void V8Window::screenTopAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenTop_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenTop);

  DOMWindowV8Internal::screenTopAttributeSetter(v8Value, info);
}

void V8Window::defaultStatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultStatus_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultStatus);

  DOMWindowV8Internal::defaultStatusAttributeGetter(info);
}

void V8Window::defaultStatusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultStatus_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultStatus);

  DOMWindowV8Internal::defaultStatusAttributeSetter(v8Value, info);
}

void V8Window::defaultstatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultstatus_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultstatus);

  DOMWindowV8Internal::defaultstatusAttributeGetter(info);
}

void V8Window::defaultstatusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultstatus_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultstatus);

  DOMWindowV8Internal::defaultstatusAttributeSetter(v8Value, info);
}

void V8Window::styleMediaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_styleMedia_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kStyleMedia);

  DOMWindowV8Internal::styleMediaAttributeGetter(info);
}

void V8Window::WebKitTransitionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitTransitionEvent_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedTransitionEventConstructor);

  V8ConstructorAttributeGetter(property, info, &V8TransitionEvent::wrapperTypeInfo);
}

void V8Window::WebKitAnimationEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitAnimationEvent_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebKitAnimationEvent_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8AnimationEvent::wrapperTypeInfo);
}

void V8Window::webkitURLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitURL_ConstructorGetterCallback");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedWindowURL);

  V8ConstructorAttributeGetter(property, info, &V8URL::wrapperTypeInfo);
}

void V8Window::WebKitMutationObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitMutationObserver_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedMutationObserverConstructor);

  V8ConstructorAttributeGetter(property, info, &V8MutationObserver::wrapperTypeInfo);
}

void V8Window::onanimationendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationend_Getter");

  DOMWindowV8Internal::onanimationendAttributeGetter(info);
}

void V8Window::onanimationendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onanimationendAttributeSetter(v8Value, info);
}

void V8Window::onanimationiterationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationiteration_Getter");

  DOMWindowV8Internal::onanimationiterationAttributeGetter(info);
}

void V8Window::onanimationiterationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationiteration_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onanimationiterationAttributeSetter(v8Value, info);
}

void V8Window::onanimationstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationstart_Getter");

  DOMWindowV8Internal::onanimationstartAttributeGetter(info);
}

void V8Window::onanimationstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onanimationstartAttributeSetter(v8Value, info);
}

void V8Window::onsearchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsearch_Getter");

  DOMWindowV8Internal::onsearchAttributeGetter(info);
}

void V8Window::onsearchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsearch_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onsearchAttributeSetter(v8Value, info);
}

void V8Window::ontransitionendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontransitionend_Getter");

  DOMWindowV8Internal::ontransitionendAttributeGetter(info);
}

void V8Window::ontransitionendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontransitionend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontransitionendAttributeSetter(v8Value, info);
}

void V8Window::onwebkitanimationendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationend_Getter");

  DOMWindowV8Internal::onwebkitanimationendAttributeGetter(info);
}

void V8Window::onwebkitanimationendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwebkitanimationendAttributeSetter(v8Value, info);
}

void V8Window::onwebkitanimationiterationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationiteration_Getter");

  DOMWindowV8Internal::onwebkitanimationiterationAttributeGetter(info);
}

void V8Window::onwebkitanimationiterationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationiteration_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwebkitanimationiterationAttributeSetter(v8Value, info);
}

void V8Window::onwebkitanimationstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationstart_Getter");

  DOMWindowV8Internal::onwebkitanimationstartAttributeGetter(info);
}

void V8Window::onwebkitanimationstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwebkitanimationstartAttributeSetter(v8Value, info);
}

void V8Window::onwebkittransitionendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkittransitionend_Getter");

  DOMWindowV8Internal::onwebkittransitionendAttributeGetter(info);
}

void V8Window::onwebkittransitionendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkittransitionend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwebkittransitionendAttributeSetter(v8Value, info);
}

void V8Window::isSecureContextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_isSecureContext_Getter");

  DOMWindowV8Internal::isSecureContextAttributeGetter(info);
}

void V8Window::WebKitCSSMatrixConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitCSSMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMMatrix::wrapperTypeInfo);
}

void V8Window::ScrollTimelineConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScrollTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ScrollTimeline::wrapperTypeInfo);
}

void V8Window::AccessibleNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AccessibleNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AccessibleNode::wrapperTypeInfo);
}

void V8Window::AccessibleNodeListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AccessibleNodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AccessibleNodeList::wrapperTypeInfo);
}

void V8Window::ComputedAccessibleNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ComputedAccessibleNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ComputedAccessibleNode::wrapperTypeInfo);
}

void V8Window::AudioTrackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioTrack::wrapperTypeInfo);
}

void V8Window::AudioTrackListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioTrackList::wrapperTypeInfo);
}

void V8Window::VideoTrackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VideoTrack::wrapperTypeInfo);
}

void V8Window::VideoTrackListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VideoTrackList::wrapperTypeInfo);
}

void V8Window::CSSImageValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSImageValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSImageValue::wrapperTypeInfo);
}

void V8Window::CSSKeywordValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeywordValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSKeywordValue::wrapperTypeInfo);
}

void V8Window::CSSMathInvertConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathInvert_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathInvert::wrapperTypeInfo);
}

void V8Window::CSSMathMaxConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathMax_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMax::wrapperTypeInfo);
}

void V8Window::CSSMathMinConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathMin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMin::wrapperTypeInfo);
}

void V8Window::CSSMathNegateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathNegate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathNegate::wrapperTypeInfo);
}

void V8Window::CSSMathProductConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathProduct_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathProduct::wrapperTypeInfo);
}

void V8Window::CSSMathSumConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathSum_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathSum::wrapperTypeInfo);
}

void V8Window::CSSMathValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathValue::wrapperTypeInfo);
}

void V8Window::CSSMatrixComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMatrixComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMatrixComponent::wrapperTypeInfo);
}

void V8Window::CSSNumericArrayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNumericArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericArray::wrapperTypeInfo);
}

void V8Window::CSSNumericValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNumericValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericValue::wrapperTypeInfo);
}

void V8Window::CSSPerspectiveConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPerspective_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPerspective::wrapperTypeInfo);
}

void V8Window::CSSPositionValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPositionValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPositionValue::wrapperTypeInfo);
}

void V8Window::CSSRotateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRotate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSRotate::wrapperTypeInfo);
}

void V8Window::CSSScaleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSScale_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSScale::wrapperTypeInfo);
}

void V8Window::CSSSkewConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkew_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSkew::wrapperTypeInfo);
}

void V8Window::CSSSkewXConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkewX_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSkewX::wrapperTypeInfo);
}

void V8Window::CSSSkewYConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkewY_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSkewY::wrapperTypeInfo);
}

void V8Window::CSSStyleValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleValue::wrapperTypeInfo);
}

void V8Window::CSSTransformComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTransformComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformComponent::wrapperTypeInfo);
}

void V8Window::CSSTransformValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTransformValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformValue::wrapperTypeInfo);
}

void V8Window::CSSTranslateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTranslate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTranslate::wrapperTypeInfo);
}

void V8Window::CSSUnitValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSUnitValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnitValue::wrapperTypeInfo);
}

void V8Window::CSSUnparsedValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSUnparsedValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnparsedValue::wrapperTypeInfo);
}

void V8Window::CSSVariableReferenceValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSVariableReferenceValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSVariableReferenceValue::wrapperTypeInfo);
}

void V8Window::StylePropertyMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StylePropertyMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StylePropertyMap::wrapperTypeInfo);
}

void V8Window::StylePropertyMapReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StylePropertyMapReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StylePropertyMapReadOnly::wrapperTypeInfo);
}

void V8Window::CSSViewportRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSViewportRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSViewportRule::wrapperTypeInfo);
}

void V8Window::PerformanceEventTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceEventTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceEventTiming::wrapperTypeInfo);
}

void V8Window::FormDataEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FormDataEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FormDataEvent::wrapperTypeInfo);
}

void V8Window::MojoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Mojo::wrapperTypeInfo);
}

void V8Window::MojoHandleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoHandle::wrapperTypeInfo);
}

void V8Window::MojoWatcherConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoWatcher::wrapperTypeInfo);
}

void V8Window::MojoInterfaceInterceptorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoInterfaceInterceptor::wrapperTypeInfo);
}

void V8Window::MojoInterfaceRequestEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoInterfaceRequestEvent::wrapperTypeInfo);
}

void V8Window::OffscreenCanvasConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OffscreenCanvas::wrapperTypeInfo);
}

void V8Window::PerformanceNavigationTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceNavigationTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceNavigationTiming::wrapperTypeInfo);
}

void V8Window::PerformancePaintTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformancePaintTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformancePaintTiming::wrapperTypeInfo);
}

void V8Window::ReportingObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ReportingObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ReportingObserver::wrapperTypeInfo);
}

void V8Window::ResizeObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ResizeObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ResizeObserver::wrapperTypeInfo);
}

void V8Window::ResizeObserverEntryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ResizeObserverEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ResizeObserverEntry::wrapperTypeInfo);
}

void V8Window::SVGAnimationElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimationElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimationElement::wrapperTypeInfo);
}

void V8Window::SVGDiscardElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDiscardElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGDiscardElement::wrapperTypeInfo);
}

void V8Window::SVGMPathElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGMPathElement::wrapperTypeInfo);
}

void V8Window::ScrollStateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScrollState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ScrollState::wrapperTypeInfo);
}

void V8Window::PerformanceServerTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceServerTiming::wrapperTypeInfo);
}

void V8Window::SharedWorkerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SharedWorker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SharedWorker::wrapperTypeInfo);
}

void V8Window::FontFaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FontFace::wrapperTypeInfo);
}

void V8Window::TrustedHTMLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedHTML_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedHTML::wrapperTypeInfo);
}

void V8Window::TrustedScriptURLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedScriptURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedScriptURL::wrapperTypeInfo);
}

void V8Window::TrustedURLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedURL::wrapperTypeInfo);
}

void V8Window::VisualViewportConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VisualViewport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VisualViewport::wrapperTypeInfo);
}

void V8Window::AnimationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Animation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Animation::wrapperTypeInfo);
}

void V8Window::AnimationEffectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationEffect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AnimationEffect::wrapperTypeInfo);
}

void V8Window::AnimationPlaybackEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationPlaybackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AnimationPlaybackEvent::wrapperTypeInfo);
}

void V8Window::AnimationTimelineConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AnimationTimeline::wrapperTypeInfo);
}

void V8Window::DocumentTimelineConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DocumentTimeline::wrapperTypeInfo);
}

void V8Window::KeyframeEffectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyframeEffect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8KeyframeEffect::wrapperTypeInfo);
}

void V8Window::VTTRegionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VTTRegion_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VTTRegion::wrapperTypeInfo);
}

void V8Window::WorkletConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Worklet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Worklet::wrapperTypeInfo);
}

void V8Window::XSLTProcessorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XSLTProcessor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XSLTProcessor::wrapperTypeInfo);
}

void V8Window::ApplicationCacheConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ApplicationCache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ApplicationCache::wrapperTypeInfo);
}

void V8Window::ApplicationCacheErrorEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ApplicationCacheErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ApplicationCacheErrorEvent::wrapperTypeInfo);
}

void V8Window::AbortControllerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AbortController::wrapperTypeInfo);
}

void V8Window::AbortSignalConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AbortSignal::wrapperTypeInfo);
}

void V8Window::AnimationEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AnimationEvent::wrapperTypeInfo);
}

void V8Window::AttrConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Attr_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Attr::wrapperTypeInfo);
}

void V8Window::BarPropConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BarProp_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BarProp::wrapperTypeInfo);
}

void V8Window::BeforeUnloadEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BeforeUnloadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BeforeUnloadEvent::wrapperTypeInfo);
}

void V8Window::BlobConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Blob::wrapperTypeInfo);
}

void V8Window::CDATASectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CDATASection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CDATASection::wrapperTypeInfo);
}

void V8Window::CSSConditionRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSConditionRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSConditionRule::wrapperTypeInfo);
}

void V8Window::CSSConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSS_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSS::wrapperTypeInfo);
}

void V8Window::CSSFontFaceRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSFontFaceRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSFontFaceRule::wrapperTypeInfo);
}

void V8Window::CSSGroupingRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSGroupingRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSGroupingRule::wrapperTypeInfo);
}

void V8Window::CSSImportRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSImportRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSImportRule::wrapperTypeInfo);
}

void V8Window::CSSKeyframeRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeyframeRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSKeyframeRule::wrapperTypeInfo);
}

void V8Window::CSSKeyframesRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeyframesRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSKeyframesRule::wrapperTypeInfo);
}

void V8Window::CSSMediaRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMediaRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMediaRule::wrapperTypeInfo);
}

void V8Window::CSSNamespaceRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNamespaceRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNamespaceRule::wrapperTypeInfo);
}

void V8Window::CSSPageRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPageRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPageRule::wrapperTypeInfo);
}

void V8Window::CSSRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSRule::wrapperTypeInfo);
}

void V8Window::CSSRuleListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRuleList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSRuleList::wrapperTypeInfo);
}

void V8Window::CSSStyleDeclarationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleDeclaration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleDeclaration::wrapperTypeInfo);
}

void V8Window::CSSStyleRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleRule::wrapperTypeInfo);
}

void V8Window::CSSStyleSheetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleSheet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleSheet::wrapperTypeInfo);
}

void V8Window::CSSSupportsRuleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSupportsRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSupportsRule::wrapperTypeInfo);
}

void V8Window::CharacterDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CharacterData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CharacterData::wrapperTypeInfo);
}

void V8Window::ClipboardEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ClipboardEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ClipboardEvent::wrapperTypeInfo);
}

void V8Window::CommentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Comment_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Comment::wrapperTypeInfo);
}

void V8Window::CompositionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CompositionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CompositionEvent::wrapperTypeInfo);
}

void V8Window::CustomElementRegistryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CustomElementRegistry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CustomElementRegistry::wrapperTypeInfo);
}

void V8Window::CustomEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CustomEvent::wrapperTypeInfo);
}

void V8Window::DOMExceptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMException::wrapperTypeInfo);
}

void V8Window::DOMImplementationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMImplementation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMImplementation::wrapperTypeInfo);
}

void V8Window::DOMMatrixConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMMatrix::wrapperTypeInfo);
}

void V8Window::DOMMatrixReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMMatrixReadOnly::wrapperTypeInfo);
}

void V8Window::DOMParserConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMParser_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMParser::wrapperTypeInfo);
}

void V8Window::DOMPointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMPoint::wrapperTypeInfo);
}

void V8Window::DOMPointReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMPointReadOnly::wrapperTypeInfo);
}

void V8Window::DOMQuadConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMQuad::wrapperTypeInfo);
}

void V8Window::DOMRectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMRect::wrapperTypeInfo);
}

void V8Window::DOMRectListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRectList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMRectList::wrapperTypeInfo);
}

void V8Window::DOMRectReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMRectReadOnly::wrapperTypeInfo);
}

void V8Window::DOMStringListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMStringList::wrapperTypeInfo);
}

void V8Window::DOMStringMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMStringMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMStringMap::wrapperTypeInfo);
}

void V8Window::DOMTokenListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMTokenList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMTokenList::wrapperTypeInfo);
}

void V8Window::DataTransferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransfer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DataTransfer::wrapperTypeInfo);
}

void V8Window::DataTransferItemConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransferItem_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DataTransferItem::wrapperTypeInfo);
}

void V8Window::DataTransferItemListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransferItemList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DataTransferItemList::wrapperTypeInfo);
}

void V8Window::DataViewConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataView_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DataView::wrapperTypeInfo);
}

void V8Window::DocumentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Document_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Document::wrapperTypeInfo);
}

void V8Window::DocumentFragmentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentFragment_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DocumentFragment::wrapperTypeInfo);
}

void V8Window::DocumentTypeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentType_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DocumentType::wrapperTypeInfo);
}

void V8Window::DragEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DragEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DragEvent::wrapperTypeInfo);
}

void V8Window::ElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Element_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Element::wrapperTypeInfo);
}

void V8Window::ErrorEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ErrorEvent::wrapperTypeInfo);
}

void V8Window::EventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Event::wrapperTypeInfo);
}

void V8Window::EventTargetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8EventTarget::wrapperTypeInfo);
}

void V8Window::FileConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8File::wrapperTypeInfo);
}

void V8Window::FileListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FileList::wrapperTypeInfo);
}

void V8Window::FileReaderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FileReader::wrapperTypeInfo);
}

void V8Window::FocusEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FocusEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FocusEvent::wrapperTypeInfo);
}

void V8Window::FontFaceSetLoadEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FontFaceSetLoadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FontFaceSetLoadEvent::wrapperTypeInfo);
}

void V8Window::FormDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FormData::wrapperTypeInfo);
}

void V8Window::HTMLAllCollectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAllCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLAllCollection::wrapperTypeInfo);
}

void V8Window::HTMLAnchorElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAnchorElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLAnchorElement::wrapperTypeInfo);
}

void V8Window::HTMLAreaElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAreaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLAreaElement::wrapperTypeInfo);
}

void V8Window::HTMLAudioElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAudioElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLAudioElement::wrapperTypeInfo);
}

void V8Window::AudioConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Audio_ConstructorGetterCallback");

  V8HTMLAudioElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLBRElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLBRElement::wrapperTypeInfo);
}

void V8Window::HTMLBaseElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBaseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLBaseElement::wrapperTypeInfo);
}

void V8Window::HTMLBodyElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBodyElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLBodyElement::wrapperTypeInfo);
}

void V8Window::HTMLButtonElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLButtonElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLButtonElement::wrapperTypeInfo);
}

void V8Window::HTMLCanvasElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLCanvasElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLCanvasElement::wrapperTypeInfo);
}

void V8Window::HTMLCollectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLCollection::wrapperTypeInfo);
}

void V8Window::HTMLContentElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLContentElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLContentElement::wrapperTypeInfo);
}

void V8Window::HTMLDListElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDListElement::wrapperTypeInfo);
}

void V8Window::HTMLDataElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDataElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDataElement::wrapperTypeInfo);
}

void V8Window::HTMLDataListElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDataListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDataListElement::wrapperTypeInfo);
}

void V8Window::HTMLDetailsElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDetailsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDetailsElement::wrapperTypeInfo);
}

void V8Window::HTMLDialogElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDialogElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDialogElement::wrapperTypeInfo);
}

void V8Window::HTMLDirectoryElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDirectoryElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDirectoryElement::wrapperTypeInfo);
}

void V8Window::HTMLDivElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDivElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDivElement::wrapperTypeInfo);
}

void V8Window::HTMLDocumentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDocument_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLDocument::wrapperTypeInfo);
}

void V8Window::HTMLElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLElement::wrapperTypeInfo);
}

void V8Window::HTMLEmbedElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLEmbedElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLEmbedElement::wrapperTypeInfo);
}

void V8Window::HTMLFieldSetElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFieldSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFieldSetElement::wrapperTypeInfo);
}

void V8Window::HTMLFontElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFontElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFontElement::wrapperTypeInfo);
}

void V8Window::HTMLFormControlsCollectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFormControlsCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFormControlsCollection::wrapperTypeInfo);
}

void V8Window::HTMLFormElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFormElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFormElement::wrapperTypeInfo);
}

void V8Window::HTMLFrameElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFrameElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFrameElement::wrapperTypeInfo);
}

void V8Window::HTMLFrameSetElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFrameSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLFrameSetElement::wrapperTypeInfo);
}

void V8Window::HTMLHRElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLHRElement::wrapperTypeInfo);
}

void V8Window::HTMLHeadElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHeadElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLHeadElement::wrapperTypeInfo);
}

void V8Window::HTMLHeadingElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHeadingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLHeadingElement::wrapperTypeInfo);
}

void V8Window::HTMLHtmlElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHtmlElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLHtmlElement::wrapperTypeInfo);
}

void V8Window::HTMLIFrameElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLIFrameElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLIFrameElement::wrapperTypeInfo);
}

void V8Window::HTMLImageElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLImageElement::wrapperTypeInfo);
}

void V8Window::ImageConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Image_ConstructorGetterCallback");

  V8HTMLImageElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLInputElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLInputElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLInputElement::wrapperTypeInfo);
}

void V8Window::HTMLLIElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLIElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLLIElement::wrapperTypeInfo);
}

void V8Window::HTMLLabelElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLabelElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLLabelElement::wrapperTypeInfo);
}

void V8Window::HTMLLegendElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLegendElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLLegendElement::wrapperTypeInfo);
}

void V8Window::HTMLLinkElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLinkElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLLinkElement::wrapperTypeInfo);
}

void V8Window::HTMLMapElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMapElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMapElement::wrapperTypeInfo);
}

void V8Window::HTMLMarqueeElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMarqueeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMarqueeElement::wrapperTypeInfo);
}

void V8Window::HTMLMediaElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMediaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMediaElement::wrapperTypeInfo);
}

void V8Window::HTMLMenuElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMenuElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMenuElement::wrapperTypeInfo);
}

void V8Window::HTMLMetaElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMetaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMetaElement::wrapperTypeInfo);
}

void V8Window::HTMLMeterElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMeterElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLMeterElement::wrapperTypeInfo);
}

void V8Window::HTMLModElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLModElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLModElement::wrapperTypeInfo);
}

void V8Window::HTMLOListElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLOListElement::wrapperTypeInfo);
}

void V8Window::HTMLObjectElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLObjectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLObjectElement::wrapperTypeInfo);
}

void V8Window::HTMLOptGroupElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptGroupElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLOptGroupElement::wrapperTypeInfo);
}

void V8Window::HTMLOptionElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLOptionElement::wrapperTypeInfo);
}

void V8Window::OptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Option_ConstructorGetterCallback");

  V8HTMLOptionElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLOptionsCollectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptionsCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLOptionsCollection::wrapperTypeInfo);
}

void V8Window::HTMLOutputElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOutputElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLOutputElement::wrapperTypeInfo);
}

void V8Window::HTMLParagraphElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLParagraphElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLParagraphElement::wrapperTypeInfo);
}

void V8Window::HTMLParamElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLParamElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLParamElement::wrapperTypeInfo);
}

void V8Window::HTMLPictureElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLPictureElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLPictureElement::wrapperTypeInfo);
}

void V8Window::HTMLPreElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLPreElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLPreElement::wrapperTypeInfo);
}

void V8Window::HTMLProgressElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLProgressElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLProgressElement::wrapperTypeInfo);
}

void V8Window::HTMLQuoteElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLQuoteElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLQuoteElement::wrapperTypeInfo);
}

void V8Window::HTMLScriptElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLScriptElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLScriptElement::wrapperTypeInfo);
}

void V8Window::HTMLSelectElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSelectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLSelectElement::wrapperTypeInfo);
}

void V8Window::HTMLShadowElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLShadowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLShadowElement::wrapperTypeInfo);
}

void V8Window::HTMLSlotElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSlotElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLSlotElement::wrapperTypeInfo);
}

void V8Window::HTMLSourceElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSourceElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLSourceElement::wrapperTypeInfo);
}

void V8Window::HTMLSpanElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSpanElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLSpanElement::wrapperTypeInfo);
}

void V8Window::HTMLStyleElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLStyleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLStyleElement::wrapperTypeInfo);
}

void V8Window::HTMLTableCaptionElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableCaptionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableCaptionElement::wrapperTypeInfo);
}

void V8Window::HTMLTableCellElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableCellElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableCellElement::wrapperTypeInfo);
}

void V8Window::HTMLTableColElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableColElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableColElement::wrapperTypeInfo);
}

void V8Window::HTMLTableElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableElement::wrapperTypeInfo);
}

void V8Window::HTMLTableRowElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableRowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableRowElement::wrapperTypeInfo);
}

void V8Window::HTMLTableSectionElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableSectionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTableSectionElement::wrapperTypeInfo);
}

void V8Window::HTMLTemplateElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTemplateElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTemplateElement::wrapperTypeInfo);
}

void V8Window::HTMLTextAreaElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTextAreaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTextAreaElement::wrapperTypeInfo);
}

void V8Window::HTMLTimeElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTimeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTimeElement::wrapperTypeInfo);
}

void V8Window::HTMLTitleElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTitleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTitleElement::wrapperTypeInfo);
}

void V8Window::HTMLTrackElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTrackElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLTrackElement::wrapperTypeInfo);
}

void V8Window::HTMLUListElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLUListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLUListElement::wrapperTypeInfo);
}

void V8Window::HTMLUnknownElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLUnknownElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLUnknownElement::wrapperTypeInfo);
}

void V8Window::HTMLVideoElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLVideoElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HTMLVideoElement::wrapperTypeInfo);
}

void V8Window::HashChangeEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HashChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8HashChangeEvent::wrapperTypeInfo);
}

void V8Window::HeadersConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Headers::wrapperTypeInfo);
}

void V8Window::HistoryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_History_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8History::wrapperTypeInfo);
}

void V8Window::IdleDeadlineConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IdleDeadline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IdleDeadline::wrapperTypeInfo);
}

void V8Window::ImageBitmapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageBitmap::wrapperTypeInfo);
}

void V8Window::ImageDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageData::wrapperTypeInfo);
}

void V8Window::InputDeviceCapabilitiesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputDeviceCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8InputDeviceCapabilities::wrapperTypeInfo);
}

void V8Window::InputEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8InputEvent::wrapperTypeInfo);
}

void V8Window::IntersectionObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IntersectionObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IntersectionObserver::wrapperTypeInfo);
}

void V8Window::IntersectionObserverEntryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IntersectionObserverEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IntersectionObserverEntry::wrapperTypeInfo);
}

void V8Window::KeyboardEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyboardEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8KeyboardEvent::wrapperTypeInfo);
}

void V8Window::LocationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Location_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Location::wrapperTypeInfo);
}

void V8Window::MediaErrorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaError::wrapperTypeInfo);
}

void V8Window::MediaListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaList::wrapperTypeInfo);
}

void V8Window::MediaQueryListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaQueryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaQueryList::wrapperTypeInfo);
}

void V8Window::MediaQueryListEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaQueryListEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaQueryListEvent::wrapperTypeInfo);
}

void V8Window::MessageChannelConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessageChannel::wrapperTypeInfo);
}

void V8Window::MessageEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessageEvent::wrapperTypeInfo);
}

void V8Window::MessagePortConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessagePort::wrapperTypeInfo);
}

void V8Window::MouseEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MouseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MouseEvent::wrapperTypeInfo);
}

void V8Window::MutationEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MutationEvent::wrapperTypeInfo);
}

void V8Window::MutationObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MutationObserver::wrapperTypeInfo);
}

void V8Window::MutationRecordConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MutationRecord::wrapperTypeInfo);
}

void V8Window::NamedNodeMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NamedNodeMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NamedNodeMap::wrapperTypeInfo);
}

void V8Window::NavigatorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Navigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Navigator::wrapperTypeInfo);
}

void V8Window::NodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Node_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Node::wrapperTypeInfo);
}

void V8Window::NodeFilterConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeFilter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NodeFilter::wrapperTypeInfo);
}

void V8Window::NodeIteratorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeIterator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NodeIterator::wrapperTypeInfo);
}

void V8Window::NodeListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NodeList::wrapperTypeInfo);
}

void V8Window::PageTransitionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PageTransitionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PageTransitionEvent::wrapperTypeInfo);
}

void V8Window::PerformanceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Performance::wrapperTypeInfo);
}

void V8Window::PerformanceEntryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceEntry::wrapperTypeInfo);
}

void V8Window::PerformanceLongTaskTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceLongTaskTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceLongTaskTiming::wrapperTypeInfo);
}

void V8Window::PerformanceMarkConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceMark_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceMark::wrapperTypeInfo);
}

void V8Window::PerformanceMeasureConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceMeasure_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceMeasure::wrapperTypeInfo);
}

void V8Window::PerformanceNavigationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceNavigation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceNavigation::wrapperTypeInfo);
}

void V8Window::PerformanceObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceObserver::wrapperTypeInfo);
}

void V8Window::PerformanceObserverEntryListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceObserverEntryList::wrapperTypeInfo);
}

void V8Window::PerformanceResourceTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceResourceTiming::wrapperTypeInfo);
}

void V8Window::PerformanceTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceTiming::wrapperTypeInfo);
}

void V8Window::PointerEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PointerEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PointerEvent::wrapperTypeInfo);
}

void V8Window::PopStateEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PopStateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PopStateEvent::wrapperTypeInfo);
}

void V8Window::ProcessingInstructionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ProcessingInstruction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ProcessingInstruction::wrapperTypeInfo);
}

void V8Window::ProgressEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ProgressEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ProgressEvent::wrapperTypeInfo);
}

void V8Window::PromiseRejectionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PromiseRejectionEvent::wrapperTypeInfo);
}

void V8Window::RadioNodeListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RadioNodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RadioNodeList::wrapperTypeInfo);
}

void V8Window::RangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Range_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Range::wrapperTypeInfo);
}

void V8Window::RequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Request::wrapperTypeInfo);
}

void V8Window::ResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Response::wrapperTypeInfo);
}

void V8Window::SVGAElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAElement::wrapperTypeInfo);
}

void V8Window::SVGAngleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAngle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAngle::wrapperTypeInfo);
}

void V8Window::SVGAnimateElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimateElement::wrapperTypeInfo);
}

void V8Window::SVGAnimateMotionElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateMotionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimateMotionElement::wrapperTypeInfo);
}

void V8Window::SVGAnimateTransformElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateTransformElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimateTransformElement::wrapperTypeInfo);
}

void V8Window::SVGAnimatedAngleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedAngle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedAngle::wrapperTypeInfo);
}

void V8Window::SVGAnimatedBooleanConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedBoolean_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedBoolean::wrapperTypeInfo);
}

void V8Window::SVGAnimatedEnumerationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedEnumeration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedEnumeration::wrapperTypeInfo);
}

void V8Window::SVGAnimatedIntegerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedInteger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedInteger::wrapperTypeInfo);
}

void V8Window::SVGAnimatedLengthConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedLength_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedLength::wrapperTypeInfo);
}

void V8Window::SVGAnimatedLengthListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedLengthList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedLengthList::wrapperTypeInfo);
}

void V8Window::SVGAnimatedNumberConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedNumber_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedNumber::wrapperTypeInfo);
}

void V8Window::SVGAnimatedNumberListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedNumberList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedNumberList::wrapperTypeInfo);
}

void V8Window::SVGAnimatedPreserveAspectRatioConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedPreserveAspectRatio_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo);
}

void V8Window::SVGAnimatedRectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedRect::wrapperTypeInfo);
}

void V8Window::SVGAnimatedStringConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedString_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedString::wrapperTypeInfo);
}

void V8Window::SVGAnimatedTransformListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedTransformList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGAnimatedTransformList::wrapperTypeInfo);
}

void V8Window::SVGCircleElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGCircleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGCircleElement::wrapperTypeInfo);
}

void V8Window::SVGClipPathElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGClipPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGClipPathElement::wrapperTypeInfo);
}

void V8Window::SVGComponentTransferFunctionElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGComponentTransferFunctionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGComponentTransferFunctionElement::wrapperTypeInfo);
}

void V8Window::SVGDefsElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDefsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGDefsElement::wrapperTypeInfo);
}

void V8Window::SVGDescElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDescElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGDescElement::wrapperTypeInfo);
}

void V8Window::SVGElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGElement::wrapperTypeInfo);
}

void V8Window::SVGEllipseElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGEllipseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGEllipseElement::wrapperTypeInfo);
}

void V8Window::SVGFEBlendElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEBlendElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEBlendElement::wrapperTypeInfo);
}

void V8Window::SVGFEColorMatrixElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEColorMatrixElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEColorMatrixElement::wrapperTypeInfo);
}

void V8Window::SVGFEComponentTransferElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEComponentTransferElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEComponentTransferElement::wrapperTypeInfo);
}

void V8Window::SVGFECompositeElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFECompositeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFECompositeElement::wrapperTypeInfo);
}

void V8Window::SVGFEConvolveMatrixElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEConvolveMatrixElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEConvolveMatrixElement::wrapperTypeInfo);
}

void V8Window::SVGFEDiffuseLightingElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDiffuseLightingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEDiffuseLightingElement::wrapperTypeInfo);
}

void V8Window::SVGFEDisplacementMapElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDisplacementMapElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEDisplacementMapElement::wrapperTypeInfo);
}

void V8Window::SVGFEDistantLightElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDistantLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEDistantLightElement::wrapperTypeInfo);
}

void V8Window::SVGFEDropShadowElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDropShadowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEDropShadowElement::wrapperTypeInfo);
}

void V8Window::SVGFEFloodElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFloodElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEFloodElement::wrapperTypeInfo);
}

void V8Window::SVGFEFuncAElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncAElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEFuncAElement::wrapperTypeInfo);
}

void V8Window::SVGFEFuncBElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncBElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEFuncBElement::wrapperTypeInfo);
}

void V8Window::SVGFEFuncGElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEFuncGElement::wrapperTypeInfo);
}

void V8Window::SVGFEFuncRElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEFuncRElement::wrapperTypeInfo);
}

void V8Window::SVGFEGaussianBlurElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEGaussianBlurElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEGaussianBlurElement::wrapperTypeInfo);
}

void V8Window::SVGFEImageElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEImageElement::wrapperTypeInfo);
}

void V8Window::SVGFEMergeElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMergeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEMergeElement::wrapperTypeInfo);
}

void V8Window::SVGFEMergeNodeElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMergeNodeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEMergeNodeElement::wrapperTypeInfo);
}

void V8Window::SVGFEMorphologyElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMorphologyElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEMorphologyElement::wrapperTypeInfo);
}

void V8Window::SVGFEOffsetElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEOffsetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEOffsetElement::wrapperTypeInfo);
}

void V8Window::SVGFEPointLightElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEPointLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFEPointLightElement::wrapperTypeInfo);
}

void V8Window::SVGFESpecularLightingElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFESpecularLightingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFESpecularLightingElement::wrapperTypeInfo);
}

void V8Window::SVGFESpotLightElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFESpotLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFESpotLightElement::wrapperTypeInfo);
}

void V8Window::SVGFETileElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFETileElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFETileElement::wrapperTypeInfo);
}

void V8Window::SVGFETurbulenceElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFETurbulenceElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFETurbulenceElement::wrapperTypeInfo);
}

void V8Window::SVGFilterElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFilterElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGFilterElement::wrapperTypeInfo);
}

void V8Window::SVGForeignObjectElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGForeignObjectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGForeignObjectElement::wrapperTypeInfo);
}

void V8Window::SVGGElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGGElement::wrapperTypeInfo);
}

void V8Window::SVGGeometryElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGeometryElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGGeometryElement::wrapperTypeInfo);
}

void V8Window::SVGGradientElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGGradientElement::wrapperTypeInfo);
}

void V8Window::SVGGraphicsElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGraphicsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGGraphicsElement::wrapperTypeInfo);
}

void V8Window::SVGImageElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGImageElement::wrapperTypeInfo);
}

void V8Window::SVGLengthConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLength_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGLength::wrapperTypeInfo);
}

void V8Window::SVGLengthListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLengthList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGLengthList::wrapperTypeInfo);
}

void V8Window::SVGLineElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLineElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGLineElement::wrapperTypeInfo);
}

void V8Window::SVGLinearGradientElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLinearGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGLinearGradientElement::wrapperTypeInfo);
}

void V8Window::SVGMarkerElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMarkerElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGMarkerElement::wrapperTypeInfo);
}

void V8Window::SVGMaskElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMaskElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGMaskElement::wrapperTypeInfo);
}

void V8Window::SVGMatrixConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGMatrix::wrapperTypeInfo);
}

void V8Window::SVGMetadataElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMetadataElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGMetadataElement::wrapperTypeInfo);
}

void V8Window::SVGNumberConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGNumber_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGNumber::wrapperTypeInfo);
}

void V8Window::SVGNumberListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGNumberList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGNumberList::wrapperTypeInfo);
}

void V8Window::SVGPathElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPathElement::wrapperTypeInfo);
}

void V8Window::SVGPatternElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPatternElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPatternElement::wrapperTypeInfo);
}

void V8Window::SVGPointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPoint::wrapperTypeInfo);
}

void V8Window::SVGPointListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPointList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPointList::wrapperTypeInfo);
}

void V8Window::SVGPolygonElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPolygonElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPolygonElement::wrapperTypeInfo);
}

void V8Window::SVGPolylineElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPolylineElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPolylineElement::wrapperTypeInfo);
}

void V8Window::SVGPreserveAspectRatioConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPreserveAspectRatio_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGPreserveAspectRatio::wrapperTypeInfo);
}

void V8Window::SVGRadialGradientElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRadialGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGRadialGradientElement::wrapperTypeInfo);
}

void V8Window::SVGRectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGRect::wrapperTypeInfo);
}

void V8Window::SVGRectElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGRectElement::wrapperTypeInfo);
}

void V8Window::SVGSVGElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSVGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGSVGElement::wrapperTypeInfo);
}

void V8Window::SVGScriptElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGScriptElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGScriptElement::wrapperTypeInfo);
}

void V8Window::SVGSetElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGSetElement::wrapperTypeInfo);
}

void V8Window::SVGStopElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStopElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGStopElement::wrapperTypeInfo);
}

void V8Window::SVGStringListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGStringList::wrapperTypeInfo);
}

void V8Window::SVGStyleElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStyleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGStyleElement::wrapperTypeInfo);
}

void V8Window::SVGSwitchElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSwitchElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGSwitchElement::wrapperTypeInfo);
}

void V8Window::SVGSymbolElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSymbolElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGSymbolElement::wrapperTypeInfo);
}

void V8Window::SVGTSpanElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTSpanElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTSpanElement::wrapperTypeInfo);
}

void V8Window::SVGTextContentElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextContentElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTextContentElement::wrapperTypeInfo);
}

void V8Window::SVGTextElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTextElement::wrapperTypeInfo);
}

void V8Window::SVGTextPathElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTextPathElement::wrapperTypeInfo);
}

void V8Window::SVGTextPositioningElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextPositioningElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTextPositioningElement::wrapperTypeInfo);
}

void V8Window::SVGTitleElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTitleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTitleElement::wrapperTypeInfo);
}

void V8Window::SVGTransformConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTransform_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTransform::wrapperTypeInfo);
}

void V8Window::SVGTransformListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTransformList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGTransformList::wrapperTypeInfo);
}

void V8Window::SVGUnitTypesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGUnitTypes_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGUnitTypes::wrapperTypeInfo);
}

void V8Window::SVGUseElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGUseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGUseElement::wrapperTypeInfo);
}

void V8Window::SVGViewElementConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGViewElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SVGViewElement::wrapperTypeInfo);
}

void V8Window::ScreenConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Screen_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Screen::wrapperTypeInfo);
}

void V8Window::SecurityPolicyViolationEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SecurityPolicyViolationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SecurityPolicyViolationEvent::wrapperTypeInfo);
}

void V8Window::SelectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Selection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Selection::wrapperTypeInfo);
}

void V8Window::ShadowRootConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ShadowRoot_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ShadowRoot::wrapperTypeInfo);
}

void V8Window::StaticRangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StaticRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StaticRange::wrapperTypeInfo);
}

void V8Window::StyleSheetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StyleSheet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StyleSheet::wrapperTypeInfo);
}

void V8Window::StyleSheetListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StyleSheetList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StyleSheetList::wrapperTypeInfo);
}

void V8Window::TaskAttributionTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskAttributionTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TaskAttributionTiming::wrapperTypeInfo);
}

void V8Window::TextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Text_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Text::wrapperTypeInfo);
}

void V8Window::TextEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextEvent::wrapperTypeInfo);
}

void V8Window::TextMetricsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextMetrics_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextMetrics::wrapperTypeInfo);
}

void V8Window::TextTrackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextTrack::wrapperTypeInfo);
}

void V8Window::TextTrackCueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackCue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextTrackCue::wrapperTypeInfo);
}

void V8Window::TextTrackCueListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackCueList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextTrackCueList::wrapperTypeInfo);
}

void V8Window::TextTrackListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextTrackList::wrapperTypeInfo);
}

void V8Window::TimeRangesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TimeRanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TimeRanges::wrapperTypeInfo);
}

void V8Window::TouchConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Touch_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Touch::wrapperTypeInfo);
}

void V8Window::TouchEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TouchEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TouchEvent::wrapperTypeInfo);
}

void V8Window::TouchListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TouchList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TouchList::wrapperTypeInfo);
}

void V8Window::TrackEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrackEvent::wrapperTypeInfo);
}

void V8Window::TransitionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TransitionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TransitionEvent::wrapperTypeInfo);
}

void V8Window::TreeWalkerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TreeWalker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TreeWalker::wrapperTypeInfo);
}

void V8Window::UIEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_UIEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8UIEvent::wrapperTypeInfo);
}

void V8Window::URLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8URL::wrapperTypeInfo);
}

void V8Window::URLSearchParamsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8URLSearchParams::wrapperTypeInfo);
}

void V8Window::VTTCueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VTTCue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VTTCue::wrapperTypeInfo);
}

void V8Window::ValidityStateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ValidityState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ValidityState::wrapperTypeInfo);
}

void V8Window::WheelEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WheelEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WheelEvent::wrapperTypeInfo);
}

void V8Window::WindowConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Window_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Window::wrapperTypeInfo);
}

void V8Window::WorkerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Worker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Worker::wrapperTypeInfo);
}

void V8Window::XMLDocumentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLDocument_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLDocument::wrapperTypeInfo);
}

void V8Window::XMLHttpRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequest::wrapperTypeInfo);
}

void V8Window::XMLHttpRequestEventTargetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequestEventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequestEventTarget::wrapperTypeInfo);
}

void V8Window::XMLHttpRequestUploadConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequestUpload_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequestUpload::wrapperTypeInfo);
}

void V8Window::XMLSerializerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLSerializer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLSerializer::wrapperTypeInfo);
}

void V8Window::XPathEvaluatorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathEvaluator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XPathEvaluator::wrapperTypeInfo);
}

void V8Window::XPathExpressionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathExpression_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XPathExpression::wrapperTypeInfo);
}

void V8Window::XPathResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XPathResult::wrapperTypeInfo);
}

void V8Window::onabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onabort_Getter");

  DOMWindowV8Internal::onabortAttributeGetter(info);
}

void V8Window::onabortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onabort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onabortAttributeSetter(v8Value, info);
}

void V8Window::onblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onblur_Getter");

  DOMWindowV8Internal::onblurAttributeGetter(info);
}

void V8Window::onblurAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onblur_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onblurAttributeSetter(v8Value, info);
}

void V8Window::oncancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncancel_Getter");

  DOMWindowV8Internal::oncancelAttributeGetter(info);
}

void V8Window::oncancelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncancel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncancelAttributeSetter(v8Value, info);
}

void V8Window::oncanplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplay_Getter");

  DOMWindowV8Internal::oncanplayAttributeGetter(info);
}

void V8Window::oncanplayAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplay_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncanplayAttributeSetter(v8Value, info);
}

void V8Window::oncanplaythroughAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplaythrough_Getter");

  DOMWindowV8Internal::oncanplaythroughAttributeGetter(info);
}

void V8Window::oncanplaythroughAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplaythrough_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncanplaythroughAttributeSetter(v8Value, info);
}

void V8Window::onchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onchange_Getter");

  DOMWindowV8Internal::onchangeAttributeGetter(info);
}

void V8Window::onchangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onchange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onchangeAttributeSetter(v8Value, info);
}

void V8Window::onclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclick_Getter");

  DOMWindowV8Internal::onclickAttributeGetter(info);
}

void V8Window::onclickAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclick_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onclickAttributeSetter(v8Value, info);
}

void V8Window::oncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclose_Getter");

  DOMWindowV8Internal::oncloseAttributeGetter(info);
}

void V8Window::oncloseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclose_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncloseAttributeSetter(v8Value, info);
}

void V8Window::oncontextmenuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncontextmenu_Getter");

  DOMWindowV8Internal::oncontextmenuAttributeGetter(info);
}

void V8Window::oncontextmenuAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncontextmenu_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncontextmenuAttributeSetter(v8Value, info);
}

void V8Window::oncuechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncuechange_Getter");

  DOMWindowV8Internal::oncuechangeAttributeGetter(info);
}

void V8Window::oncuechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncuechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oncuechangeAttributeSetter(v8Value, info);
}

void V8Window::ondblclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondblclick_Getter");

  DOMWindowV8Internal::ondblclickAttributeGetter(info);
}

void V8Window::ondblclickAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondblclick_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondblclickAttributeSetter(v8Value, info);
}

void V8Window::ondragAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrag_Getter");

  DOMWindowV8Internal::ondragAttributeGetter(info);
}

void V8Window::ondragAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrag_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragAttributeSetter(v8Value, info);
}

void V8Window::ondragendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragend_Getter");

  DOMWindowV8Internal::ondragendAttributeGetter(info);
}

void V8Window::ondragendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragendAttributeSetter(v8Value, info);
}

void V8Window::ondragenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragenter_Getter");

  DOMWindowV8Internal::ondragenterAttributeGetter(info);
}

void V8Window::ondragenterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragenter_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragenterAttributeSetter(v8Value, info);
}

void V8Window::ondragleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragleave_Getter");

  DOMWindowV8Internal::ondragleaveAttributeGetter(info);
}

void V8Window::ondragleaveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragleave_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragleaveAttributeSetter(v8Value, info);
}

void V8Window::ondragoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragover_Getter");

  DOMWindowV8Internal::ondragoverAttributeGetter(info);
}

void V8Window::ondragoverAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragover_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragoverAttributeSetter(v8Value, info);
}

void V8Window::ondragstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragstart_Getter");

  DOMWindowV8Internal::ondragstartAttributeGetter(info);
}

void V8Window::ondragstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondragstartAttributeSetter(v8Value, info);
}

void V8Window::ondropAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrop_Getter");

  DOMWindowV8Internal::ondropAttributeGetter(info);
}

void V8Window::ondropAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrop_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondropAttributeSetter(v8Value, info);
}

void V8Window::ondurationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondurationchange_Getter");

  DOMWindowV8Internal::ondurationchangeAttributeGetter(info);
}

void V8Window::ondurationchangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondurationchange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ondurationchangeAttributeSetter(v8Value, info);
}

void V8Window::onemptiedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onemptied_Getter");

  DOMWindowV8Internal::onemptiedAttributeGetter(info);
}

void V8Window::onemptiedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onemptied_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onemptiedAttributeSetter(v8Value, info);
}

void V8Window::onendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onended_Getter");

  DOMWindowV8Internal::onendedAttributeGetter(info);
}

void V8Window::onendedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onended_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onendedAttributeSetter(v8Value, info);
}

void V8Window::onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onerror_Getter");

  DOMWindowV8Internal::onerrorAttributeGetter(info);
}

void V8Window::onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onerrorAttributeSetter(v8Value, info);
}

void V8Window::onfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onfocus_Getter");

  DOMWindowV8Internal::onfocusAttributeGetter(info);
}

void V8Window::onfocusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onfocus_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onfocusAttributeSetter(v8Value, info);
}

void V8Window::onformdataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onformdata_Getter");

  DOMWindowV8Internal::onformdataAttributeGetter(info);
}

void V8Window::onformdataAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onformdata_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onformdataAttributeSetter(v8Value, info);
}

void V8Window::oninputAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninput_Getter");

  DOMWindowV8Internal::oninputAttributeGetter(info);
}

void V8Window::oninputAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninput_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oninputAttributeSetter(v8Value, info);
}

void V8Window::oninvalidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninvalid_Getter");

  DOMWindowV8Internal::oninvalidAttributeGetter(info);
}

void V8Window::oninvalidAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninvalid_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::oninvalidAttributeSetter(v8Value, info);
}

void V8Window::onkeydownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeydown_Getter");

  DOMWindowV8Internal::onkeydownAttributeGetter(info);
}

void V8Window::onkeydownAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeydown_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onkeydownAttributeSetter(v8Value, info);
}

void V8Window::onkeypressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeypress_Getter");

  DOMWindowV8Internal::onkeypressAttributeGetter(info);
}

void V8Window::onkeypressAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeypress_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onkeypressAttributeSetter(v8Value, info);
}

void V8Window::onkeyupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeyup_Getter");

  DOMWindowV8Internal::onkeyupAttributeGetter(info);
}

void V8Window::onkeyupAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeyup_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onkeyupAttributeSetter(v8Value, info);
}

void V8Window::onloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onload_Getter");

  DOMWindowV8Internal::onloadAttributeGetter(info);
}

void V8Window::onloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onload_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onloadAttributeSetter(v8Value, info);
}

void V8Window::onloadeddataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadeddata_Getter");

  DOMWindowV8Internal::onloadeddataAttributeGetter(info);
}

void V8Window::onloadeddataAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadeddata_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onloadeddataAttributeSetter(v8Value, info);
}

void V8Window::onloadedmetadataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadedmetadata_Getter");

  DOMWindowV8Internal::onloadedmetadataAttributeGetter(info);
}

void V8Window::onloadedmetadataAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadedmetadata_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onloadedmetadataAttributeSetter(v8Value, info);
}

void V8Window::onloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadstart_Getter");

  DOMWindowV8Internal::onloadstartAttributeGetter(info);
}

void V8Window::onloadstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onloadstartAttributeSetter(v8Value, info);
}

void V8Window::onmousedownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousedown_Getter");

  DOMWindowV8Internal::onmousedownAttributeGetter(info);
}

void V8Window::onmousedownAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousedown_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmousedownAttributeSetter(v8Value, info);
}

void V8Window::onmouseenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseenter_Getter");

  DOMWindowV8Internal::onmouseenterAttributeGetter(info);
}

void V8Window::onmouseenterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseenter_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmouseenterAttributeSetter(v8Value, info);
}

void V8Window::onmouseleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseleave_Getter");

  DOMWindowV8Internal::onmouseleaveAttributeGetter(info);
}

void V8Window::onmouseleaveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseleave_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmouseleaveAttributeSetter(v8Value, info);
}

void V8Window::onmousemoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousemove_Getter");

  DOMWindowV8Internal::onmousemoveAttributeGetter(info);
}

void V8Window::onmousemoveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousemove_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmousemoveAttributeSetter(v8Value, info);
}

void V8Window::onmouseoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseout_Getter");

  DOMWindowV8Internal::onmouseoutAttributeGetter(info);
}

void V8Window::onmouseoutAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseout_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmouseoutAttributeSetter(v8Value, info);
}

void V8Window::onmouseoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseover_Getter");

  DOMWindowV8Internal::onmouseoverAttributeGetter(info);
}

void V8Window::onmouseoverAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseover_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmouseoverAttributeSetter(v8Value, info);
}

void V8Window::onmouseupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseup_Getter");

  DOMWindowV8Internal::onmouseupAttributeGetter(info);
}

void V8Window::onmouseupAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseup_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmouseupAttributeSetter(v8Value, info);
}

void V8Window::onmousewheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousewheel_Getter");

  DOMWindowV8Internal::onmousewheelAttributeGetter(info);
}

void V8Window::onmousewheelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousewheel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmousewheelAttributeSetter(v8Value, info);
}

void V8Window::onpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpause_Getter");

  DOMWindowV8Internal::onpauseAttributeGetter(info);
}

void V8Window::onpauseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpause_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpauseAttributeSetter(v8Value, info);
}

void V8Window::onplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplay_Getter");

  DOMWindowV8Internal::onplayAttributeGetter(info);
}

void V8Window::onplayAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplay_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onplayAttributeSetter(v8Value, info);
}

void V8Window::onplayingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplaying_Getter");

  DOMWindowV8Internal::onplayingAttributeGetter(info);
}

void V8Window::onplayingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplaying_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onplayingAttributeSetter(v8Value, info);
}

void V8Window::onprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onprogress_Getter");

  DOMWindowV8Internal::onprogressAttributeGetter(info);
}

void V8Window::onprogressAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onprogress_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onprogressAttributeSetter(v8Value, info);
}

void V8Window::onratechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onratechange_Getter");

  DOMWindowV8Internal::onratechangeAttributeGetter(info);
}

void V8Window::onratechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onratechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onratechangeAttributeSetter(v8Value, info);
}

void V8Window::onresetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onreset_Getter");

  DOMWindowV8Internal::onresetAttributeGetter(info);
}

void V8Window::onresetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onreset_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onresetAttributeSetter(v8Value, info);
}

void V8Window::onresizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onresize_Getter");

  DOMWindowV8Internal::onresizeAttributeGetter(info);
}

void V8Window::onresizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onresize_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onresizeAttributeSetter(v8Value, info);
}

void V8Window::onscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscroll_Getter");

  DOMWindowV8Internal::onscrollAttributeGetter(info);
}

void V8Window::onscrollAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscroll_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onscrollAttributeSetter(v8Value, info);
}

void V8Window::onseekedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeked_Getter");

  DOMWindowV8Internal::onseekedAttributeGetter(info);
}

void V8Window::onseekedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeked_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onseekedAttributeSetter(v8Value, info);
}

void V8Window::onseekingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeking_Getter");

  DOMWindowV8Internal::onseekingAttributeGetter(info);
}

void V8Window::onseekingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeking_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onseekingAttributeSetter(v8Value, info);
}

void V8Window::onselectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselect_Getter");

  DOMWindowV8Internal::onselectAttributeGetter(info);
}

void V8Window::onselectAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselect_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onselectAttributeSetter(v8Value, info);
}

void V8Window::onstalledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstalled_Getter");

  DOMWindowV8Internal::onstalledAttributeGetter(info);
}

void V8Window::onstalledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstalled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onstalledAttributeSetter(v8Value, info);
}

void V8Window::onsubmitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsubmit_Getter");

  DOMWindowV8Internal::onsubmitAttributeGetter(info);
}

void V8Window::onsubmitAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsubmit_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onsubmitAttributeSetter(v8Value, info);
}

void V8Window::onsuspendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsuspend_Getter");

  DOMWindowV8Internal::onsuspendAttributeGetter(info);
}

void V8Window::onsuspendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsuspend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onsuspendAttributeSetter(v8Value, info);
}

void V8Window::ontimeupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontimeupdate_Getter");

  DOMWindowV8Internal::ontimeupdateAttributeGetter(info);
}

void V8Window::ontimeupdateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontimeupdate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontimeupdateAttributeSetter(v8Value, info);
}

void V8Window::ontoggleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontoggle_Getter");

  DOMWindowV8Internal::ontoggleAttributeGetter(info);
}

void V8Window::ontoggleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontoggle_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontoggleAttributeSetter(v8Value, info);
}

void V8Window::onvolumechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onvolumechange_Getter");

  DOMWindowV8Internal::onvolumechangeAttributeGetter(info);
}

void V8Window::onvolumechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onvolumechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onvolumechangeAttributeSetter(v8Value, info);
}

void V8Window::onwaitingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwaiting_Getter");

  DOMWindowV8Internal::onwaitingAttributeGetter(info);
}

void V8Window::onwaitingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwaiting_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwaitingAttributeSetter(v8Value, info);
}

void V8Window::onwheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwheel_Getter");

  DOMWindowV8Internal::onwheelAttributeGetter(info);
}

void V8Window::onwheelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwheel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onwheelAttributeSetter(v8Value, info);
}

void V8Window::onauxclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onauxclick_Getter");

  DOMWindowV8Internal::onauxclickAttributeGetter(info);
}

void V8Window::onauxclickAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onauxclick_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onauxclickAttributeSetter(v8Value, info);
}

void V8Window::ongotpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ongotpointercapture_Getter");

  DOMWindowV8Internal::ongotpointercaptureAttributeGetter(info);
}

void V8Window::ongotpointercaptureAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ongotpointercapture_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ongotpointercaptureAttributeSetter(v8Value, info);
}

void V8Window::onlostpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlostpointercapture_Getter");

  DOMWindowV8Internal::onlostpointercaptureAttributeGetter(info);
}

void V8Window::onlostpointercaptureAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlostpointercapture_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onlostpointercaptureAttributeSetter(v8Value, info);
}

void V8Window::onpointerdownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerdown_Getter");

  DOMWindowV8Internal::onpointerdownAttributeGetter(info);
}

void V8Window::onpointerdownAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerdown_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointerdownAttributeSetter(v8Value, info);
}

void V8Window::onpointermoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointermove_Getter");

  DOMWindowV8Internal::onpointermoveAttributeGetter(info);
}

void V8Window::onpointermoveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointermove_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointermoveAttributeSetter(v8Value, info);
}

void V8Window::onpointerupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerup_Getter");

  DOMWindowV8Internal::onpointerupAttributeGetter(info);
}

void V8Window::onpointerupAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerup_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointerupAttributeSetter(v8Value, info);
}

void V8Window::onpointercancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointercancel_Getter");

  DOMWindowV8Internal::onpointercancelAttributeGetter(info);
}

void V8Window::onpointercancelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointercancel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointercancelAttributeSetter(v8Value, info);
}

void V8Window::onpointeroverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerover_Getter");

  DOMWindowV8Internal::onpointeroverAttributeGetter(info);
}

void V8Window::onpointeroverAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerover_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointeroverAttributeSetter(v8Value, info);
}

void V8Window::onpointeroutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerout_Getter");

  DOMWindowV8Internal::onpointeroutAttributeGetter(info);
}

void V8Window::onpointeroutAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerout_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointeroutAttributeSetter(v8Value, info);
}

void V8Window::onpointerenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerenter_Getter");

  DOMWindowV8Internal::onpointerenterAttributeGetter(info);
}

void V8Window::onpointerenterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerenter_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointerenterAttributeSetter(v8Value, info);
}

void V8Window::onpointerleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerleave_Getter");

  DOMWindowV8Internal::onpointerleaveAttributeGetter(info);
}

void V8Window::onpointerleaveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerleave_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpointerleaveAttributeSetter(v8Value, info);
}

void V8Window::ontouchcancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchcancel_Getter");

  DOMWindowV8Internal::ontouchcancelAttributeGetter(info);
}

void V8Window::ontouchcancelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchcancel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontouchcancelAttributeSetter(v8Value, info);
}

void V8Window::ontouchendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchend_Getter");

  DOMWindowV8Internal::ontouchendAttributeGetter(info);
}

void V8Window::ontouchendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontouchendAttributeSetter(v8Value, info);
}

void V8Window::ontouchmoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchmove_Getter");

  DOMWindowV8Internal::ontouchmoveAttributeGetter(info);
}

void V8Window::ontouchmoveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchmove_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontouchmoveAttributeSetter(v8Value, info);
}

void V8Window::ontouchstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchstart_Getter");

  DOMWindowV8Internal::ontouchstartAttributeGetter(info);
}

void V8Window::ontouchstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ontouchstartAttributeSetter(v8Value, info);
}

void V8Window::onafterprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onafterprint_Getter");

  DOMWindowV8Internal::onafterprintAttributeGetter(info);
}

void V8Window::onafterprintAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onafterprint_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onafterprintAttributeSetter(v8Value, info);
}

void V8Window::onbeforeprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeprint_Getter");

  DOMWindowV8Internal::onbeforeprintAttributeGetter(info);
}

void V8Window::onbeforeprintAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeprint_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onbeforeprintAttributeSetter(v8Value, info);
}

void V8Window::onbeforeunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeunload_Getter");

  DOMWindowV8Internal::onbeforeunloadAttributeGetter(info);
}

void V8Window::onbeforeunloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeunload_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onbeforeunloadAttributeSetter(v8Value, info);
}

void V8Window::onhashchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onhashchange_Getter");

  DOMWindowV8Internal::onhashchangeAttributeGetter(info);
}

void V8Window::onhashchangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onhashchange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onhashchangeAttributeSetter(v8Value, info);
}

void V8Window::onlanguagechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlanguagechange_Getter");

  DOMWindowV8Internal::onlanguagechangeAttributeGetter(info);
}

void V8Window::onlanguagechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlanguagechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onlanguagechangeAttributeSetter(v8Value, info);
}

void V8Window::onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessage_Getter");

  DOMWindowV8Internal::onmessageAttributeGetter(info);
}

void V8Window::onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessage_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmessageAttributeSetter(v8Value, info);
}

void V8Window::onmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessageerror_Getter");

  DOMWindowV8Internal::onmessageerrorAttributeGetter(info);
}

void V8Window::onmessageerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessageerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onmessageerrorAttributeSetter(v8Value, info);
}

void V8Window::onofflineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoffline_Getter");

  DOMWindowV8Internal::onofflineAttributeGetter(info);
}

void V8Window::onofflineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoffline_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onofflineAttributeSetter(v8Value, info);
}

void V8Window::ononlineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ononline_Getter");

  DOMWindowV8Internal::ononlineAttributeGetter(info);
}

void V8Window::ononlineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ononline_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::ononlineAttributeSetter(v8Value, info);
}

void V8Window::onpagehideAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpagehide_Getter");

  DOMWindowV8Internal::onpagehideAttributeGetter(info);
}

void V8Window::onpagehideAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpagehide_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpagehideAttributeSetter(v8Value, info);
}

void V8Window::onpageshowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpageshow_Getter");

  DOMWindowV8Internal::onpageshowAttributeGetter(info);
}

void V8Window::onpageshowAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpageshow_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpageshowAttributeSetter(v8Value, info);
}

void V8Window::onpopstateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpopstate_Getter");

  DOMWindowV8Internal::onpopstateAttributeGetter(info);
}

void V8Window::onpopstateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpopstate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onpopstateAttributeSetter(v8Value, info);
}

void V8Window::onrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onrejectionhandled_Getter");

  DOMWindowV8Internal::onrejectionhandledAttributeGetter(info);
}

void V8Window::onrejectionhandledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onrejectionhandled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onrejectionhandledAttributeSetter(v8Value, info);
}

void V8Window::onstorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstorage_Getter");

  DOMWindowV8Internal::onstorageAttributeGetter(info);
}

void V8Window::onstorageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstorage_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onstorageAttributeSetter(v8Value, info);
}

void V8Window::onunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunhandledrejection_Getter");

  DOMWindowV8Internal::onunhandledrejectionAttributeGetter(info);
}

void V8Window::onunhandledrejectionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunhandledrejection_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onunhandledrejectionAttributeSetter(v8Value, info);
}

void V8Window::onunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunload_Getter");

  DOMWindowV8Internal::onunloadAttributeGetter(info);
}

void V8Window::onunloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunload_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::onunloadAttributeSetter(v8Value, info);
}

void V8Window::performanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_performance_Getter");

  DOMWindowV8Internal::performanceAttributeGetter(info);
}

void V8Window::performanceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_performance_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowV8Internal::performanceAttributeSetter(v8Value, info);
}

void V8Window::closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_close");

  DOMWindowV8Internal::closeMethod(info);
}

void V8Window::closeOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_close_OriginSafeMethodGetter");

  DOMWindowV8Internal::closeOriginSafeMethodGetter(info);
}

void V8Window::stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_stop");

  DOMWindowV8Internal::stopMethod(info);
}

void V8Window::focusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_focus");

  DOMWindowV8Internal::focusMethod(info);
}

void V8Window::focusOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_focus_OriginSafeMethodGetter");

  DOMWindowV8Internal::focusOriginSafeMethodGetter(info);
}

void V8Window::blurMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_blur");

  DOMWindowV8Internal::blurMethod(info);
}

void V8Window::blurOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_blur_OriginSafeMethodGetter");

  DOMWindowV8Internal::blurOriginSafeMethodGetter(info);
}

void V8Window::openMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_open");

  DOMWindowV8Internal::openMethod(info);
}

void V8Window::alertMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_alert");

  DOMWindowV8Internal::alertMethod(info);
}

void V8Window::confirmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_confirm");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_Confirm_Method);
  DOMWindowV8Internal::confirmMethod(info);
}

void V8Window::promptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_prompt");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_Prompt_Method);
  DOMWindowV8Internal::promptMethod(info);
}

void V8Window::printMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_print");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_Print_Method);
  DOMWindowV8Internal::printMethod(info);
}

void V8Window::requestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_requestAnimationFrame");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUnprefixedRequestAnimationFrame);
  DOMWindowV8Internal::requestAnimationFrameMethod(info);
}

void V8Window::cancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cancelAnimationFrame");

  DOMWindowV8Internal::cancelAnimationFrameMethod(info);
}

void V8Window::requestIdleCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_requestIdleCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_RequestIdleCallback_Method);
  DOMWindowV8Internal::requestIdleCallbackMethod(info);
}

void V8Window::cancelIdleCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cancelIdleCallback");

  DOMWindowV8Internal::cancelIdleCallbackMethod(info);
}

void V8Window::postMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_postMessage");

  V8Window::postMessageMethodCustom(info);
}

void V8Window::postMessageOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_postMessage_OriginSafeMethodGetter");

  DOMWindowV8Internal::postMessageOriginSafeMethodGetter(info);
}

void V8Window::captureEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_captureEvents");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowCaptureEvents);
  DOMWindowV8Internal::captureEventsMethod(info);
}

void V8Window::releaseEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_releaseEvents");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowReleaseEvents);
  DOMWindowV8Internal::releaseEventsMethod(info);
}

void V8Window::getComputedStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getComputedStyle");

  DOMWindowV8Internal::getComputedStyleMethod(info);
}

void V8Window::matchMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_matchMedia");

  DOMWindowV8Internal::matchMediaMethod(info);
}

void V8Window::moveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_moveTo");

  DOMWindowV8Internal::moveToMethod(info);
}

void V8Window::moveByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_moveBy");

  DOMWindowV8Internal::moveByMethod(info);
}

void V8Window::resizeToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_resizeTo");

  DOMWindowV8Internal::resizeToMethod(info);
}

void V8Window::resizeByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_resizeBy");

  DOMWindowV8Internal::resizeByMethod(info);
}

void V8Window::scrollMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scroll");

  DOMWindowV8Internal::scrollMethod(info);
}

void V8Window::scrollToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollTo");

  DOMWindowV8Internal::scrollToMethod(info);
}

void V8Window::scrollByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollBy");

  DOMWindowV8Internal::scrollByMethod(info);
}

void V8Window::getSelectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getSelection");

  DOMWindowV8Internal::getSelectionMethod(info);
}

void V8Window::getComputedAccessibleNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getComputedAccessibleNode");

  DOMWindowV8Internal::getComputedAccessibleNodeMethod(info);
}

void V8Window::findMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_find");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowFind);
  DOMWindowV8Internal::findMethod(info);
}

void V8Window::webkitRequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRequestAnimationFrame");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedRequestAnimationFrame);
  DOMWindowV8Internal::webkitRequestAnimationFrameMethod(info);
}

void V8Window::webkitCancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitCancelAnimationFrame");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedCancelAnimationFrame);
  DOMWindowV8Internal::webkitCancelAnimationFrameMethod(info);
}

void V8Window::fetchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_fetch");

  DOMWindowV8Internal::fetchMethod(info);
}

void V8Window::btoaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_btoa");

  DOMWindowV8Internal::btoaMethod(info);
}

void V8Window::atobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_atob");

  DOMWindowV8Internal::atobMethod(info);
}

void V8Window::setTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_setTimeout");

  DOMWindowV8Internal::setTimeoutMethod(info);
}

void V8Window::clearTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clearTimeout");

  DOMWindowV8Internal::clearTimeoutMethod(info);
}

void V8Window::setIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_setInterval");

  DOMWindowV8Internal::setIntervalMethod(info);
}

void V8Window::clearIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clearInterval");

  DOMWindowV8Internal::clearIntervalMethod(info);
}

void V8Window::createImageBitmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_createImageBitmap");

  DOMWindowV8Internal::createImageBitmapMethod(info);
}

void V8Window::DOMWindowOriginSafeMethodSetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info) {
  DOMWindowV8Internal::DOMWindowOriginSafeMethodSetter(name, v8Value, info);
}
void V8Window::namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  V8Window::namedPropertyGetterCustom(propertyName, info);
}

void V8Window::indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IndexedPropertyGetter");

  DOMWindowV8Internal::indexedPropertyGetter(index, info);
}

void V8Window::indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMWindowV8Internal::indexedPropertyDescriptor(index, info);
}

void V8Window::indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exceptionState(info.GetIsolate(),
                                  ExceptionState::kIndexedSetterContext,
                                  "Window");
    exceptionState.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8Window::indexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exceptionState(info.GetIsolate(),
                                  ExceptionState::kIndexedSetterContext,
                                  "Window");
    exceptionState.ThrowTypeError("Index property setter is not supported.");
  }
}

bool V8Window::securityCheck(v8::Local<v8::Context> accessingContext, v8::Local<v8::Object> accessedObject, v8::Local<v8::Value> data) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::Local<v8::Object> window = V8Window::findInstanceInPrototypeChain(accessedObject, isolate);
  if (window.IsEmpty())
    return false;  // the frame is gone.

  const DOMWindow* targetWindow = V8Window::ToImpl(window);
  return BindingSecurity::ShouldAllowAccessTo(ToLocalDOMWindow(accessingContext), targetWindow, BindingSecurity::ErrorReportOption::kDoNotReport);
}

void V8Window::crossOriginNamedGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CrossOriginNamedGetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : DOMWindowV8Internal::kCrossOriginAttributeTable) {
    if (propertyName == attribute.name && attribute.getter) {
      attribute.getter(info);
      return;
    }
  }

  V8Window::namedPropertyGetterCustom(propertyName, info);
}

void V8Window::crossOriginNamedSetter(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CrossOriginNamedSetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : DOMWindowV8Internal::kCrossOriginAttributeTable) {
    if (propertyName == attribute.name && attribute.setter) {
      attribute.setter(value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
      return;
    }
  }

  BindingSecurity::FailedAccessCheckFor(
      info.GetIsolate(),
      &V8Window::wrapperTypeInfo,
      info.Holder());
}

void V8Window::crossOriginNamedEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  Vector<String> names;
  for (const auto& attribute : DOMWindowV8Internal::kCrossOriginAttributeTable)
    names.push_back(attribute.name);

  // Use the current context as the creation context, as a cross-origin access
  // may involve an object that does not have a creation context.
  V8SetReturnValue(info,
                   ToV8(names, info.GetIsolate()->GetCurrentContext()->Global(),
                        info.GetIsolate()).As<v8::Array>());
}

void V8Window::crossOriginIndexedGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMWindowV8Internal::indexedPropertyGetter(index, info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8WindowAttributes[] = {
    { "location", V8Window::locationAttributeGetterCallback, V8Window::locationAttributeSetterCallback, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "closed", V8Window::closedAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "length", V8Window::lengthAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "top", V8Window::topAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "opener", V8Window::openerAttributeGetterCallback, V8Window::openerAttributeSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "parent", V8Window::parentAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebKitTransitionEvent", V8Window::WebKitTransitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebKitAnimationEvent", V8Window::WebKitAnimationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitURL", V8Window::webkitURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebKitMutationObserver", V8Window::WebKitMutationObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8WindowLazyDataAttributes[] = {
    { "window", V8Window::windowAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "self", V8Window::selfAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "frames", V8Window::framesAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebKitCSSMatrix", V8Window::WebKitCSSMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AbortController", V8Window::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8Window::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AnimationEvent", V8Window::AnimationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Attr", V8Window::AttrConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BarProp", V8Window::BarPropConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BeforeUnloadEvent", V8Window::BeforeUnloadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8Window::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CDATASection", V8Window::CDATASectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSConditionRule", V8Window::CSSConditionRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSS", V8Window::CSSConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSFontFaceRule", V8Window::CSSFontFaceRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSGroupingRule", V8Window::CSSGroupingRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSImportRule", V8Window::CSSImportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSKeyframeRule", V8Window::CSSKeyframeRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSKeyframesRule", V8Window::CSSKeyframesRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSMediaRule", V8Window::CSSMediaRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSNamespaceRule", V8Window::CSSNamespaceRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSPageRule", V8Window::CSSPageRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSRule", V8Window::CSSRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSRuleList", V8Window::CSSRuleListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleDeclaration", V8Window::CSSStyleDeclarationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleRule", V8Window::CSSStyleRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleSheet", V8Window::CSSStyleSheetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CSSSupportsRule", V8Window::CSSSupportsRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CharacterData", V8Window::CharacterDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ClipboardEvent", V8Window::ClipboardEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Comment", V8Window::CommentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CompositionEvent", V8Window::CompositionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CustomElementRegistry", V8Window::CustomElementRegistryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8Window::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8Window::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMImplementation", V8Window::DOMImplementationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8Window::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8Window::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMParser", V8Window::DOMParserConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8Window::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8Window::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8Window::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8Window::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMRectList", V8Window::DOMRectListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8Window::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8Window::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMStringMap", V8Window::DOMStringMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMTokenList", V8Window::DOMTokenListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DataTransfer", V8Window::DataTransferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DataTransferItem", V8Window::DataTransferItemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DataTransferItemList", V8Window::DataTransferItemListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DataView", V8Window::DataViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Document", V8Window::DocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DocumentFragment", V8Window::DocumentFragmentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DocumentType", V8Window::DocumentTypeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DragEvent", V8Window::DragEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Element", V8Window::ElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ErrorEvent", V8Window::ErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Event", V8Window::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8Window::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "File", V8Window::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8Window::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8Window::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FocusEvent", V8Window::FocusEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FontFaceSetLoadEvent", V8Window::FontFaceSetLoadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8Window::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLAllCollection", V8Window::HTMLAllCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLAnchorElement", V8Window::HTMLAnchorElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLAreaElement", V8Window::HTMLAreaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLAudioElement", V8Window::HTMLAudioElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Audio", V8Window::AudioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLBRElement", V8Window::HTMLBRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLBaseElement", V8Window::HTMLBaseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLBodyElement", V8Window::HTMLBodyElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLButtonElement", V8Window::HTMLButtonElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLCanvasElement", V8Window::HTMLCanvasElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLCollection", V8Window::HTMLCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLContentElement", V8Window::HTMLContentElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDListElement", V8Window::HTMLDListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDataElement", V8Window::HTMLDataElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDataListElement", V8Window::HTMLDataListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDetailsElement", V8Window::HTMLDetailsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDialogElement", V8Window::HTMLDialogElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDirectoryElement", V8Window::HTMLDirectoryElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDivElement", V8Window::HTMLDivElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLDocument", V8Window::HTMLDocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLElement", V8Window::HTMLElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLEmbedElement", V8Window::HTMLEmbedElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFieldSetElement", V8Window::HTMLFieldSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFontElement", V8Window::HTMLFontElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFormControlsCollection", V8Window::HTMLFormControlsCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFormElement", V8Window::HTMLFormElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFrameElement", V8Window::HTMLFrameElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLFrameSetElement", V8Window::HTMLFrameSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLHRElement", V8Window::HTMLHRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLHeadElement", V8Window::HTMLHeadElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLHeadingElement", V8Window::HTMLHeadingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLHtmlElement", V8Window::HTMLHtmlElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLIFrameElement", V8Window::HTMLIFrameElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLImageElement", V8Window::HTMLImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Image", V8Window::ImageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLInputElement", V8Window::HTMLInputElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLLIElement", V8Window::HTMLLIElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLLabelElement", V8Window::HTMLLabelElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLLegendElement", V8Window::HTMLLegendElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLLinkElement", V8Window::HTMLLinkElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMapElement", V8Window::HTMLMapElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMarqueeElement", V8Window::HTMLMarqueeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMediaElement", V8Window::HTMLMediaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMenuElement", V8Window::HTMLMenuElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMetaElement", V8Window::HTMLMetaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLMeterElement", V8Window::HTMLMeterElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLModElement", V8Window::HTMLModElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLOListElement", V8Window::HTMLOListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLObjectElement", V8Window::HTMLObjectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptGroupElement", V8Window::HTMLOptGroupElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptionElement", V8Window::HTMLOptionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Option", V8Window::OptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptionsCollection", V8Window::HTMLOptionsCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLOutputElement", V8Window::HTMLOutputElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLParagraphElement", V8Window::HTMLParagraphElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLParamElement", V8Window::HTMLParamElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLPictureElement", V8Window::HTMLPictureElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLPreElement", V8Window::HTMLPreElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLProgressElement", V8Window::HTMLProgressElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLQuoteElement", V8Window::HTMLQuoteElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLScriptElement", V8Window::HTMLScriptElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLSelectElement", V8Window::HTMLSelectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLShadowElement", V8Window::HTMLShadowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLSlotElement", V8Window::HTMLSlotElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLSourceElement", V8Window::HTMLSourceElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLSpanElement", V8Window::HTMLSpanElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLStyleElement", V8Window::HTMLStyleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableCaptionElement", V8Window::HTMLTableCaptionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableCellElement", V8Window::HTMLTableCellElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableColElement", V8Window::HTMLTableColElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableElement", V8Window::HTMLTableElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableRowElement", V8Window::HTMLTableRowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableSectionElement", V8Window::HTMLTableSectionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTemplateElement", V8Window::HTMLTemplateElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTextAreaElement", V8Window::HTMLTextAreaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTimeElement", V8Window::HTMLTimeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTitleElement", V8Window::HTMLTitleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLTrackElement", V8Window::HTMLTrackElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLUListElement", V8Window::HTMLUListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLUnknownElement", V8Window::HTMLUnknownElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HTMLVideoElement", V8Window::HTMLVideoElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "HashChangeEvent", V8Window::HashChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8Window::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "History", V8Window::HistoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IdleDeadline", V8Window::IdleDeadlineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8Window::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8Window::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "InputDeviceCapabilities", V8Window::InputDeviceCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "InputEvent", V8Window::InputEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IntersectionObserver", V8Window::IntersectionObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IntersectionObserverEntry", V8Window::IntersectionObserverEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "KeyboardEvent", V8Window::KeyboardEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Location", V8Window::LocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaError", V8Window::MediaErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaList", V8Window::MediaListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaQueryList", V8Window::MediaQueryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaQueryListEvent", V8Window::MediaQueryListEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8Window::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8Window::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8Window::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MouseEvent", V8Window::MouseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MutationEvent", V8Window::MutationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MutationObserver", V8Window::MutationObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MutationRecord", V8Window::MutationRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NamedNodeMap", V8Window::NamedNodeMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Navigator", V8Window::NavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Node", V8Window::NodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NodeFilter", V8Window::NodeFilterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NodeIterator", V8Window::NodeIteratorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NodeList", V8Window::NodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PageTransitionEvent", V8Window::PageTransitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8Window::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8Window::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceLongTaskTiming", V8Window::PerformanceLongTaskTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMark", V8Window::PerformanceMarkConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMeasure", V8Window::PerformanceMeasureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceNavigation", V8Window::PerformanceNavigationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8Window::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8Window::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8Window::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceTiming", V8Window::PerformanceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PointerEvent", V8Window::PointerEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PopStateEvent", V8Window::PopStateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ProcessingInstruction", V8Window::ProcessingInstructionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ProgressEvent", V8Window::ProgressEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8Window::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RadioNodeList", V8Window::RadioNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Range", V8Window::RangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Request", V8Window::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Response", V8Window::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAElement", V8Window::SVGAElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAngle", V8Window::SVGAngleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateElement", V8Window::SVGAnimateElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateMotionElement", V8Window::SVGAnimateMotionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateTransformElement", V8Window::SVGAnimateTransformElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedAngle", V8Window::SVGAnimatedAngleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedBoolean", V8Window::SVGAnimatedBooleanConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedEnumeration", V8Window::SVGAnimatedEnumerationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedInteger", V8Window::SVGAnimatedIntegerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedLength", V8Window::SVGAnimatedLengthConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedLengthList", V8Window::SVGAnimatedLengthListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedNumber", V8Window::SVGAnimatedNumberConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedNumberList", V8Window::SVGAnimatedNumberListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedPreserveAspectRatio", V8Window::SVGAnimatedPreserveAspectRatioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedRect", V8Window::SVGAnimatedRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedString", V8Window::SVGAnimatedStringConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedTransformList", V8Window::SVGAnimatedTransformListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGCircleElement", V8Window::SVGCircleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGClipPathElement", V8Window::SVGClipPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGComponentTransferFunctionElement", V8Window::SVGComponentTransferFunctionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGDefsElement", V8Window::SVGDefsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGDescElement", V8Window::SVGDescElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGElement", V8Window::SVGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGEllipseElement", V8Window::SVGEllipseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEBlendElement", V8Window::SVGFEBlendElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEColorMatrixElement", V8Window::SVGFEColorMatrixElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEComponentTransferElement", V8Window::SVGFEComponentTransferElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFECompositeElement", V8Window::SVGFECompositeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEConvolveMatrixElement", V8Window::SVGFEConvolveMatrixElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDiffuseLightingElement", V8Window::SVGFEDiffuseLightingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDisplacementMapElement", V8Window::SVGFEDisplacementMapElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDistantLightElement", V8Window::SVGFEDistantLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDropShadowElement", V8Window::SVGFEDropShadowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFloodElement", V8Window::SVGFEFloodElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncAElement", V8Window::SVGFEFuncAElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncBElement", V8Window::SVGFEFuncBElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncGElement", V8Window::SVGFEFuncGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncRElement", V8Window::SVGFEFuncRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEGaussianBlurElement", V8Window::SVGFEGaussianBlurElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEImageElement", V8Window::SVGFEImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMergeElement", V8Window::SVGFEMergeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMergeNodeElement", V8Window::SVGFEMergeNodeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMorphologyElement", V8Window::SVGFEMorphologyElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEOffsetElement", V8Window::SVGFEOffsetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFEPointLightElement", V8Window::SVGFEPointLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFESpecularLightingElement", V8Window::SVGFESpecularLightingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFESpotLightElement", V8Window::SVGFESpotLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFETileElement", V8Window::SVGFETileElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFETurbulenceElement", V8Window::SVGFETurbulenceElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGFilterElement", V8Window::SVGFilterElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGForeignObjectElement", V8Window::SVGForeignObjectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGGElement", V8Window::SVGGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGGeometryElement", V8Window::SVGGeometryElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGGradientElement", V8Window::SVGGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGGraphicsElement", V8Window::SVGGraphicsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGImageElement", V8Window::SVGImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGLength", V8Window::SVGLengthConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGLengthList", V8Window::SVGLengthListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGLineElement", V8Window::SVGLineElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGLinearGradientElement", V8Window::SVGLinearGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGMarkerElement", V8Window::SVGMarkerElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGMaskElement", V8Window::SVGMaskElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGMatrix", V8Window::SVGMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGMetadataElement", V8Window::SVGMetadataElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGNumber", V8Window::SVGNumberConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGNumberList", V8Window::SVGNumberListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPathElement", V8Window::SVGPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPatternElement", V8Window::SVGPatternElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPoint", V8Window::SVGPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPointList", V8Window::SVGPointListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPolygonElement", V8Window::SVGPolygonElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPolylineElement", V8Window::SVGPolylineElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGPreserveAspectRatio", V8Window::SVGPreserveAspectRatioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGRadialGradientElement", V8Window::SVGRadialGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGRect", V8Window::SVGRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGRectElement", V8Window::SVGRectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGSVGElement", V8Window::SVGSVGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGScriptElement", V8Window::SVGScriptElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGSetElement", V8Window::SVGSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGStopElement", V8Window::SVGStopElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGStringList", V8Window::SVGStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGStyleElement", V8Window::SVGStyleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGSwitchElement", V8Window::SVGSwitchElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGSymbolElement", V8Window::SVGSymbolElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTSpanElement", V8Window::SVGTSpanElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTextContentElement", V8Window::SVGTextContentElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTextElement", V8Window::SVGTextElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTextPathElement", V8Window::SVGTextPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTextPositioningElement", V8Window::SVGTextPositioningElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTitleElement", V8Window::SVGTitleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTransform", V8Window::SVGTransformConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGTransformList", V8Window::SVGTransformListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGUnitTypes", V8Window::SVGUnitTypesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGUseElement", V8Window::SVGUseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SVGViewElement", V8Window::SVGViewElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Screen", V8Window::ScreenConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SecurityPolicyViolationEvent", V8Window::SecurityPolicyViolationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Selection", V8Window::SelectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ShadowRoot", V8Window::ShadowRootConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "StaticRange", V8Window::StaticRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "StyleSheet", V8Window::StyleSheetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "StyleSheetList", V8Window::StyleSheetListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TaskAttributionTiming", V8Window::TaskAttributionTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Text", V8Window::TextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextEvent", V8Window::TextEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextMetrics", V8Window::TextMetricsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextTrack", V8Window::TextTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextTrackCue", V8Window::TextTrackCueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextTrackCueList", V8Window::TextTrackCueListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextTrackList", V8Window::TextTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TimeRanges", V8Window::TimeRangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Touch", V8Window::TouchConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TouchEvent", V8Window::TouchEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TouchList", V8Window::TouchListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TrackEvent", V8Window::TrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TransitionEvent", V8Window::TransitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TreeWalker", V8Window::TreeWalkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "UIEvent", V8Window::UIEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "URL", V8Window::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8Window::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "VTTCue", V8Window::VTTCueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ValidityState", V8Window::ValidityStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WheelEvent", V8Window::WheelEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Window", V8Window::WindowConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Worker", V8Window::WorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLDocument", V8Window::XMLDocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequest", V8Window::XMLHttpRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestEventTarget", V8Window::XMLHttpRequestEventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestUpload", V8Window::XMLHttpRequestUploadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLSerializer", V8Window::XMLSerializerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XPathEvaluator", V8Window::XPathEvaluatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XPathExpression", V8Window::XPathExpressionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XPathResult", V8Window::XPathResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static const V8DOMConfiguration::AccessorConfiguration V8WindowAccessors[] = {
    { "document", V8Window::documentAttributeGetterCallback, nullptr, V8PrivateProperty::kWindowDocumentCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "origin", V8Window::originAttributeGetterCallback, V8Window::originAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "name", V8Window::nameAttributeGetterCallback, V8Window::nameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "history", V8Window::historyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "locationbar", V8Window::locationbarAttributeGetterCallback, V8Window::locationbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "menubar", V8Window::menubarAttributeGetterCallback, V8Window::menubarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "personalbar", V8Window::personalbarAttributeGetterCallback, V8Window::personalbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollbars", V8Window::scrollbarsAttributeGetterCallback, V8Window::scrollbarsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "statusbar", V8Window::statusbarAttributeGetterCallback, V8Window::statusbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "toolbar", V8Window::toolbarAttributeGetterCallback, V8Window::toolbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "status", V8Window::statusAttributeGetterCallback, V8Window::statusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "frameElement", V8Window::frameElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "navigator", V8Window::navigatorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "customElements", V8Window::customElementsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "external", V8Window::externalAttributeGetterCallback, V8Window::externalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "screen", V8Window::screenAttributeGetterCallback, V8Window::screenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "innerWidth", V8Window::innerWidthAttributeGetterCallback, V8Window::innerWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "innerHeight", V8Window::innerHeightAttributeGetterCallback, V8Window::innerHeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollX", V8Window::scrollXAttributeGetterCallback, V8Window::scrollXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pageXOffset", V8Window::pageXOffsetAttributeGetterCallback, V8Window::pageXOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollY", V8Window::scrollYAttributeGetterCallback, V8Window::scrollYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pageYOffset", V8Window::pageYOffsetAttributeGetterCallback, V8Window::pageYOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "screenX", V8Window::screenXAttributeGetterCallback, V8Window::screenXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "screenY", V8Window::screenYAttributeGetterCallback, V8Window::screenYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "outerWidth", V8Window::outerWidthAttributeGetterCallback, V8Window::outerWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "outerHeight", V8Window::outerHeightAttributeGetterCallback, V8Window::outerHeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "devicePixelRatio", V8Window::devicePixelRatioAttributeGetterCallback, V8Window::devicePixelRatioAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "clientInformation", V8Window::clientInformationAttributeGetterCallback, V8Window::clientInformationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "event", V8Window::eventAttributeGetterCallback, V8Window::eventAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "offscreenBuffering", V8Window::offscreenBufferingAttributeGetterCallback, V8Window::offscreenBufferingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "screenLeft", V8Window::screenLeftAttributeGetterCallback, V8Window::screenLeftAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "screenTop", V8Window::screenTopAttributeGetterCallback, V8Window::screenTopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "defaultStatus", V8Window::defaultStatusAttributeGetterCallback, V8Window::defaultStatusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "defaultstatus", V8Window::defaultstatusAttributeGetterCallback, V8Window::defaultstatusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "styleMedia", V8Window::styleMediaAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onanimationend", V8Window::onanimationendAttributeGetterCallback, V8Window::onanimationendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onanimationiteration", V8Window::onanimationiterationAttributeGetterCallback, V8Window::onanimationiterationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onanimationstart", V8Window::onanimationstartAttributeGetterCallback, V8Window::onanimationstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsearch", V8Window::onsearchAttributeGetterCallback, V8Window::onsearchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontransitionend", V8Window::ontransitionendAttributeGetterCallback, V8Window::ontransitionendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationend", V8Window::onwebkitanimationendAttributeGetterCallback, V8Window::onwebkitanimationendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationiteration", V8Window::onwebkitanimationiterationAttributeGetterCallback, V8Window::onwebkitanimationiterationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationstart", V8Window::onwebkitanimationstartAttributeGetterCallback, V8Window::onwebkitanimationstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwebkittransitionend", V8Window::onwebkittransitionendAttributeGetterCallback, V8Window::onwebkittransitionendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isSecureContext", V8Window::isSecureContextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8Window::onabortAttributeGetterCallback, V8Window::onabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onblur", V8Window::onblurAttributeGetterCallback, V8Window::onblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oncancel", V8Window::oncancelAttributeGetterCallback, V8Window::oncancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oncanplay", V8Window::oncanplayAttributeGetterCallback, V8Window::oncanplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oncanplaythrough", V8Window::oncanplaythroughAttributeGetterCallback, V8Window::oncanplaythroughAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onchange", V8Window::onchangeAttributeGetterCallback, V8Window::onchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onclick", V8Window::onclickAttributeGetterCallback, V8Window::onclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onclose", V8Window::oncloseAttributeGetterCallback, V8Window::oncloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oncontextmenu", V8Window::oncontextmenuAttributeGetterCallback, V8Window::oncontextmenuAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oncuechange", V8Window::oncuechangeAttributeGetterCallback, V8Window::oncuechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondblclick", V8Window::ondblclickAttributeGetterCallback, V8Window::ondblclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondrag", V8Window::ondragAttributeGetterCallback, V8Window::ondragAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondragend", V8Window::ondragendAttributeGetterCallback, V8Window::ondragendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondragenter", V8Window::ondragenterAttributeGetterCallback, V8Window::ondragenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondragleave", V8Window::ondragleaveAttributeGetterCallback, V8Window::ondragleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondragover", V8Window::ondragoverAttributeGetterCallback, V8Window::ondragoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondragstart", V8Window::ondragstartAttributeGetterCallback, V8Window::ondragstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondrop", V8Window::ondropAttributeGetterCallback, V8Window::ondropAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondurationchange", V8Window::ondurationchangeAttributeGetterCallback, V8Window::ondurationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onemptied", V8Window::onemptiedAttributeGetterCallback, V8Window::onemptiedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onended", V8Window::onendedAttributeGetterCallback, V8Window::onendedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8Window::onerrorAttributeGetterCallback, V8Window::onerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onfocus", V8Window::onfocusAttributeGetterCallback, V8Window::onfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oninput", V8Window::oninputAttributeGetterCallback, V8Window::oninputAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oninvalid", V8Window::oninvalidAttributeGetterCallback, V8Window::oninvalidAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onkeydown", V8Window::onkeydownAttributeGetterCallback, V8Window::onkeydownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onkeypress", V8Window::onkeypressAttributeGetterCallback, V8Window::onkeypressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onkeyup", V8Window::onkeyupAttributeGetterCallback, V8Window::onkeyupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onload", V8Window::onloadAttributeGetterCallback, V8Window::onloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onloadeddata", V8Window::onloadeddataAttributeGetterCallback, V8Window::onloadeddataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onloadedmetadata", V8Window::onloadedmetadataAttributeGetterCallback, V8Window::onloadedmetadataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onloadstart", V8Window::onloadstartAttributeGetterCallback, V8Window::onloadstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmousedown", V8Window::onmousedownAttributeGetterCallback, V8Window::onmousedownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmouseenter", V8Window::onmouseenterAttributeGetterCallback, V8Window::onmouseenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmouseleave", V8Window::onmouseleaveAttributeGetterCallback, V8Window::onmouseleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmousemove", V8Window::onmousemoveAttributeGetterCallback, V8Window::onmousemoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmouseout", V8Window::onmouseoutAttributeGetterCallback, V8Window::onmouseoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmouseover", V8Window::onmouseoverAttributeGetterCallback, V8Window::onmouseoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmouseup", V8Window::onmouseupAttributeGetterCallback, V8Window::onmouseupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmousewheel", V8Window::onmousewheelAttributeGetterCallback, V8Window::onmousewheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpause", V8Window::onpauseAttributeGetterCallback, V8Window::onpauseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onplay", V8Window::onplayAttributeGetterCallback, V8Window::onplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onplaying", V8Window::onplayingAttributeGetterCallback, V8Window::onplayingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8Window::onprogressAttributeGetterCallback, V8Window::onprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onratechange", V8Window::onratechangeAttributeGetterCallback, V8Window::onratechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onreset", V8Window::onresetAttributeGetterCallback, V8Window::onresetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onresize", V8Window::onresizeAttributeGetterCallback, V8Window::onresizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onscroll", V8Window::onscrollAttributeGetterCallback, V8Window::onscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onseeked", V8Window::onseekedAttributeGetterCallback, V8Window::onseekedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onseeking", V8Window::onseekingAttributeGetterCallback, V8Window::onseekingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onselect", V8Window::onselectAttributeGetterCallback, V8Window::onselectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onstalled", V8Window::onstalledAttributeGetterCallback, V8Window::onstalledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsubmit", V8Window::onsubmitAttributeGetterCallback, V8Window::onsubmitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsuspend", V8Window::onsuspendAttributeGetterCallback, V8Window::onsuspendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontimeupdate", V8Window::ontimeupdateAttributeGetterCallback, V8Window::ontimeupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontoggle", V8Window::ontoggleAttributeGetterCallback, V8Window::ontoggleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onvolumechange", V8Window::onvolumechangeAttributeGetterCallback, V8Window::onvolumechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwaiting", V8Window::onwaitingAttributeGetterCallback, V8Window::onwaitingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onwheel", V8Window::onwheelAttributeGetterCallback, V8Window::onwheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onauxclick", V8Window::onauxclickAttributeGetterCallback, V8Window::onauxclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ongotpointercapture", V8Window::ongotpointercaptureAttributeGetterCallback, V8Window::ongotpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onlostpointercapture", V8Window::onlostpointercaptureAttributeGetterCallback, V8Window::onlostpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerdown", V8Window::onpointerdownAttributeGetterCallback, V8Window::onpointerdownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointermove", V8Window::onpointermoveAttributeGetterCallback, V8Window::onpointermoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerup", V8Window::onpointerupAttributeGetterCallback, V8Window::onpointerupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointercancel", V8Window::onpointercancelAttributeGetterCallback, V8Window::onpointercancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerover", V8Window::onpointeroverAttributeGetterCallback, V8Window::onpointeroverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerout", V8Window::onpointeroutAttributeGetterCallback, V8Window::onpointeroutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerenter", V8Window::onpointerenterAttributeGetterCallback, V8Window::onpointerenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpointerleave", V8Window::onpointerleaveAttributeGetterCallback, V8Window::onpointerleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onafterprint", V8Window::onafterprintAttributeGetterCallback, V8Window::onafterprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onbeforeprint", V8Window::onbeforeprintAttributeGetterCallback, V8Window::onbeforeprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onbeforeunload", V8Window::onbeforeunloadAttributeGetterCallback, V8Window::onbeforeunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onhashchange", V8Window::onhashchangeAttributeGetterCallback, V8Window::onhashchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onlanguagechange", V8Window::onlanguagechangeAttributeGetterCallback, V8Window::onlanguagechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8Window::onmessageAttributeGetterCallback, V8Window::onmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8Window::onmessageerrorAttributeGetterCallback, V8Window::onmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onoffline", V8Window::onofflineAttributeGetterCallback, V8Window::onofflineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ononline", V8Window::ononlineAttributeGetterCallback, V8Window::ononlineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpagehide", V8Window::onpagehideAttributeGetterCallback, V8Window::onpagehideAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpageshow", V8Window::onpageshowAttributeGetterCallback, V8Window::onpageshowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpopstate", V8Window::onpopstateAttributeGetterCallback, V8Window::onpopstateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onrejectionhandled", V8Window::onrejectionhandledAttributeGetterCallback, V8Window::onrejectionhandledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onstorage", V8Window::onstorageAttributeGetterCallback, V8Window::onstorageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onunhandledrejection", V8Window::onunhandledrejectionAttributeGetterCallback, V8Window::onunhandledrejectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onunload", V8Window::onunloadAttributeGetterCallback, V8Window::onunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "performance", V8Window::performanceAttributeGetterCallback, V8Window::performanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8WindowMethods[] = {
    {"stop", V8Window::stopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"open", V8Window::openMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"alert", V8Window::alertMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"confirm", V8Window::confirmMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"prompt", V8Window::promptMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"print", V8Window::printMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestAnimationFrame", V8Window::requestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelAnimationFrame", V8Window::cancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestIdleCallback", V8Window::requestIdleCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelIdleCallback", V8Window::cancelIdleCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"captureEvents", V8Window::captureEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"releaseEvents", V8Window::releaseEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getComputedStyle", V8Window::getComputedStyleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"matchMedia", V8Window::matchMediaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8Window::moveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveBy", V8Window::moveByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resizeTo", V8Window::resizeToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resizeBy", V8Window::resizeByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelection", V8Window::getSelectionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"find", V8Window::findMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitRequestAnimationFrame", V8Window::webkitRequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitCancelAnimationFrame", V8Window::webkitCancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fetch", V8Window::fetchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"btoa", V8Window::btoaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"atob", V8Window::atobMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTimeout", V8Window::setTimeoutMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearTimeout", V8Window::clearTimeoutMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInterval", V8Window::setIntervalMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearInterval", V8Window::clearIntervalMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageBitmap", V8Window::createImageBitmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8Window::installV8WindowTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Window::wrapperTypeInfo.interface_name, V8Window::domTemplateForNamedPropertiesObject(isolate, world), V8Window::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  prototypeTemplate->SetInternalFieldCount(V8Window::internalFieldCount);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototypeTemplate->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instanceTemplate->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8WindowAttributes, arraysize(V8WindowAttributes));
  V8DOMConfiguration::InstallLazyDataAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8WindowLazyDataAttributes, arraysize(V8WindowLazyDataAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WindowAccessors, arraysize(V8WindowAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WindowMethods, arraysize(V8WindowMethods));

  // Cross-origin access check
  instanceTemplate->SetAccessCheckCallbackAndHandler(
      V8Window::securityCheck,
      v8::NamedPropertyHandlerConfiguration(
          V8Window::crossOriginNamedGetter,
          V8Window::crossOriginNamedSetter,
          nullptr,
          nullptr,
          V8Window::crossOriginNamedEnumerator),
      v8::IndexedPropertyHandlerConfiguration(V8Window::crossOriginIndexedGetter),
      v8::External::New(isolate, const_cast<WrapperTypeInfo*>(&V8Window::wrapperTypeInfo)));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Window::indexedPropertyGetterCallback,
      V8Window::indexedPropertySetterCallback,
      V8Window::indexedPropertyDescriptorCallback,
      nullptr,
      nullptr,
      V8Window::indexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

  // Custom signature
  static const V8DOMConfiguration::AttributeConfiguration closeOriginSafeAttributeConfiguration[] = {
      {"close", V8Window::closeOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : closeOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration focusOriginSafeAttributeConfiguration[] = {
      {"focus", V8Window::focusOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : focusOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration blurOriginSafeAttributeConfiguration[] = {
      {"blur", V8Window::blurOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : blurOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration postMessageOriginSafeAttributeConfiguration[] = {
      {"postMessage", V8Window::postMessageOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : postMessageOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);
  const V8DOMConfiguration::MethodConfiguration scrollMethodConfiguration[] = {
    {"scroll", V8Window::scrollMethodCallback, DOMWindowV8Internal::scrollMethodLength(), v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : scrollMethodConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, methodConfig);
  const V8DOMConfiguration::MethodConfiguration scrollToMethodConfiguration[] = {
    {"scrollTo", V8Window::scrollToMethodCallback, DOMWindowV8Internal::scrollToMethodLength(), v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : scrollToMethodConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, methodConfig);
  const V8DOMConfiguration::MethodConfiguration scrollByMethodConfiguration[] = {
    {"scrollBy", V8Window::scrollByMethodCallback, DOMWindowV8Internal::scrollByMethodLength(), v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : scrollByMethodConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, methodConfig);
}

void V8Window::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "AccessibleNode", V8Window::AccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AccessibleNodeList", V8Window::AccessibleNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "ComputedAccessibleNode", V8Window::ComputedAccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "AudioTrack", V8Window::AudioTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AudioTrackList", V8Window::AudioTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoTrack", V8Window::VideoTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoTrackList", V8Window::VideoTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSImageValue", V8Window::CSSImageValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSKeywordValue", V8Window::CSSKeywordValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathInvert", V8Window::CSSMathInvertConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMax", V8Window::CSSMathMaxConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMin", V8Window::CSSMathMinConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathNegate", V8Window::CSSMathNegateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathProduct", V8Window::CSSMathProductConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathSum", V8Window::CSSMathSumConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathValue", V8Window::CSSMathValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMatrixComponent", V8Window::CSSMatrixComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericArray", V8Window::CSSNumericArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericValue", V8Window::CSSNumericValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPerspective", V8Window::CSSPerspectiveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPositionValue", V8Window::CSSPositionValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSRotate", V8Window::CSSRotateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSScale", V8Window::CSSScaleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkew", V8Window::CSSSkewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkewX", V8Window::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkewY", V8Window::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSStyleValue", V8Window::CSSStyleValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformComponent", V8Window::CSSTransformComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformValue", V8Window::CSSTransformValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTranslate", V8Window::CSSTranslateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnitValue", V8Window::CSSUnitValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnparsedValue", V8Window::CSSUnparsedValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSVariableReferenceValue", V8Window::CSSVariableReferenceValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMap", V8Window::StylePropertyMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMapReadOnly", V8Window::StylePropertyMapReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSViewportRule", V8Window::CSSViewportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::EventTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceEventTiming", V8Window::PerformanceEventTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "FormDataEvent", V8Window::FormDataEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "MojoInterfaceInterceptor", V8Window::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8Window::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "OffscreenCanvas", V8Window::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PerformanceNavigationTiming2Enabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceNavigationTiming", V8Window::PerformanceNavigationTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PerformancePaintTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformancePaintTiming", V8Window::PerformancePaintTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ReportingObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ReportingObserver", V8Window::ReportingObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ResizeObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ResizeObserver", V8Window::ResizeObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "ResizeObserverEntry", V8Window::ResizeObserverEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SVGAnimationElement", V8Window::SVGAnimationElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SVGDiscardElement", V8Window::SVGDiscardElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SVGMPathElement", V8Window::SVGMPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ScrollState", V8Window::ScrollStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ServerTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceServerTiming", V8Window::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::SharedWorkerEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SharedWorker", V8Window::SharedWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "FontFace", V8Window::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::TrustedDOMTypesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "TrustedHTML", V8Window::TrustedHTMLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedScriptURL", V8Window::TrustedScriptURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedURL", V8Window::TrustedURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::VisualViewportAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "VisualViewport", V8Window::VisualViewportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Animation", V8Window::AnimationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationEffect", V8Window::AnimationEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationPlaybackEvent", V8Window::AnimationPlaybackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationTimeline", V8Window::AnimationTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DocumentTimeline", V8Window::DocumentTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "KeyframeEffect", V8Window::KeyframeEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "VTTRegion", V8Window::VTTRegionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::XSLTEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "XSLTProcessor", V8Window::XSLTProcessorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "onformdata", V8Window::onformdataAttributeGetterCallback, V8Window::onformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::OrientationEventEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "orientation", V8Window::orientationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "onorientationchange", V8Window::onorientationchangeAttributeGetterCallback, V8Window::onorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::VisualViewportAPIEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "visualViewport", V8Window::visualViewportAttributeGetterCallback, V8Window::visualViewportAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    const V8DOMConfiguration::MethodConfiguration getComputedAccessibleNodeMethodConfiguration[] = {
      {"getComputedAccessibleNode", V8Window::getComputedAccessibleNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : getComputedAccessibleNodeMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8Window::InstallRuntimeEnabledFeatures(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  InstallRuntimeEnabledFeaturesImpl(isolate, world, instance, prototype, interface);

  // Call partial interface's installer.
  install_runtime_enabled_features_function_(isolate, world, instance, prototype, interface);
}

void V8Window::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "AccessibleNode", V8Window::AccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AccessibleNodeList", V8Window::AccessibleNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "ComputedAccessibleNode", V8Window::ComputedAccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "AudioTrack", V8Window::AudioTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AudioTrackList", V8Window::AudioTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoTrack", V8Window::VideoTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoTrackList", V8Window::VideoTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSImageValue", V8Window::CSSImageValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSKeywordValue", V8Window::CSSKeywordValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathInvert", V8Window::CSSMathInvertConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMax", V8Window::CSSMathMaxConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMin", V8Window::CSSMathMinConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathNegate", V8Window::CSSMathNegateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathProduct", V8Window::CSSMathProductConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathSum", V8Window::CSSMathSumConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathValue", V8Window::CSSMathValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMatrixComponent", V8Window::CSSMatrixComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericArray", V8Window::CSSNumericArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericValue", V8Window::CSSNumericValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPerspective", V8Window::CSSPerspectiveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPositionValue", V8Window::CSSPositionValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSRotate", V8Window::CSSRotateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSScale", V8Window::CSSScaleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkew", V8Window::CSSSkewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkewX", V8Window::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkewY", V8Window::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSStyleValue", V8Window::CSSStyleValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformComponent", V8Window::CSSTransformComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformValue", V8Window::CSSTransformValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTranslate", V8Window::CSSTranslateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnitValue", V8Window::CSSUnitValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnparsedValue", V8Window::CSSUnparsedValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSVariableReferenceValue", V8Window::CSSVariableReferenceValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMap", V8Window::StylePropertyMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMapReadOnly", V8Window::StylePropertyMapReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSViewportRule", V8Window::CSSViewportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::EventTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceEventTiming", V8Window::PerformanceEventTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "FormDataEvent", V8Window::FormDataEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "MojoInterfaceInterceptor", V8Window::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8Window::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "OffscreenCanvas", V8Window::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PerformanceNavigationTiming2Enabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceNavigationTiming", V8Window::PerformanceNavigationTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PerformancePaintTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformancePaintTiming", V8Window::PerformancePaintTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ReportingObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ReportingObserver", V8Window::ReportingObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ResizeObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ResizeObserver", V8Window::ResizeObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "ResizeObserverEntry", V8Window::ResizeObserverEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SVGAnimationElement", V8Window::SVGAnimationElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SVGDiscardElement", V8Window::SVGDiscardElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SVGMPathElement", V8Window::SVGMPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "ScrollState", V8Window::ScrollStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ServerTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceServerTiming", V8Window::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::SharedWorkerEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SharedWorker", V8Window::SharedWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "FontFace", V8Window::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::TrustedDOMTypesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "TrustedHTML", V8Window::TrustedHTMLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedScriptURL", V8Window::TrustedScriptURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedURL", V8Window::TrustedURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::VisualViewportAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "VisualViewport", V8Window::VisualViewportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Animation", V8Window::AnimationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationEffect", V8Window::AnimationEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationPlaybackEvent", V8Window::AnimationPlaybackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "AnimationTimeline", V8Window::AnimationTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DocumentTimeline", V8Window::DocumentTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "KeyframeEffect", V8Window::KeyframeEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "VTTRegion", V8Window::VTTRegionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::XSLTEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "XSLTProcessor", V8Window::XSLTProcessorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }

  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "onformdata", V8Window::onformdataAttributeGetterCallback, V8Window::onformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::OrientationEventEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "orientation", V8Window::orientationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "onorientationchange", V8Window::onorientationchangeAttributeGetterCallback, V8Window::onorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::VisualViewportAPIEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "visualViewport", V8Window::visualViewportAttributeGetterCallback, V8Window::visualViewportAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    const V8DOMConfiguration::MethodConfiguration getComputedAccessibleNodeMethodConfiguration[] = {
      {"getComputedAccessibleNode", V8Window::getComputedAccessibleNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : getComputedAccessibleNodeMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8Window::installMojoJS(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoConfiguration[] = {
    { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoHandleConfiguration[] = {
    { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoHandleConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoWatcherConfiguration[] = {
    { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoWatcherConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8Window::installMojoJS(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installMojoJS(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8Window::installMojoJS(ScriptState* scriptState) {
  installMojoJS(scriptState, v8::Local<v8::Object>());
}

void V8Window::installAnimationWorklet(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeScrollTimelineConfiguration[] = {
    { "ScrollTimeline", V8Window::ScrollTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeScrollTimelineConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8Window::installAnimationWorklet(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installAnimationWorklet(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8Window::installTouchEventFeatureDetection(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessorontouchcancelConfiguration[] = {
    { "ontouchcancel", V8Window::ontouchcancelAttributeGetterCallback, V8Window::ontouchcancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorontouchcancelConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessorontouchendConfiguration[] = {
    { "ontouchend", V8Window::ontouchendAttributeGetterCallback, V8Window::ontouchendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorontouchendConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessorontouchmoveConfiguration[] = {
    { "ontouchmove", V8Window::ontouchmoveAttributeGetterCallback, V8Window::ontouchmoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorontouchmoveConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessorontouchstartConfiguration[] = {
    { "ontouchstart", V8Window::ontouchstartAttributeGetterCallback, V8Window::ontouchstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorontouchstartConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8Window::installTouchEventFeatureDetection(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installTouchEventFeatureDetection(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8Window::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8Window::installV8WindowTemplateFunction);
}

v8::Local<v8::FunctionTemplate> V8Window::domTemplateForNamedPropertiesObject(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  v8::Local<v8::FunctionTemplate> parentTemplate = V8EventTarget::domTemplate(isolate, world);

  v8::Local<v8::FunctionTemplate> namedPropertiesObjectFunctionTemplate = v8::FunctionTemplate::New(isolate, V8ObjectConstructor::IsValidConstructorMode);
  namedPropertiesObjectFunctionTemplate->SetClassName(V8AtomicString(isolate, "WindowProperties"));
  namedPropertiesObjectFunctionTemplate->Inherit(parentTemplate);

  v8::Local<v8::ObjectTemplate> namedPropertiesObjectTemplate = namedPropertiesObjectFunctionTemplate->PrototypeTemplate();
  namedPropertiesObjectTemplate->SetInternalFieldCount(V8Window::internalFieldCount);
  // Named Properties object has SetPrototype method of Immutable Prototype Exotic Objects
  namedPropertiesObjectTemplate->SetImmutableProto();
  V8DOMConfiguration::SetClassString(isolate, namedPropertiesObjectTemplate, "WindowProperties");
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8Window::namedPropertyGetterCallback, nullptr, nullptr, nullptr, nullptr, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
  namedPropertiesObjectTemplate->SetHandler(namedPropertyHandlerConfig);

  return namedPropertiesObjectFunctionTemplate;
}

bool V8Window::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Window::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMWindow* V8Window::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMWindow* NativeValueTraits<DOMWindow>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMWindow* nativeValue = V8Window::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Window"));
  }
  return nativeValue;
}

void V8Window::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!instanceObject.IsEmpty()) {
    if (isSecureContext || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "applicationCache", V8Window::applicationCacheAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
    }
    if (isSecureContext) {
      if (RuntimeEnabledFeatures::WorkletEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Worklet", V8Window::WorkletConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
    }
    if (isSecureContext || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "ApplicationCache", V8Window::ApplicationCacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "ApplicationCacheErrorEvent", V8Window::ApplicationCacheErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instanceObject, prototypeObject,
          attribute_configurations, arraysize(attribute_configurations));
    }
  }

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
  }
}

InstallRuntimeEnabledFeaturesFunction
V8Window::install_runtime_enabled_features_function_ =
    &V8Window::InstallRuntimeEnabledFeaturesImpl;
InstallRuntimeEnabledFeaturesOnTemplateFunction
V8Window::install_runtime_enabled_features_on_template_function_ =
    &V8Window::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8Window::installV8WindowTemplateFunction =
    &V8Window::installV8WindowTemplate;

void V8Window::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8Window::installV8WindowTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_function);
  V8Window::install_runtime_enabled_features_function_ =
      install_runtime_enabled_features_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8Window::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8Window::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
