// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// external_reference_table.cpp.tmpl
// by the script generate_v8_context_snapshot_external_references.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/modules/v8/v8_context_snapshot_external_references.h"

#include <cstdint>

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_attr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_bar_prop.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_before_unload_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_big_int_64_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_big_uint_64_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_body.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cdata_section.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_character_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_comment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_composition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_condition_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_font_face_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_grouping_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_import_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframe_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframes_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_media_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_namespace_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_page_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_supports_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_element_registry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dev_tools_host.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_external.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader_sync.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float64_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_focus_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set_load_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_initializer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_device_capabilities.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_inspector_overlay_host.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int16_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int8_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_error.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_memory_info.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_channel.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_page_transition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_long_task_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pop_state_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_processing_instruction.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_resource_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_screen.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_media.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_circle_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_clip_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_component_transfer_function_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_defs_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_desc_element.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint16_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_clamped_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_underlying_source_base.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_cue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_wheel_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_serializer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_evaluator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_ns_resolver.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_absolute_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_accelerometer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_angle_instanced_arrays.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_animation_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_listener.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_processing_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_scheduled_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_processor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_battery_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_before_install_prompt_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_blob_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_capture_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clients.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_coordinates.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_css_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_data_transfer_item_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dedicated_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_quota.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dev_tools_host_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_acceleration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_orientation_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_rotation_rate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_reader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_reader_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_document_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_effect_proxy.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_blend_min_max.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_color_buffer_float.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_color_buffer_half_float.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_disjoint_timer_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_disjoint_timer_query_webgl2.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_frag_depth.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_shader_texture_lod.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_srgb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_texture_filter_anisotropic.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_fetch_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_entry.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_writer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_writer_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_geolocation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gyroscope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_canvas_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_iframe_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_input_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_media_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor_with_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_key_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_open_db_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_iir_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_capture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_input_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_install_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_linear_acceleration_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_devices.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_encrypted_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_status_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_keys.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_recorder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_settings_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_metadata.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_element_index_uint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_standard_derivatives.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_texture_float.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_texture_float_linear.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_texture_half_float.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_texture_half_float_linear.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_completion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_overconstrained_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_picture_in_picture_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_position.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_position_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_message_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_related_application.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_relative_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_tone_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_legacy_stats_report.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_ice_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_contributing_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_report.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_orientation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_script_processor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shadow_root_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shared_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_alternative.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_result_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_voice.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_result_set.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_result_set_row_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_url_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_alternate_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_endpoint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_eye_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_frame_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_stage_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_color_buffer_float.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_astc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_etc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_etc1.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_pvrtc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_s3tc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_s3tc_srgb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_debug_renderer_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_debug_shaders.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_depth_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_draw_buffers.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_lose_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_timer_query_ext.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object_oes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_client.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_navigator_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worklet_animation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_coordinate_system.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame_of_reference.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_layer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_frame.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_stage_bounds.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_stage_bounds_point.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_viewport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_webgl_layer.h"
#include "third_party/blink/renderer/platform/bindings/dom_wrapper_world.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "v8/include/v8.h"

namespace blink {

const intptr_t* V8ContextSnapshotExternalReferences::GetTable() {
  static const intptr_t reference_table[] = {
#if defined(USE_V8_CONTEXT_SNAPSHOT)
    // Android is sensitive on its APK size, and this table improves it.
    // So we drop the table entries until the V8 context snapshot feature
    // is released on Android.
    reinterpret_cast<intptr_t>(V8AbortController::constructorCallback),
    reinterpret_cast<intptr_t>(V8AbsoluteOrientationSensor::constructorCallback),
    reinterpret_cast<intptr_t>(V8Accelerometer::constructorCallback),
    reinterpret_cast<intptr_t>(V8AnalyserNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8Animation::constructorCallback),
    reinterpret_cast<intptr_t>(V8AnimationEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8ApplicationCacheErrorEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioBuffer::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioBufferSourceNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioContext::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioProcessingEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioWorkletNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8AudioWorkletProcessor::constructorCallback),
    reinterpret_cast<intptr_t>(V8BeforeInstallPromptEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8BiquadFilterNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8Blob::constructorCallback),
    reinterpret_cast<intptr_t>(V8BlobEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8BroadcastChannel::constructorCallback),
    reinterpret_cast<intptr_t>(V8CSSStyleDeclaration::namedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8CSSStyleDeclaration::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8CSSStyleSheet::constructorCallback),
    reinterpret_cast<intptr_t>(V8ChannelMergerNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8ChannelSplitterNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8ClipboardEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8CloseEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Comment::constructorCallback),
    reinterpret_cast<intptr_t>(V8CompositionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8ConstantSourceNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8ConvolverNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8CustomEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMError::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMException::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMMatrix::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMMatrixReadOnly::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMParser::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMPoint::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMPointReadOnly::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMQuad::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMRect::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMRectReadOnly::constructorCallback),
    reinterpret_cast<intptr_t>(V8DOMStringMap::namedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8DOMStringMap::namedPropertyDeleterCallback),
    reinterpret_cast<intptr_t>(V8DOMStringMap::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8DataTransfer::constructorCallback),
    reinterpret_cast<intptr_t>(V8DelayNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8DeviceMotionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8DeviceOrientationEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Document::implementationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::URLAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::documentURIAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::originAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::compatModeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::characterSetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::charsetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::inputEncodingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::contentTypeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::doctypeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::documentElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::rootScrollerAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::rootScrollerAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::xmlEncodingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::xmlVersionAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::xmlVersionAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::xmlStandaloneAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::xmlStandaloneAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::locationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::locationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::domainAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::domainAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::referrerAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::cookieAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::cookieAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::lastModifiedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::readyStateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::titleAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::titleAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::dirAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::dirAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::bodyAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::bodyAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::bodyAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::bodyAttributeSetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::headAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::imagesAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::embedsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::pluginsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::linksAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::formsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::scriptsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::currentScriptAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::defaultViewAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::designModeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::designModeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onreadystatechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onreadystatechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::anchorsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::appletsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::fgColorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::fgColorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::linkColorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::linkColorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::vlinkColorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::vlinkColorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::alinkColorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::alinkColorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::bgColorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::bgColorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::allAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::scrollingElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerlockchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerlockchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerlockerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerlockerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::hiddenAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::visibilityStateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::wasDiscardedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::addressSpaceAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::policyAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitVisibilityStateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitHiddenAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforecopyAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforecopyAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforecutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforecutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforepasteAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onbeforepasteAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncopyAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncopyAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfreezeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfreezeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpasteAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpasteAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresumeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresumeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsearchAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsearchAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsecuritypolicyviolationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsecuritypolicyviolationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectionchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectionchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onvisibilitychangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onvisibilitychangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::timelineAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::fontsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::activeElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::styleSheetsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::pointerLockElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::fullscreenElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::moreStyleSheetsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::moreStyleSheetsAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onabortAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onabortAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onblurAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onblurAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncanplayAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncanplayAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncanplaythroughAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncanplaythroughAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncloseAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncloseAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncontextmenuAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncontextmenuAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncuechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oncuechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondblclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondblclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragoverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragoverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondragstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondropAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondropAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondurationchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ondurationchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onemptiedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onemptiedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onendedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onendedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfocusAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfocusAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onformdataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onformdataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oninputAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oninputAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oninvalidAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::oninvalidAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeydownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeydownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeypressAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeypressAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeyupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onkeyupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadeddataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadeddataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadedmetadataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadedmetadataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onloadstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousedownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousedownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousemoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousemoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseoutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseoutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseoverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseoverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmouseupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousewheelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onmousewheelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpauseAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpauseAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onplayAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onplayAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onplayingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onplayingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onprogressAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onprogressAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onratechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onratechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresetAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresizeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onresizeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onscrollAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onscrollAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onseekedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onseekedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onseekingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onseekingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onselectAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onstalledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onstalledAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsubmitAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsubmitAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsuspendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onsuspendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontimeupdateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontimeupdateAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontoggleAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontoggleAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onvolumechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onvolumechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwaitingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwaitingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwheelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwheelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onauxclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onauxclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ongotpointercaptureAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ongotpointercaptureAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onlostpointercaptureAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onlostpointercaptureAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerdownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerdownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointermoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointermoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointercancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointercancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointeroverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointeroverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointeroutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointeroutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onpointerleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchcancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchcancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchmoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchmoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::ontouchstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::childrenAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::childrenAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::firstElementChildAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::firstElementChildAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::lastElementChildAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::lastElementChildAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::childElementCountAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::fullscreenEnabledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfullscreenchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfullscreenchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfullscreenerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onfullscreenerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitIsFullScreenAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitCurrentFullScreenElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitFullscreenEnabledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitFullscreenElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwebkitfullscreenchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwebkitfullscreenchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwebkitfullscreenerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::onwebkitfullscreenerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Document::rootElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementsByTagNameMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementsByTagNameNSMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementsByClassNameMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createDocumentFragmentMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createTextNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createCDATASectionMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createCommentMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createProcessingInstructionMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::importNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::adoptNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createAttributeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createAttributeNSMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createEventMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createRangeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createNodeIteratorMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createTreeWalkerMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementsByNameMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementsByNameMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::openMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::closeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::writeMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::writelnMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::hasFocusMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::execCommandMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::queryCommandEnabledMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::queryCommandIndetermMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::queryCommandStateMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::queryCommandSupportedMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::queryCommandValueMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::clearMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::captureEventsMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::releaseEventsMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::exitPointerLockMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createTouchListMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::registerElementMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createElementMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createElementMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::createElementNSMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::caretRangeFromPointMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getAnimationsMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getSelectionMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::elementFromPointMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::elementsFromPointMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementByIdMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::getElementByIdMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Document::prependMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::appendMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::querySelectorMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::querySelectorAllMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::exitFullscreenMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitCancelFullScreenMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::webkitExitFullscreenMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createExpressionMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::createNSResolverMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::evaluateMethodCallback),
    reinterpret_cast<intptr_t>(V8Document::constructorCallback),
    reinterpret_cast<intptr_t>(V8DocumentFragment::constructorCallback),
    reinterpret_cast<intptr_t>(V8DocumentPartial::pictureInPictureEnabledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8DocumentPartial::pictureInPictureElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8DocumentPartial::exitPictureInPictureMethodCallback),
    reinterpret_cast<intptr_t>(V8DragEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8DynamicsCompressorNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8ErrorEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Event::constructorCallback),
    reinterpret_cast<intptr_t>(V8EventSource::constructorCallback),
    reinterpret_cast<intptr_t>(V8EventTarget::addEventListenerMethodCallback),
    reinterpret_cast<intptr_t>(V8EventTarget::removeEventListenerMethodCallback),
    reinterpret_cast<intptr_t>(V8EventTarget::dispatchEventMethodCallback),
    reinterpret_cast<intptr_t>(V8EventTarget::constructorCallback),
    reinterpret_cast<intptr_t>(V8ExtendableEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8ExtendableMessageEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8FederatedCredential::constructorCallback),
    reinterpret_cast<intptr_t>(V8FetchEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8File::constructorCallback),
    reinterpret_cast<intptr_t>(V8FileReader::constructorCallback),
    reinterpret_cast<intptr_t>(V8FileReaderSync::constructorCallback),
    reinterpret_cast<intptr_t>(V8FocusEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8FontFace::constructorCallback),
    reinterpret_cast<intptr_t>(V8FontFaceSetLoadEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8FormData::constructorCallback),
    reinterpret_cast<intptr_t>(V8GainNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8GamepadEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Gyroscope::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLAnchorElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLAreaElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLAudioElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLBRElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLBaseElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLBodyElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLButtonElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLCanvasElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDListElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDataElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDataListElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDetailsElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDialogElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDirectoryElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDivElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLDocument::locationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLDocument::locationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLEmbedElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLEmbedElement::namedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLEmbedElement::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLFieldSetElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLFontElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLFormElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLFrameElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLFrameSetElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLHRElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLHeadElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLHeadingElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLHtmlElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLIFrameElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLImageElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLInputElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLLIElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLLabelElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLLegendElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLLinkElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLMapElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLMarqueeElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLMenuElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLMetaElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLMeterElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLModElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLOListElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLObjectElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLObjectElement::namedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLObjectElement::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8HTMLOptGroupElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLOptionElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLOutputElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLParagraphElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLParamElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLPictureElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLPreElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLProgressElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLQuoteElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLScriptElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLSelectElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLSlotElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLSourceElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLSpanElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLStyleElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableCaptionElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableCellElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableColElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableRowElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTableSectionElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTemplateElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTextAreaElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTimeElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTitleElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLTrackElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLUListElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HTMLVideoElement::constructorCallback),
    reinterpret_cast<intptr_t>(V8HashChangeEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Headers::constructorCallback),
    reinterpret_cast<intptr_t>(V8IDBVersionChangeEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8IIRFilterNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8ImageCapture::constructorCallback),
    reinterpret_cast<intptr_t>(V8ImageData::constructorCallback),
    reinterpret_cast<intptr_t>(V8InputDeviceCapabilities::constructorCallback),
    reinterpret_cast<intptr_t>(V8InputEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8InstallEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8IntersectionObserver::constructorCallback),
    reinterpret_cast<intptr_t>(V8KeyboardEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8LinearAccelerationSensor::constructorCallback),
    reinterpret_cast<intptr_t>(V8MIDIConnectionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MIDIMessageEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaElementAudioSourceNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaEncryptedEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaKeyMessageEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaQueryListEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaRecorder::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaSource::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaStream::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaStreamAudioDestinationNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaStreamAudioSourceNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaStreamEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MediaStreamTrackEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MessageChannel::constructorCallback),
    reinterpret_cast<intptr_t>(V8MessageEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MouseEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8MutationObserver::constructorCallback),
    reinterpret_cast<intptr_t>(V8Node::nodeTypeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::nodeNameAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::baseURIAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::isConnectedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::ownerDocumentAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::ownerDocumentAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::parentNodeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::parentNodeAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::parentElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::parentElementAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::childNodesAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::childNodesAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::firstChildAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::firstChildAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::lastChildAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::lastChildAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::previousSiblingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::previousSiblingAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::nextSiblingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::nextSiblingAttributeGetterCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::nodeValueAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::nodeValueAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Node::textContentAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Node::textContentAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Node::hasChildNodesMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::getRootNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::normalizeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::cloneNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::isEqualNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::isSameNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::compareDocumentPositionMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::containsMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::lookupPrefixMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::lookupNamespaceURIMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::isDefaultNamespaceMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::insertBeforeMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::insertBeforeMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::appendChildMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::appendChildMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::replaceChildMethodCallback),
    reinterpret_cast<intptr_t>(V8Node::replaceChildMethodCallbackForMainWorld),
    reinterpret_cast<intptr_t>(V8Node::removeChildMethodCallback),
    reinterpret_cast<intptr_t>(V8OfflineAudioCompletionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8OfflineAudioContext::constructorCallback),
    reinterpret_cast<intptr_t>(V8OscillatorNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8OverconstrainedError::constructorCallback),
    reinterpret_cast<intptr_t>(V8PageTransitionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8PannerNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8PasswordCredential::constructorCallback),
    reinterpret_cast<intptr_t>(V8Path2D::constructorCallback),
    reinterpret_cast<intptr_t>(V8PerformanceObserver::constructorCallback),
    reinterpret_cast<intptr_t>(V8PeriodicWave::constructorCallback),
    reinterpret_cast<intptr_t>(V8PointerEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8PopStateEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8ProgressEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8PromiseRejectionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCDTMFToneChangeEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCDataChannelEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCIceCandidate::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCPeerConnection::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCPeerConnectionIceEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCSessionDescription::constructorCallback),
    reinterpret_cast<intptr_t>(V8RTCTrackEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Range::constructorCallback),
    reinterpret_cast<intptr_t>(V8RelativeOrientationSensor::constructorCallback),
    reinterpret_cast<intptr_t>(V8Request::constructorCallback),
    reinterpret_cast<intptr_t>(V8Response::constructorCallback),
    reinterpret_cast<intptr_t>(V8ScrollTimeline::constructorCallback),
    reinterpret_cast<intptr_t>(V8SecurityPolicyViolationEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8SensorErrorEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8SpeechGrammar::constructorCallback),
    reinterpret_cast<intptr_t>(V8SpeechGrammarList::constructorCallback),
    reinterpret_cast<intptr_t>(V8SpeechRecognition::constructorCallback),
    reinterpret_cast<intptr_t>(V8SpeechRecognitionError::constructorCallback),
    reinterpret_cast<intptr_t>(V8SpeechRecognitionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8StereoPannerNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8Storage::namedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8Storage::namedPropertyDeleterCallback),
    reinterpret_cast<intptr_t>(V8Storage::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8StorageEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8StyleSheetList::constructorCallback),
    reinterpret_cast<intptr_t>(V8SyncEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Text::constructorCallback),
    reinterpret_cast<intptr_t>(V8TextDecoder::constructorCallback),
    reinterpret_cast<intptr_t>(V8TextEncoder::constructorCallback),
    reinterpret_cast<intptr_t>(V8Touch::constructorCallback),
    reinterpret_cast<intptr_t>(V8TouchEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8TrackEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8TransitionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8UIEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8URL::constructorCallback),
    reinterpret_cast<intptr_t>(V8URLSearchParams::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBAlternateInterface::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBConfiguration::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBConnectionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBEndpoint::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBInTransferResult::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBInterface::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBIsochronousInTransferPacket::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBIsochronousInTransferResult::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBIsochronousOutTransferPacket::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBIsochronousOutTransferResult::constructorCallback),
    reinterpret_cast<intptr_t>(V8USBOutTransferResult::constructorCallback),
    reinterpret_cast<intptr_t>(V8VRDisplayEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8VRFrameData::constructorCallback),
    reinterpret_cast<intptr_t>(V8VTTCue::constructorCallback),
    reinterpret_cast<intptr_t>(V8WaveShaperNode::constructorCallback),
    reinterpret_cast<intptr_t>(V8WebGLContextEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8WebSocket::constructorCallback),
    reinterpret_cast<intptr_t>(V8WheelEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8Window::windowAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::selfAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::documentAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::originAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::originAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::nameAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::nameAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::locationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::locationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::historyAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::locationbarAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::locationbarAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::menubarAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::menubarAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::personalbarAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::personalbarAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollbarsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollbarsAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::statusbarAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::statusbarAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::toolbarAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::toolbarAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::statusAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::statusAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::closedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::framesAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::lengthAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::topAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::openerAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::openerAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::parentAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::frameElementAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::navigatorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::applicationCacheAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::customElementsAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::externalAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::externalAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::innerWidthAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::innerWidthAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::innerHeightAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::innerHeightAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollXAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollXAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::pageXOffsetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::pageXOffsetAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollYAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollYAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::pageYOffsetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::pageYOffsetAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::visualViewportAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::visualViewportAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenXAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenXAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenYAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenYAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::outerWidthAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::outerWidthAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::outerHeightAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::outerHeightAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::devicePixelRatioAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::devicePixelRatioAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onorientationchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onorientationchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::orientationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::clientInformationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::clientInformationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::eventAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::eventAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::offscreenBufferingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::offscreenBufferingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenLeftAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenLeftAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenTopAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::screenTopAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::defaultStatusAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::defaultStatusAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::defaultstatusAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::defaultstatusAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::styleMediaAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WebKitTransitionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WebKitAnimationEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::webkitURLConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WebKitMutationObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationiterationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationiterationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onanimationstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsearchAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsearchAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontransitionendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontransitionendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationiterationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationiterationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkitanimationstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkittransitionendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwebkittransitionendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::isSecureContextAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WebKitCSSMatrixConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ScrollTimelineConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AccessibleNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AccessibleNodeListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ComputedAccessibleNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AudioTrackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AudioTrackListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::VideoTrackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::VideoTrackListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSImageValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSKeywordValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathInvertConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathMaxConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathMinConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathNegateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathProductConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathSumConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMathValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMatrixComponentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSNumericArrayConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSNumericValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSPerspectiveConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSPositionValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSRotateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSScaleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSSkewConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSSkewXConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSSkewYConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSStyleValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSTransformComponentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSTransformValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSTranslateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSUnitValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSUnparsedValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSVariableReferenceValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::StylePropertyMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::StylePropertyMapReadOnlyConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSViewportRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceEventTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FormDataEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MojoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MojoHandleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MojoWatcherConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MojoInterfaceInterceptorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MojoInterfaceRequestEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::OffscreenCanvasConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceNavigationTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformancePaintTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ReportingObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ResizeObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ResizeObserverEntryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimationElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGDiscardElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGMPathElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ScrollStateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceServerTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SharedWorkerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FontFaceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TrustedHTMLConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TrustedScriptURLConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TrustedURLConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::VisualViewportConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AnimationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AnimationEffectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AnimationPlaybackEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AnimationTimelineConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DocumentTimelineConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::KeyframeEffectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::VTTRegionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WorkletConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XSLTProcessorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ApplicationCacheConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ApplicationCacheErrorEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AbortControllerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AbortSignalConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AnimationEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AttrConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::BarPropConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::BeforeUnloadEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::BlobConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CDATASectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSConditionRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSFontFaceRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSGroupingRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSImportRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSKeyframeRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSKeyframesRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSMediaRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSNamespaceRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSPageRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSRuleListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSStyleDeclarationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSStyleRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSStyleSheetConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CSSSupportsRuleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CharacterDataConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ClipboardEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CommentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CompositionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CustomElementRegistryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::CustomEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMExceptionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMImplementationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMMatrixConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMMatrixReadOnlyConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMParserConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMPointConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMPointReadOnlyConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMQuadConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMRectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMRectListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMRectReadOnlyConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMStringListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMStringMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMTokenListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DataTransferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DataTransferItemConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DataTransferItemListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DataViewConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DocumentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DocumentFragmentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DocumentTypeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::DragEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ErrorEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::EventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::EventTargetConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FileConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FileListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FileReaderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FocusEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FontFaceSetLoadEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::FormDataConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLAllCollectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLAnchorElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLAreaElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLAudioElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::AudioConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLBRElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLBaseElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLBodyElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLButtonElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLCanvasElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLCollectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLContentElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDListElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDataElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDataListElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDetailsElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDialogElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDirectoryElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDivElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLDocumentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLEmbedElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFieldSetElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFontElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFormControlsCollectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFormElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFrameElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLFrameSetElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLHRElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLHeadElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLHeadingElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLHtmlElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLIFrameElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLImageElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ImageConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLInputElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLLIElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLLabelElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLLegendElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLLinkElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMapElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMarqueeElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMediaElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMenuElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMetaElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLMeterElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLModElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLOListElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLObjectElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLOptGroupElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLOptionElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::OptionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLOptionsCollectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLOutputElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLParagraphElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLParamElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLPictureElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLPreElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLProgressElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLQuoteElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLScriptElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLSelectElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLShadowElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLSlotElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLSourceElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLSpanElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLStyleElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableCaptionElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableCellElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableColElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableRowElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTableSectionElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTemplateElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTextAreaElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTimeElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTitleElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLTrackElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLUListElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLUnknownElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HTMLVideoElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HashChangeEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HeadersConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::HistoryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::IdleDeadlineConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ImageBitmapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ImageDataConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::InputDeviceCapabilitiesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::InputEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::IntersectionObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::IntersectionObserverEntryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::KeyboardEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::LocationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MediaErrorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MediaListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MediaQueryListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MediaQueryListEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MessageChannelConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MessageEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MessagePortConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MouseEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MutationEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MutationObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::MutationRecordConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NamedNodeMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NavigatorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NodeFilterConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NodeIteratorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::NodeListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PageTransitionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceEntryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceLongTaskTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceMarkConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceMeasureConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceNavigationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceObserverEntryListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceResourceTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PerformanceTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PointerEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PopStateEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ProcessingInstructionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ProgressEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::PromiseRejectionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::RadioNodeListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::RangeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::RequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ResponseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAngleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimateElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimateMotionElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimateTransformElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedAngleConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedBooleanConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedEnumerationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedIntegerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedLengthConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedLengthListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedNumberConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedNumberListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedPreserveAspectRatioConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedRectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedStringConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGAnimatedTransformListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGCircleElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGClipPathElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGComponentTransferFunctionElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGDefsElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGDescElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGEllipseElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEBlendElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEColorMatrixElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEComponentTransferElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFECompositeElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEConvolveMatrixElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEDiffuseLightingElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEDisplacementMapElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEDistantLightElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEDropShadowElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEFloodElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEFuncAElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEFuncBElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEFuncGElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEFuncRElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEGaussianBlurElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEImageElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEMergeElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEMergeNodeElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEMorphologyElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEOffsetElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFEPointLightElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFESpecularLightingElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFESpotLightElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFETileElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFETurbulenceElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGFilterElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGForeignObjectElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGGElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGGeometryElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGGradientElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGGraphicsElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGImageElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGLengthConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGLengthListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGLineElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGLinearGradientElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGMarkerElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGMaskElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGMatrixConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGMetadataElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGNumberConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGNumberListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPathElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPatternElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPointConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPointListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPolygonElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPolylineElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGPreserveAspectRatioConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGRadialGradientElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGRectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGRectElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGSVGElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGScriptElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGSetElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGStopElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGStringListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGStyleElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGSwitchElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGSymbolElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTSpanElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTextContentElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTextElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTextPathElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTextPositioningElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTitleElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTransformConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGTransformListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGUnitTypesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGUseElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SVGViewElementConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ScreenConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SecurityPolicyViolationEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::SelectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ShadowRootConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::StaticRangeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::StyleSheetConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::StyleSheetListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TaskAttributionTimingConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextMetricsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextTrackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextTrackCueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextTrackCueListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TextTrackListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TimeRangesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TouchConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TouchEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TouchListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TrackEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TransitionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::TreeWalkerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::UIEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::URLConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::URLSearchParamsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::VTTCueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ValidityStateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WheelEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WindowConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::WorkerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XMLDocumentConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XMLHttpRequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XMLHttpRequestEventTargetConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XMLHttpRequestUploadConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XMLSerializerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XPathEvaluatorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XPathExpressionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::XPathResultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onabortAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onabortAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onblurAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onblurAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncanplayAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncanplayAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncanplaythroughAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncanplaythroughAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncloseAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncloseAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncontextmenuAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncontextmenuAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncuechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oncuechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondblclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondblclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragoverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragoverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondragstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondropAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondropAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondurationchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ondurationchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onemptiedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onemptiedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onendedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onendedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onfocusAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onfocusAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onformdataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onformdataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oninputAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oninputAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oninvalidAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::oninvalidAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeydownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeydownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeypressAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeypressAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeyupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onkeyupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadeddataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadeddataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadedmetadataAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadedmetadataAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onloadstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousedownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousedownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousemoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousemoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseoutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseoutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseoverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseoverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmouseupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousewheelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmousewheelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpauseAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpauseAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onplayAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onplayAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onplayingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onplayingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onprogressAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onprogressAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onratechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onratechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onresetAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onresetAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onresizeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onresizeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onscrollAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onscrollAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onseekedAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onseekedAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onseekingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onseekingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onselectAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onselectAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onstalledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onstalledAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsubmitAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsubmitAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsuspendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onsuspendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontimeupdateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontimeupdateAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontoggleAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontoggleAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onvolumechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onvolumechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwaitingAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwaitingAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwheelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onwheelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onauxclickAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onauxclickAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ongotpointercaptureAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ongotpointercaptureAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onlostpointercaptureAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onlostpointercaptureAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerdownAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerdownAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointermoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointermoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerupAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerupAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointercancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointercancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointeroverAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointeroverAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointeroutAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointeroutAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerenterAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerenterAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerleaveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpointerleaveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchcancelAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchcancelAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchendAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchendAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchmoveAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchmoveAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchstartAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ontouchstartAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onafterprintAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onafterprintAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onbeforeprintAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onbeforeprintAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onbeforeunloadAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onbeforeunloadAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onhashchangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onhashchangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onlanguagechangeAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onlanguagechangeAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmessageAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmessageAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmessageerrorAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onmessageerrorAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onofflineAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onofflineAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ononlineAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::ononlineAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpagehideAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpagehideAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpageshowAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpageshowAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpopstateAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onpopstateAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onrejectionhandledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onrejectionhandledAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onstorageAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onstorageAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onunhandledrejectionAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onunhandledrejectionAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onunloadAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::onunloadAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::performanceAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::performanceAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::closeMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::closeOriginSafeMethodGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::stopMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::focusMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::focusOriginSafeMethodGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::blurMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::blurOriginSafeMethodGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::openMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::alertMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::confirmMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::promptMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::printMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::requestAnimationFrameMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::cancelAnimationFrameMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::requestIdleCallbackMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::cancelIdleCallbackMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::postMessageMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::postMessageOriginSafeMethodGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::captureEventsMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::releaseEventsMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::getComputedStyleMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::matchMediaMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::moveToMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::moveByMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::resizeToMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::resizeByMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollToMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::scrollByMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::getSelectionMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::getComputedAccessibleNodeMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::findMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::webkitRequestAnimationFrameMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::webkitCancelAnimationFrameMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::fetchMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::btoaMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::atobMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::setTimeoutMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::clearTimeoutMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::setIntervalMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::clearIntervalMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::createImageBitmapMethodCallback),
    reinterpret_cast<intptr_t>(V8Window::DOMWindowOriginSafeMethodSetterCallback),
    reinterpret_cast<intptr_t>(V8Window::crossOriginNamedGetter),
    reinterpret_cast<intptr_t>(V8Window::crossOriginNamedSetter),
    reinterpret_cast<intptr_t>(V8Window::crossOriginNamedEnumerator),
    reinterpret_cast<intptr_t>(V8Window::crossOriginIndexedGetter),
    reinterpret_cast<intptr_t>(V8Window::securityCheck),
    reinterpret_cast<intptr_t>(&V8Window::wrapperTypeInfo),
    reinterpret_cast<intptr_t>(V8Window::namedPropertyGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::indexedPropertyGetterCallback),
    reinterpret_cast<intptr_t>(V8Window::indexedPropertyDefinerCallback),
    reinterpret_cast<intptr_t>(V8Window::indexedPropertyDescriptorCallback),
    reinterpret_cast<intptr_t>(V8Window::indexedPropertySetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WorkletAnimationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BudgetStateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GamepadPoseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaCapabilitiesInfoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PictureInPictureWindowConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AbsoluteOrientationSensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AccelerometerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GyroscopeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::LinearAccelerationSensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OrientationSensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RelativeOrientationSensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SensorErrorEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::LockConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::LockManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRDisplayCapabilitiesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRDisplayConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRDisplayEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VREyeParametersConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRFrameDataConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRPoseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VRStageParametersConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRCoordinateSystemConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRDeviceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRDevicePoseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRFrameOfReferenceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRInputPoseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRInputSourceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRInputSourceEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRLayerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRPresentationContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRPresentationFrameConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRSessionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRSessionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRStageBoundsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRStageBoundsPointConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRViewConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRViewportConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::XRWebGLLayerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CookieChangeEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CookieStoreConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BackgroundFetchFetchConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BudgetServiceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBObservationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBObserverChangesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBObserverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::KeyboardConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::KeyboardLayoutMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaMetadataConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaSessionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::TrackDefaultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::TrackDefaultListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::NotificationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentInstrumentsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentAddressConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentRequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentResponseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PermissionStatusConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PermissionsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationAvailabilityConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationConnectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationConnectionListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationReceiverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PresentationRequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PushManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PushSubscriptionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RemotePlaybackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AmbientLightSensorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MagnetometerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BarcodeDetectorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DetectedBarcodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DetectedFaceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DetectedTextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::FaceDetectorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::TextDetectorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CanvasGradientConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CanvasPatternConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::Path2DConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLRenderingContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AuthenticatorAssertionResponseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AuthenticatorAttestationResponseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AuthenticatorResponseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PublicKeyCredentialConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothDeviceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BluetoothUUIDConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::NFCConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBConfigurationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBConnectionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBDeviceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBEndpointConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBInTransferResultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBInterfaceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::USBOutTransferResultConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioWorkletConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CacheConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CacheStorageConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ClipboardConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CredentialConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CredentialsContainerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::FederatedCredentialConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaKeyMessageEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaKeySessionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaKeyStatusMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaKeySystemAccessConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaKeysConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::NavigationPreloadManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PasswordCredentialConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::StorageManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AnalyserNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioBufferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioBufferSourceNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioDestinationNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioListenerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioParamConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioParamMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioProcessingEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioScheduledSourceNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::AudioWorkletNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BaseAudioContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BatteryManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BeforeInstallPromptEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BiquadFilterNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BlobEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::BroadcastChannelConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CanvasCaptureMediaStreamTrackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CanvasRenderingContext2DConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ChannelMergerNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ChannelSplitterNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CloseEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ConstantSourceNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ConvolverNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CryptoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::CryptoKeyConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DOMErrorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DelayNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DeviceMotionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DeviceOrientationEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::DynamicsCompressorNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::EventSourceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GainNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GamepadButtonConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GamepadConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::GamepadEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBCursorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBCursorWithValueConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBDatabaseConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBFactoryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBIndexConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBKeyRangeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBObjectStoreConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBOpenDBRequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBRequestConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBTransactionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IDBVersionChangeEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::IIRFilterNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ImageBitmapRenderingContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ImageCaptureConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::InputDeviceInfoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIAccessConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIConnectionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIInputConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIInputMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIMessageEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIOutputConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIOutputMapConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MIDIPortConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaCapabilitiesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaDeviceInfoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaDevicesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaElementAudioSourceNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaEncryptedEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaRecorderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaSettingsRangeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaSourceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamAudioDestinationNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamAudioSourceNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamTrackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MediaStreamTrackEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MimeTypeArrayConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::MimeTypeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::NetworkInformationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OfflineAudioCompletionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OfflineAudioContextConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OscillatorNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::OverconstrainedErrorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PannerNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PeriodicWaveConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PhotoCapabilitiesConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PluginArrayConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::PluginConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCCertificateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCDTMFSenderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCDTMFToneChangeEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCDataChannelConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCDataChannelEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCIceCandidateConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCPeerConnectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCPeerConnectionIceEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCRtpContributingSourceConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCRtpReceiverConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCRtpSenderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCSessionDescriptionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCStatsReportConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::RTCTrackEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ScreenOrientationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ScriptProcessorNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ServiceWorkerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ServiceWorkerContainerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ServiceWorkerRegistrationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SourceBufferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SourceBufferListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::StereoPannerNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::StorageConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::StorageEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SubtleCryptoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::SyncManagerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::TextDecoderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::TextEncoderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WaveShaperNodeConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLActiveInfoConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLBufferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLContextEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLFramebufferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLProgramConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLQueryConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLRenderbufferConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLSamplerConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLShaderConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLSyncConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLTextureConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLUniformLocationConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::WebSocketConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::animationWorkletAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::onappinstalledAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::onappinstalledAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::onbeforeinstallpromptAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::onbeforeinstallpromptAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::cachesAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::cookieStoreAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::cookieStoreAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::cryptoAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondevicemotionAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondevicemotionAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondeviceorientationAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondeviceorientationAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondeviceorientationabsoluteAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::ondeviceorientationabsoluteAttributeSetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::indexedDBAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitMediaStreamConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitRTCPeerConnectionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitStorageInfoAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitSpeechGrammarConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitSpeechGrammarListConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitSpeechRecognitionConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitSpeechRecognitionErrorConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitSpeechRecognitionEventConstructorGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::speechSynthesisAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::sessionStorageAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::localStorageAttributeGetterCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitRequestFileSystemMethodCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::webkitResolveLocalFileSystemURLMethodCallback),
    reinterpret_cast<intptr_t>(V8WindowPartial::openDatabaseMethodCallback),
    reinterpret_cast<intptr_t>(V8Worker::constructorCallback),
    reinterpret_cast<intptr_t>(V8WorkletAnimation::constructorCallback),
    reinterpret_cast<intptr_t>(V8XMLHttpRequest::constructorCallback),
    reinterpret_cast<intptr_t>(V8XMLSerializer::constructorCallback),
    reinterpret_cast<intptr_t>(V8XPathEvaluator::constructorCallback),
    reinterpret_cast<intptr_t>(V8XRInputSourceEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8XRSessionEvent::constructorCallback),
    reinterpret_cast<intptr_t>(V8XRWebGLLayer::constructorCallback),
    reinterpret_cast<intptr_t>(V8ObjectConstructor::IsValidConstructorMode),
#endif  // USE_V8_CONTEXT_SNAPSHOT
    0  // terminate with a null
  };

  return reference_table;
}

}  // namespace blink
