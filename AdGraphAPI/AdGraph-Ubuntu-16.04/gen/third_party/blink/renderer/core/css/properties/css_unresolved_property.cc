// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_unresolved_property.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5

// clang-format off

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

#include "third_party/blink/renderer/core/css/properties/longhands/variable.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_composite.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_top_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/all.h"
#include "third_party/blink/renderer/core/css/properties/longhands/caption_side.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_property.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_shrink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_repeat_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_repeat_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/box_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/resize.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_slice.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_weight.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_basis.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_source.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_size_delta.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_justify.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_appearance.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_play_state.h"
#include "third_party/blink/renderer/core/css/properties/longhands/letter_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/empty_cells.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/perspective.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_combine.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_caps.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_family.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_clip_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_bottom_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_max_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_word_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_margin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_ruby_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/vector_effect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/dominant_baseline.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_display.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/unicode_bidi.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_backface_visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_flex.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_name.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_mid.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_linejoin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/counter_reset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_repeat.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_miterlimit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_property.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_offset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/object_fit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_outset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_stroke_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flood_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_bottom_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overscroll_behavior_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_rows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_z.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_repeat.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_east_asian.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_feature_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/hyphens.h"
#include "third_party/blink/renderer/core/css/properties/longhands/will_change.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_numeric.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/pointer_events.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_basis.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/lighting_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/table_layout.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stop_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/unicode_range.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_modify.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_indent.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_rotate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_margin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/rx.h"
#include "third_party/blink/renderer/core/css/properties/longhands/ry.h"
#include "third_party/blink/renderer/core/css/properties/longhands/content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/caret_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_top_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/backdrop_filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_after_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_line.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_slice.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variation_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_distance.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_feature_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_blend_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_select.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_min_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_security.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_top_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip_rule.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_outside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_app_region.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/isolation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/r.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill_rule.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_before_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_dasharray.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stop_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_column_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_sizing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_attachment.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_areas.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_fill_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_iteration_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask_source_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clear.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_image_threshold.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_emphasis_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_drag.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overscroll_behavior_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_height_step.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/user_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/touch_action.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_interpolation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_shrink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/backface_visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_stop.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_grow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/orphans.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/contain.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/z_index.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_combine_upright.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_span.h"
#include "third_party/blink/renderer/core/css/properties/longhands/baseline_shift.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_name.h"
#include "third_party/blink/renderer/core/css/properties/longhands/x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_underline_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_print_color_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_orient.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_stroke_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_position_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cy.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cx.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_line_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/speak.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/tab_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_position_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_position_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_fill.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_reflect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_max_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_outside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flood_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cursor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_vertical_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_dashoffset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_align_last.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_grow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_outset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_emphasis_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_flow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_columns.h"
#include "third_party/blink/renderer/core/css/properties/longhands/alignment_baseline.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_fill_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/counter_increment.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_source.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_position_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/object_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_customization.h"
#include "third_party/blink/renderer/core/css/properties/longhands/white_space.h"
#include "third_party/blink/renderer/core/css/properties/longhands/left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/quotes.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/image_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/paint_order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/image_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/buffered_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_row_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_rtl_ordering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_horizontal_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_caption_side.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_fill_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/rotate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_rows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/d.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_image_threshold.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/row_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_span.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_bottom_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/page.h"
#include "third_party/blink/renderer/core/css/properties/longhands/right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_ordinal_group.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_highlight.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_interpolation_filters.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_kerning.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_locale.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_combine.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_ligatures.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mix_blend_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_pack.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/src.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_decoration_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_columns.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_hyphenate_character.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/float.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_behavior.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_iteration_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_justify_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_column_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/translate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_inside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_skip_ink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_row_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/vertical_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_line_clamp.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_repeat_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_repeat_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_decorations_in_effect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_linecap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/display.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_min_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/widows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_box.h"
#include "third_party/blink/renderer/core/css/properties/longhands/viewport_fit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_overflow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_play_state.h"
#include "third_party/blink/renderer/core/css/properties/longhands/box_sizing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/user_select.h"
#include "third_party/blink/renderer/core/css/properties/longhands/opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_stretch.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scale.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_tap_highlight_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/perspective_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_smoothing.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/flex.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_self.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background_repeat.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_repeat.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_text_emphasis.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/flex_flow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_items.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_image.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_text_stroke.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_radius.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/marker.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/font.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_columns.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/overscroll_behavior.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_width.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_radius.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_transition.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_inside.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_animation.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_column.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_start.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_rule.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/animation.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_end.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_inside.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_area.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/columns.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/column_rule.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/epub_text_emphasis.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/font_variant.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_flex_flow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/list_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_row.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_color.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_template.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/padding.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_flex.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_top.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_left.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/offset.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_bottom.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/overflow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/text_decoration.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_row_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/outline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background_position.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_position.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_spacing.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_right.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_margin_collapse.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/transition.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_column_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_box_image.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_content.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/margin.h"

namespace blink {
namespace {

static constexpr Variable property_csspropertyvariable;
static constexpr CSSLonghand::AnimationDelay property_csspropertyanimationdelay;
static constexpr CSSLonghand::AnimationDirection property_csspropertyanimationdirection;
static constexpr CSSLonghand::AnimationDuration property_csspropertyanimationduration;
static constexpr CSSLonghand::AnimationFillMode property_csspropertyanimationfillmode;
static constexpr CSSLonghand::AnimationIterationCount property_csspropertyanimationiterationcount;
static constexpr CSSLonghand::AnimationName property_csspropertyanimationname;
static constexpr CSSLonghand::AnimationPlayState property_csspropertyanimationplaystate;
static constexpr CSSLonghand::AnimationTimingFunction property_csspropertyanimationtimingfunction;
static constexpr CSSLonghand::TransitionDelay property_csspropertytransitiondelay;
static constexpr CSSLonghand::TransitionDuration property_csspropertytransitionduration;
static constexpr CSSLonghand::TransitionProperty property_csspropertytransitionproperty;
static constexpr CSSLonghand::TransitionTimingFunction property_csspropertytransitiontimingfunction;
static constexpr CSSLonghand::Color property_csspropertycolor;
static constexpr CSSLonghand::Direction property_csspropertydirection;
static constexpr CSSLonghand::FontFamily property_csspropertyfontfamily;
static constexpr CSSLonghand::FontFeatureSettings property_csspropertyfontfeaturesettings;
static constexpr CSSLonghand::FontKerning property_csspropertyfontkerning;
static constexpr CSSLonghand::FontSize property_csspropertyfontsize;
static constexpr CSSLonghand::FontSizeAdjust property_csspropertyfontsizeadjust;
static constexpr CSSLonghand::FontStretch property_csspropertyfontstretch;
static constexpr CSSLonghand::FontStyle property_csspropertyfontstyle;
static constexpr CSSLonghand::FontVariantCaps property_csspropertyfontvariantcaps;
static constexpr CSSLonghand::FontVariantEastAsian property_csspropertyfontvarianteastasian;
static constexpr CSSLonghand::FontVariantLigatures property_csspropertyfontvariantligatures;
static constexpr CSSLonghand::FontVariantNumeric property_csspropertyfontvariantnumeric;
static constexpr CSSLonghand::FontVariationSettings property_csspropertyfontvariationsettings;
static constexpr CSSLonghand::FontWeight property_csspropertyfontweight;
static constexpr CSSLonghand::TextOrientation property_csspropertytextorientation;
static constexpr CSSLonghand::TextRendering property_csspropertytextrendering;
static constexpr CSSLonghand::WebkitFontSmoothing property_csspropertywebkitfontsmoothing;
static constexpr CSSLonghand::WebkitLocale property_csspropertywebkitlocale;
static constexpr CSSLonghand::WebkitTextOrientation property_csspropertywebkittextorientation;
static constexpr CSSLonghand::WebkitWritingMode property_csspropertywebkitwritingmode;
static constexpr CSSLonghand::WritingMode property_csspropertywritingmode;
static constexpr CSSLonghand::Zoom property_csspropertyzoom;
static constexpr CSSLonghand::AlignContent property_csspropertyaligncontent;
static constexpr CSSLonghand::AlignItems property_csspropertyalignitems;
static constexpr CSSLonghand::AlignSelf property_csspropertyalignself;
static constexpr CSSLonghand::AlignmentBaseline property_csspropertyalignmentbaseline;
static constexpr CSSLonghand::All property_csspropertyall;
static constexpr CSSLonghand::BackdropFilter property_csspropertybackdropfilter;
static constexpr CSSLonghand::BackfaceVisibility property_csspropertybackfacevisibility;
static constexpr CSSLonghand::BackgroundAttachment property_csspropertybackgroundattachment;
static constexpr CSSLonghand::BackgroundBlendMode property_csspropertybackgroundblendmode;
static constexpr CSSLonghand::BackgroundClip property_csspropertybackgroundclip;
static constexpr CSSLonghand::BackgroundColor property_csspropertybackgroundcolor;
static constexpr CSSLonghand::BackgroundImage property_csspropertybackgroundimage;
static constexpr CSSLonghand::BackgroundOrigin property_csspropertybackgroundorigin;
static constexpr CSSLonghand::BackgroundPositionX property_csspropertybackgroundpositionx;
static constexpr CSSLonghand::BackgroundPositionY property_csspropertybackgroundpositiony;
static constexpr CSSLonghand::BackgroundRepeatX property_csspropertybackgroundrepeatx;
static constexpr CSSLonghand::BackgroundRepeatY property_csspropertybackgroundrepeaty;
static constexpr CSSLonghand::BackgroundSize property_csspropertybackgroundsize;
static constexpr CSSLonghand::BaselineShift property_csspropertybaselineshift;
static constexpr CSSLonghand::BlockSize property_csspropertyblocksize;
static constexpr CSSLonghand::BorderBottomColor property_csspropertyborderbottomcolor;
static constexpr CSSLonghand::BorderBottomLeftRadius property_csspropertyborderbottomleftradius;
static constexpr CSSLonghand::BorderBottomRightRadius property_csspropertyborderbottomrightradius;
static constexpr CSSLonghand::BorderBottomStyle property_csspropertyborderbottomstyle;
static constexpr CSSLonghand::BorderBottomWidth property_csspropertyborderbottomwidth;
static constexpr CSSLonghand::BorderCollapse property_csspropertybordercollapse;
static constexpr CSSLonghand::BorderImageOutset property_csspropertyborderimageoutset;
static constexpr CSSLonghand::BorderImageRepeat property_csspropertyborderimagerepeat;
static constexpr CSSLonghand::BorderImageSlice property_csspropertyborderimageslice;
static constexpr CSSLonghand::BorderImageSource property_csspropertyborderimagesource;
static constexpr CSSLonghand::BorderImageWidth property_csspropertyborderimagewidth;
static constexpr CSSLonghand::BorderLeftColor property_csspropertyborderleftcolor;
static constexpr CSSLonghand::BorderLeftStyle property_csspropertyborderleftstyle;
static constexpr CSSLonghand::BorderLeftWidth property_csspropertyborderleftwidth;
static constexpr CSSLonghand::BorderRightColor property_csspropertyborderrightcolor;
static constexpr CSSLonghand::BorderRightStyle property_csspropertyborderrightstyle;
static constexpr CSSLonghand::BorderRightWidth property_csspropertyborderrightwidth;
static constexpr CSSLonghand::BorderTopColor property_csspropertybordertopcolor;
static constexpr CSSLonghand::BorderTopLeftRadius property_csspropertybordertopleftradius;
static constexpr CSSLonghand::BorderTopRightRadius property_csspropertybordertoprightradius;
static constexpr CSSLonghand::BorderTopStyle property_csspropertybordertopstyle;
static constexpr CSSLonghand::BorderTopWidth property_csspropertybordertopwidth;
static constexpr CSSLonghand::Bottom property_csspropertybottom;
static constexpr CSSLonghand::BoxShadow property_csspropertyboxshadow;
static constexpr CSSLonghand::BoxSizing property_csspropertyboxsizing;
static constexpr CSSLonghand::BreakAfter property_csspropertybreakafter;
static constexpr CSSLonghand::BreakBefore property_csspropertybreakbefore;
static constexpr CSSLonghand::BreakInside property_csspropertybreakinside;
static constexpr CSSLonghand::BufferedRendering property_csspropertybufferedrendering;
static constexpr CSSLonghand::CaptionSide property_csspropertycaptionside;
static constexpr CSSLonghand::CaretColor property_csspropertycaretcolor;
static constexpr CSSLonghand::Clear property_csspropertyclear;
static constexpr CSSLonghand::Clip property_csspropertyclip;
static constexpr CSSLonghand::ClipPath property_csspropertyclippath;
static constexpr CSSLonghand::ClipRule property_csspropertycliprule;
static constexpr CSSLonghand::ColorInterpolation property_csspropertycolorinterpolation;
static constexpr CSSLonghand::ColorInterpolationFilters property_csspropertycolorinterpolationfilters;
static constexpr CSSLonghand::ColorRendering property_csspropertycolorrendering;
static constexpr CSSLonghand::ColumnCount property_csspropertycolumncount;
static constexpr CSSLonghand::ColumnFill property_csspropertycolumnfill;
static constexpr CSSLonghand::ColumnGap property_csspropertycolumngap;
static constexpr CSSLonghand::ColumnRuleColor property_csspropertycolumnrulecolor;
static constexpr CSSLonghand::ColumnRuleStyle property_csspropertycolumnrulestyle;
static constexpr CSSLonghand::ColumnRuleWidth property_csspropertycolumnrulewidth;
static constexpr CSSLonghand::ColumnSpan property_csspropertycolumnspan;
static constexpr CSSLonghand::ColumnWidth property_csspropertycolumnwidth;
static constexpr CSSLonghand::Contain property_csspropertycontain;
static constexpr CSSLonghand::Content property_csspropertycontent;
static constexpr CSSLonghand::CounterIncrement property_csspropertycounterincrement;
static constexpr CSSLonghand::CounterReset property_csspropertycounterreset;
static constexpr CSSLonghand::Cursor property_csspropertycursor;
static constexpr CSSLonghand::Cx property_csspropertycx;
static constexpr CSSLonghand::Cy property_csspropertycy;
static constexpr CSSLonghand::D property_csspropertyd;
static constexpr CSSLonghand::Display property_csspropertydisplay;
static constexpr CSSLonghand::DominantBaseline property_csspropertydominantbaseline;
static constexpr CSSLonghand::EmptyCells property_csspropertyemptycells;
static constexpr CSSLonghand::Fill property_csspropertyfill;
static constexpr CSSLonghand::FillOpacity property_csspropertyfillopacity;
static constexpr CSSLonghand::FillRule property_csspropertyfillrule;
static constexpr CSSLonghand::Filter property_csspropertyfilter;
static constexpr CSSLonghand::FlexBasis property_csspropertyflexbasis;
static constexpr CSSLonghand::FlexDirection property_csspropertyflexdirection;
static constexpr CSSLonghand::FlexGrow property_csspropertyflexgrow;
static constexpr CSSLonghand::FlexShrink property_csspropertyflexshrink;
static constexpr CSSLonghand::FlexWrap property_csspropertyflexwrap;
static constexpr CSSLonghand::Float property_csspropertyfloat;
static constexpr CSSLonghand::FloodColor property_csspropertyfloodcolor;
static constexpr CSSLonghand::FloodOpacity property_csspropertyfloodopacity;
static constexpr CSSLonghand::FontDisplay property_csspropertyfontdisplay;
static constexpr CSSLonghand::GridAutoColumns property_csspropertygridautocolumns;
static constexpr CSSLonghand::GridAutoFlow property_csspropertygridautoflow;
static constexpr CSSLonghand::GridAutoRows property_csspropertygridautorows;
static constexpr CSSLonghand::GridColumnEnd property_csspropertygridcolumnend;
static constexpr CSSLonghand::GridColumnStart property_csspropertygridcolumnstart;
static constexpr CSSLonghand::GridRowEnd property_csspropertygridrowend;
static constexpr CSSLonghand::GridRowStart property_csspropertygridrowstart;
static constexpr CSSLonghand::GridTemplateAreas property_csspropertygridtemplateareas;
static constexpr CSSLonghand::GridTemplateColumns property_csspropertygridtemplatecolumns;
static constexpr CSSLonghand::GridTemplateRows property_csspropertygridtemplaterows;
static constexpr CSSLonghand::Height property_csspropertyheight;
static constexpr CSSLonghand::Hyphens property_csspropertyhyphens;
static constexpr CSSLonghand::ImageOrientation property_csspropertyimageorientation;
static constexpr CSSLonghand::ImageRendering property_csspropertyimagerendering;
static constexpr CSSLonghand::InlineSize property_csspropertyinlinesize;
static constexpr CSSLonghand::Isolation property_csspropertyisolation;
static constexpr CSSLonghand::JustifyContent property_csspropertyjustifycontent;
static constexpr CSSLonghand::JustifyItems property_csspropertyjustifyitems;
static constexpr CSSLonghand::JustifySelf property_csspropertyjustifyself;
static constexpr CSSLonghand::Left property_csspropertyleft;
static constexpr CSSLonghand::LetterSpacing property_csspropertyletterspacing;
static constexpr CSSLonghand::LightingColor property_csspropertylightingcolor;
static constexpr CSSLonghand::LineBreak property_csspropertylinebreak;
static constexpr CSSLonghand::LineHeight property_csspropertylineheight;
static constexpr CSSLonghand::LineHeightStep property_csspropertylineheightstep;
static constexpr CSSLonghand::ListStyleImage property_csspropertyliststyleimage;
static constexpr CSSLonghand::ListStylePosition property_csspropertyliststyleposition;
static constexpr CSSLonghand::ListStyleType property_csspropertyliststyletype;
static constexpr CSSLonghand::MarginBottom property_csspropertymarginbottom;
static constexpr CSSLonghand::MarginLeft property_csspropertymarginleft;
static constexpr CSSLonghand::MarginRight property_csspropertymarginright;
static constexpr CSSLonghand::MarginTop property_csspropertymargintop;
static constexpr CSSLonghand::MarkerEnd property_csspropertymarkerend;
static constexpr CSSLonghand::MarkerMid property_csspropertymarkermid;
static constexpr CSSLonghand::MarkerStart property_csspropertymarkerstart;
static constexpr CSSLonghand::Mask property_csspropertymask;
static constexpr CSSLonghand::MaskSourceType property_csspropertymasksourcetype;
static constexpr CSSLonghand::MaskType property_csspropertymasktype;
static constexpr CSSLonghand::MaxBlockSize property_csspropertymaxblocksize;
static constexpr CSSLonghand::MaxHeight property_csspropertymaxheight;
static constexpr CSSLonghand::MaxInlineSize property_csspropertymaxinlinesize;
static constexpr CSSLonghand::MaxWidth property_csspropertymaxwidth;
static constexpr CSSLonghand::MaxZoom property_csspropertymaxzoom;
static constexpr CSSLonghand::MinBlockSize property_csspropertyminblocksize;
static constexpr CSSLonghand::MinHeight property_csspropertyminheight;
static constexpr CSSLonghand::MinInlineSize property_csspropertymininlinesize;
static constexpr CSSLonghand::MinWidth property_csspropertyminwidth;
static constexpr CSSLonghand::MinZoom property_csspropertyminzoom;
static constexpr CSSLonghand::MixBlendMode property_csspropertymixblendmode;
static constexpr CSSLonghand::ObjectFit property_csspropertyobjectfit;
static constexpr CSSLonghand::ObjectPosition property_csspropertyobjectposition;
static constexpr CSSLonghand::OffsetAnchor property_csspropertyoffsetanchor;
static constexpr CSSLonghand::OffsetDistance property_csspropertyoffsetdistance;
static constexpr CSSLonghand::OffsetPath property_csspropertyoffsetpath;
static constexpr CSSLonghand::OffsetPosition property_csspropertyoffsetposition;
static constexpr CSSLonghand::OffsetRotate property_csspropertyoffsetrotate;
static constexpr CSSLonghand::Opacity property_csspropertyopacity;
static constexpr CSSLonghand::Order property_csspropertyorder;
static constexpr CSSLonghand::Orientation property_csspropertyorientation;
static constexpr CSSLonghand::Orphans property_csspropertyorphans;
static constexpr CSSLonghand::OutlineColor property_csspropertyoutlinecolor;
static constexpr CSSLonghand::OutlineOffset property_csspropertyoutlineoffset;
static constexpr CSSLonghand::OutlineStyle property_csspropertyoutlinestyle;
static constexpr CSSLonghand::OutlineWidth property_csspropertyoutlinewidth;
static constexpr CSSLonghand::OverflowAnchor property_csspropertyoverflowanchor;
static constexpr CSSLonghand::OverflowWrap property_csspropertyoverflowwrap;
static constexpr CSSLonghand::OverflowX property_csspropertyoverflowx;
static constexpr CSSLonghand::OverflowY property_csspropertyoverflowy;
static constexpr CSSLonghand::OverscrollBehaviorX property_csspropertyoverscrollbehaviorx;
static constexpr CSSLonghand::OverscrollBehaviorY property_csspropertyoverscrollbehaviory;
static constexpr CSSLonghand::PaddingBottom property_csspropertypaddingbottom;
static constexpr CSSLonghand::PaddingLeft property_csspropertypaddingleft;
static constexpr CSSLonghand::PaddingRight property_csspropertypaddingright;
static constexpr CSSLonghand::PaddingTop property_csspropertypaddingtop;
static constexpr CSSLonghand::Page property_csspropertypage;
static constexpr CSSLonghand::PaintOrder property_csspropertypaintorder;
static constexpr CSSLonghand::Perspective property_csspropertyperspective;
static constexpr CSSLonghand::PerspectiveOrigin property_csspropertyperspectiveorigin;
static constexpr CSSLonghand::PointerEvents property_csspropertypointerevents;
static constexpr CSSLonghand::Position property_csspropertyposition;
static constexpr CSSLonghand::Quotes property_csspropertyquotes;
static constexpr CSSLonghand::R property_csspropertyr;
static constexpr CSSLonghand::Resize property_csspropertyresize;
static constexpr CSSLonghand::Right property_csspropertyright;
static constexpr CSSLonghand::Rotate property_csspropertyrotate;
static constexpr CSSLonghand::RowGap property_csspropertyrowgap;
static constexpr CSSLonghand::Rx property_csspropertyrx;
static constexpr CSSLonghand::Ry property_csspropertyry;
static constexpr CSSLonghand::Scale property_csspropertyscale;
static constexpr CSSLonghand::ScrollBehavior property_csspropertyscrollbehavior;
static constexpr CSSLonghand::ScrollCustomization property_csspropertyscrollcustomization;
static constexpr CSSLonghand::ScrollMarginBlockEnd property_csspropertyscrollmarginblockend;
static constexpr CSSLonghand::ScrollMarginBlockStart property_csspropertyscrollmarginblockstart;
static constexpr CSSLonghand::ScrollMarginBottom property_csspropertyscrollmarginbottom;
static constexpr CSSLonghand::ScrollMarginInlineEnd property_csspropertyscrollmargininlineend;
static constexpr CSSLonghand::ScrollMarginInlineStart property_csspropertyscrollmargininlinestart;
static constexpr CSSLonghand::ScrollMarginLeft property_csspropertyscrollmarginleft;
static constexpr CSSLonghand::ScrollMarginRight property_csspropertyscrollmarginright;
static constexpr CSSLonghand::ScrollMarginTop property_csspropertyscrollmargintop;
static constexpr CSSLonghand::ScrollPaddingBlockEnd property_csspropertyscrollpaddingblockend;
static constexpr CSSLonghand::ScrollPaddingBlockStart property_csspropertyscrollpaddingblockstart;
static constexpr CSSLonghand::ScrollPaddingBottom property_csspropertyscrollpaddingbottom;
static constexpr CSSLonghand::ScrollPaddingInlineEnd property_csspropertyscrollpaddinginlineend;
static constexpr CSSLonghand::ScrollPaddingInlineStart property_csspropertyscrollpaddinginlinestart;
static constexpr CSSLonghand::ScrollPaddingLeft property_csspropertyscrollpaddingleft;
static constexpr CSSLonghand::ScrollPaddingRight property_csspropertyscrollpaddingright;
static constexpr CSSLonghand::ScrollPaddingTop property_csspropertyscrollpaddingtop;
static constexpr CSSLonghand::ScrollSnapAlign property_csspropertyscrollsnapalign;
static constexpr CSSLonghand::ScrollSnapStop property_csspropertyscrollsnapstop;
static constexpr CSSLonghand::ScrollSnapType property_csspropertyscrollsnaptype;
static constexpr CSSLonghand::ShapeImageThreshold property_csspropertyshapeimagethreshold;
static constexpr CSSLonghand::ShapeMargin property_csspropertyshapemargin;
static constexpr CSSLonghand::ShapeOutside property_csspropertyshapeoutside;
static constexpr CSSLonghand::ShapeRendering property_csspropertyshaperendering;
static constexpr CSSLonghand::Size property_csspropertysize;
static constexpr CSSLonghand::Speak property_csspropertyspeak;
static constexpr CSSLonghand::Src property_csspropertysrc;
static constexpr CSSLonghand::StopColor property_csspropertystopcolor;
static constexpr CSSLonghand::StopOpacity property_csspropertystopopacity;
static constexpr CSSLonghand::Stroke property_csspropertystroke;
static constexpr CSSLonghand::StrokeDasharray property_csspropertystrokedasharray;
static constexpr CSSLonghand::StrokeDashoffset property_csspropertystrokedashoffset;
static constexpr CSSLonghand::StrokeLinecap property_csspropertystrokelinecap;
static constexpr CSSLonghand::StrokeLinejoin property_csspropertystrokelinejoin;
static constexpr CSSLonghand::StrokeMiterlimit property_csspropertystrokemiterlimit;
static constexpr CSSLonghand::StrokeOpacity property_csspropertystrokeopacity;
static constexpr CSSLonghand::StrokeWidth property_csspropertystrokewidth;
static constexpr CSSLonghand::TabSize property_csspropertytabsize;
static constexpr CSSLonghand::TableLayout property_csspropertytablelayout;
static constexpr CSSLonghand::TextAlign property_csspropertytextalign;
static constexpr CSSLonghand::TextAlignLast property_csspropertytextalignlast;
static constexpr CSSLonghand::TextAnchor property_csspropertytextanchor;
static constexpr CSSLonghand::TextCombineUpright property_csspropertytextcombineupright;
static constexpr CSSLonghand::TextDecorationColor property_csspropertytextdecorationcolor;
static constexpr CSSLonghand::TextDecorationLine property_csspropertytextdecorationline;
static constexpr CSSLonghand::TextDecorationSkipInk property_csspropertytextdecorationskipink;
static constexpr CSSLonghand::TextDecorationStyle property_csspropertytextdecorationstyle;
static constexpr CSSLonghand::TextIndent property_csspropertytextindent;
static constexpr CSSLonghand::TextJustify property_csspropertytextjustify;
static constexpr CSSLonghand::TextOverflow property_csspropertytextoverflow;
static constexpr CSSLonghand::TextShadow property_csspropertytextshadow;
static constexpr CSSLonghand::TextSizeAdjust property_csspropertytextsizeadjust;
static constexpr CSSLonghand::TextTransform property_csspropertytexttransform;
static constexpr CSSLonghand::TextUnderlinePosition property_csspropertytextunderlineposition;
static constexpr CSSLonghand::Top property_csspropertytop;
static constexpr CSSLonghand::TouchAction property_csspropertytouchaction;
static constexpr CSSLonghand::Transform property_csspropertytransform;
static constexpr CSSLonghand::TransformBox property_csspropertytransformbox;
static constexpr CSSLonghand::TransformOrigin property_csspropertytransformorigin;
static constexpr CSSLonghand::TransformStyle property_csspropertytransformstyle;
static constexpr CSSLonghand::Translate property_csspropertytranslate;
static constexpr CSSLonghand::UnicodeBidi property_csspropertyunicodebidi;
static constexpr CSSLonghand::UnicodeRange property_csspropertyunicoderange;
static constexpr CSSLonghand::UserSelect property_csspropertyuserselect;
static constexpr CSSLonghand::UserZoom property_csspropertyuserzoom;
static constexpr CSSLonghand::VectorEffect property_csspropertyvectoreffect;
static constexpr CSSLonghand::VerticalAlign property_csspropertyverticalalign;
static constexpr CSSLonghand::ViewportFit property_csspropertyviewportfit;
static constexpr CSSLonghand::Visibility property_csspropertyvisibility;
static constexpr CSSLonghand::WebkitAppRegion property_csspropertywebkitappregion;
static constexpr CSSLonghand::WebkitAppearance property_csspropertywebkitappearance;
static constexpr CSSLonghand::WebkitBorderAfterColor property_csspropertywebkitborderaftercolor;
static constexpr CSSLonghand::WebkitBorderAfterStyle property_csspropertywebkitborderafterstyle;
static constexpr CSSLonghand::WebkitBorderAfterWidth property_csspropertywebkitborderafterwidth;
static constexpr CSSLonghand::WebkitBorderBeforeColor property_csspropertywebkitborderbeforecolor;
static constexpr CSSLonghand::WebkitBorderBeforeStyle property_csspropertywebkitborderbeforestyle;
static constexpr CSSLonghand::WebkitBorderBeforeWidth property_csspropertywebkitborderbeforewidth;
static constexpr CSSLonghand::WebkitBorderEndColor property_csspropertywebkitborderendcolor;
static constexpr CSSLonghand::WebkitBorderEndStyle property_csspropertywebkitborderendstyle;
static constexpr CSSLonghand::WebkitBorderEndWidth property_csspropertywebkitborderendwidth;
static constexpr CSSLonghand::WebkitBorderHorizontalSpacing property_csspropertywebkitborderhorizontalspacing;
static constexpr CSSLonghand::WebkitBorderImage property_csspropertywebkitborderimage;
static constexpr CSSLonghand::WebkitBorderStartColor property_csspropertywebkitborderstartcolor;
static constexpr CSSLonghand::WebkitBorderStartStyle property_csspropertywebkitborderstartstyle;
static constexpr CSSLonghand::WebkitBorderStartWidth property_csspropertywebkitborderstartwidth;
static constexpr CSSLonghand::WebkitBorderVerticalSpacing property_csspropertywebkitborderverticalspacing;
static constexpr CSSLonghand::WebkitBoxAlign property_csspropertywebkitboxalign;
static constexpr CSSLonghand::WebkitBoxDecorationBreak property_csspropertywebkitboxdecorationbreak;
static constexpr CSSLonghand::WebkitBoxDirection property_csspropertywebkitboxdirection;
static constexpr CSSLonghand::WebkitBoxFlex property_csspropertywebkitboxflex;
static constexpr CSSLonghand::WebkitBoxOrdinalGroup property_csspropertywebkitboxordinalgroup;
static constexpr CSSLonghand::WebkitBoxOrient property_csspropertywebkitboxorient;
static constexpr CSSLonghand::WebkitBoxPack property_csspropertywebkitboxpack;
static constexpr CSSLonghand::WebkitBoxReflect property_csspropertywebkitboxreflect;
static constexpr CSSLonghand::WebkitFontSizeDelta property_csspropertywebkitfontsizedelta;
static constexpr CSSLonghand::WebkitHighlight property_csspropertywebkithighlight;
static constexpr CSSLonghand::WebkitHyphenateCharacter property_csspropertywebkithyphenatecharacter;
static constexpr CSSLonghand::WebkitLineBreak property_csspropertywebkitlinebreak;
static constexpr CSSLonghand::WebkitLineClamp property_csspropertywebkitlineclamp;
static constexpr CSSLonghand::WebkitLogicalHeight property_csspropertywebkitlogicalheight;
static constexpr CSSLonghand::WebkitLogicalWidth property_csspropertywebkitlogicalwidth;
static constexpr CSSLonghand::WebkitMarginAfter property_csspropertywebkitmarginafter;
static constexpr CSSLonghand::WebkitMarginAfterCollapse property_csspropertywebkitmarginaftercollapse;
static constexpr CSSLonghand::WebkitMarginBefore property_csspropertywebkitmarginbefore;
static constexpr CSSLonghand::WebkitMarginBeforeCollapse property_csspropertywebkitmarginbeforecollapse;
static constexpr CSSLonghand::WebkitMarginBottomCollapse property_csspropertywebkitmarginbottomcollapse;
static constexpr CSSLonghand::WebkitMarginEnd property_csspropertywebkitmarginend;
static constexpr CSSLonghand::WebkitMarginStart property_csspropertywebkitmarginstart;
static constexpr CSSLonghand::WebkitMarginTopCollapse property_csspropertywebkitmargintopcollapse;
static constexpr CSSLonghand::WebkitMaskBoxImageOutset property_csspropertywebkitmaskboximageoutset;
static constexpr CSSLonghand::WebkitMaskBoxImageRepeat property_csspropertywebkitmaskboximagerepeat;
static constexpr CSSLonghand::WebkitMaskBoxImageSlice property_csspropertywebkitmaskboximageslice;
static constexpr CSSLonghand::WebkitMaskBoxImageSource property_csspropertywebkitmaskboximagesource;
static constexpr CSSLonghand::WebkitMaskBoxImageWidth property_csspropertywebkitmaskboximagewidth;
static constexpr CSSLonghand::WebkitMaskClip property_csspropertywebkitmaskclip;
static constexpr CSSLonghand::WebkitMaskComposite property_csspropertywebkitmaskcomposite;
static constexpr CSSLonghand::WebkitMaskImage property_csspropertywebkitmaskimage;
static constexpr CSSLonghand::WebkitMaskOrigin property_csspropertywebkitmaskorigin;
static constexpr CSSLonghand::WebkitMaskPositionX property_csspropertywebkitmaskpositionx;
static constexpr CSSLonghand::WebkitMaskPositionY property_csspropertywebkitmaskpositiony;
static constexpr CSSLonghand::WebkitMaskRepeatX property_csspropertywebkitmaskrepeatx;
static constexpr CSSLonghand::WebkitMaskRepeatY property_csspropertywebkitmaskrepeaty;
static constexpr CSSLonghand::WebkitMaskSize property_csspropertywebkitmasksize;
static constexpr CSSLonghand::WebkitMaxLogicalHeight property_csspropertywebkitmaxlogicalheight;
static constexpr CSSLonghand::WebkitMaxLogicalWidth property_csspropertywebkitmaxlogicalwidth;
static constexpr CSSLonghand::WebkitMinLogicalHeight property_csspropertywebkitminlogicalheight;
static constexpr CSSLonghand::WebkitMinLogicalWidth property_csspropertywebkitminlogicalwidth;
static constexpr CSSLonghand::WebkitPaddingAfter property_csspropertywebkitpaddingafter;
static constexpr CSSLonghand::WebkitPaddingBefore property_csspropertywebkitpaddingbefore;
static constexpr CSSLonghand::WebkitPaddingEnd property_csspropertywebkitpaddingend;
static constexpr CSSLonghand::WebkitPaddingStart property_csspropertywebkitpaddingstart;
static constexpr CSSLonghand::WebkitPerspectiveOriginX property_csspropertywebkitperspectiveoriginx;
static constexpr CSSLonghand::WebkitPerspectiveOriginY property_csspropertywebkitperspectiveoriginy;
static constexpr CSSLonghand::WebkitPrintColorAdjust property_csspropertywebkitprintcoloradjust;
static constexpr CSSLonghand::WebkitRtlOrdering property_csspropertywebkitrtlordering;
static constexpr CSSLonghand::WebkitRubyPosition property_csspropertywebkitrubyposition;
static constexpr CSSLonghand::WebkitTapHighlightColor property_csspropertywebkittaphighlightcolor;
static constexpr CSSLonghand::WebkitTextCombine property_csspropertywebkittextcombine;
static constexpr CSSLonghand::WebkitTextDecorationsInEffect property_csspropertywebkittextdecorationsineffect;
static constexpr CSSLonghand::WebkitTextEmphasisColor property_csspropertywebkittextemphasiscolor;
static constexpr CSSLonghand::WebkitTextEmphasisPosition property_csspropertywebkittextemphasisposition;
static constexpr CSSLonghand::WebkitTextEmphasisStyle property_csspropertywebkittextemphasisstyle;
static constexpr CSSLonghand::WebkitTextFillColor property_csspropertywebkittextfillcolor;
static constexpr CSSLonghand::WebkitTextSecurity property_csspropertywebkittextsecurity;
static constexpr CSSLonghand::WebkitTextStrokeColor property_csspropertywebkittextstrokecolor;
static constexpr CSSLonghand::WebkitTextStrokeWidth property_csspropertywebkittextstrokewidth;
static constexpr CSSLonghand::WebkitTransformOriginX property_csspropertywebkittransformoriginx;
static constexpr CSSLonghand::WebkitTransformOriginY property_csspropertywebkittransformoriginy;
static constexpr CSSLonghand::WebkitTransformOriginZ property_csspropertywebkittransformoriginz;
static constexpr CSSLonghand::WebkitUserDrag property_csspropertywebkituserdrag;
static constexpr CSSLonghand::WebkitUserModify property_csspropertywebkitusermodify;
static constexpr CSSLonghand::WhiteSpace property_csspropertywhitespace;
static constexpr CSSLonghand::Widows property_csspropertywidows;
static constexpr CSSLonghand::Width property_csspropertywidth;
static constexpr CSSLonghand::WillChange property_csspropertywillchange;
static constexpr CSSLonghand::WordBreak property_csspropertywordbreak;
static constexpr CSSLonghand::WordSpacing property_csspropertywordspacing;
static constexpr CSSLonghand::WordWrap property_csspropertywordwrap;
static constexpr CSSLonghand::X property_csspropertyx;
static constexpr CSSLonghand::Y property_csspropertyy;
static constexpr CSSLonghand::ZIndex property_csspropertyzindex;
static constexpr CSSShorthand::Animation property_csspropertyanimation;
static constexpr CSSShorthand::Background property_csspropertybackground;
static constexpr CSSShorthand::BackgroundPosition property_csspropertybackgroundposition;
static constexpr CSSShorthand::BackgroundRepeat property_csspropertybackgroundrepeat;
static constexpr CSSShorthand::Border property_csspropertyborder;
static constexpr CSSShorthand::BorderBottom property_csspropertyborderbottom;
static constexpr CSSShorthand::BorderColor property_csspropertybordercolor;
static constexpr CSSShorthand::BorderImage property_csspropertyborderimage;
static constexpr CSSShorthand::BorderLeft property_csspropertyborderleft;
static constexpr CSSShorthand::BorderRadius property_csspropertyborderradius;
static constexpr CSSShorthand::BorderRight property_csspropertyborderright;
static constexpr CSSShorthand::BorderSpacing property_csspropertyborderspacing;
static constexpr CSSShorthand::BorderStyle property_csspropertyborderstyle;
static constexpr CSSShorthand::BorderTop property_csspropertybordertop;
static constexpr CSSShorthand::BorderWidth property_csspropertyborderwidth;
static constexpr CSSShorthand::ColumnRule property_csspropertycolumnrule;
static constexpr CSSShorthand::Columns property_csspropertycolumns;
static constexpr CSSShorthand::Flex property_csspropertyflex;
static constexpr CSSShorthand::FlexFlow property_csspropertyflexflow;
static constexpr CSSShorthand::Font property_csspropertyfont;
static constexpr CSSShorthand::FontVariant property_csspropertyfontvariant;
static constexpr CSSShorthand::Gap property_csspropertygap;
static constexpr CSSShorthand::Grid property_csspropertygrid;
static constexpr CSSShorthand::GridArea property_csspropertygridarea;
static constexpr CSSShorthand::GridColumn property_csspropertygridcolumn;
static constexpr CSSShorthand::GridColumnGap property_csspropertygridcolumngap;
static constexpr CSSShorthand::GridGap property_csspropertygridgap;
static constexpr CSSShorthand::GridRow property_csspropertygridrow;
static constexpr CSSShorthand::GridRowGap property_csspropertygridrowgap;
static constexpr CSSShorthand::GridTemplate property_csspropertygridtemplate;
static constexpr CSSShorthand::ListStyle property_csspropertyliststyle;
static constexpr CSSShorthand::Margin property_csspropertymargin;
static constexpr CSSShorthand::Marker property_csspropertymarker;
static constexpr CSSShorthand::Offset property_csspropertyoffset;
static constexpr CSSShorthand::Outline property_csspropertyoutline;
static constexpr CSSShorthand::Overflow property_csspropertyoverflow;
static constexpr CSSShorthand::OverscrollBehavior property_csspropertyoverscrollbehavior;
static constexpr CSSShorthand::Padding property_csspropertypadding;
static constexpr CSSShorthand::PageBreakAfter property_csspropertypagebreakafter;
static constexpr CSSShorthand::PageBreakBefore property_csspropertypagebreakbefore;
static constexpr CSSShorthand::PageBreakInside property_csspropertypagebreakinside;
static constexpr CSSShorthand::PlaceContent property_csspropertyplacecontent;
static constexpr CSSShorthand::PlaceItems property_csspropertyplaceitems;
static constexpr CSSShorthand::PlaceSelf property_csspropertyplaceself;
static constexpr CSSShorthand::ScrollMargin property_csspropertyscrollmargin;
static constexpr CSSShorthand::ScrollMarginBlock property_csspropertyscrollmarginblock;
static constexpr CSSShorthand::ScrollMarginInline property_csspropertyscrollmargininline;
static constexpr CSSShorthand::ScrollPadding property_csspropertyscrollpadding;
static constexpr CSSShorthand::ScrollPaddingBlock property_csspropertyscrollpaddingblock;
static constexpr CSSShorthand::ScrollPaddingInline property_csspropertyscrollpaddinginline;
static constexpr CSSShorthand::TextDecoration property_csspropertytextdecoration;
static constexpr CSSShorthand::Transition property_csspropertytransition;
static constexpr CSSShorthand::WebkitBorderAfter property_csspropertywebkitborderafter;
static constexpr CSSShorthand::WebkitBorderBefore property_csspropertywebkitborderbefore;
static constexpr CSSShorthand::WebkitBorderEnd property_csspropertywebkitborderend;
static constexpr CSSShorthand::WebkitBorderStart property_csspropertywebkitborderstart;
static constexpr CSSShorthand::WebkitColumnBreakAfter property_csspropertywebkitcolumnbreakafter;
static constexpr CSSShorthand::WebkitColumnBreakBefore property_csspropertywebkitcolumnbreakbefore;
static constexpr CSSShorthand::WebkitColumnBreakInside property_csspropertywebkitcolumnbreakinside;
static constexpr CSSShorthand::WebkitMarginCollapse property_csspropertywebkitmargincollapse;
static constexpr CSSShorthand::WebkitMask property_csspropertywebkitmask;
static constexpr CSSShorthand::WebkitMaskBoxImage property_csspropertywebkitmaskboximage;
static constexpr CSSShorthand::WebkitMaskPosition property_csspropertywebkitmaskposition;
static constexpr CSSShorthand::WebkitMaskRepeat property_csspropertywebkitmaskrepeat;
static constexpr CSSShorthand::WebkitTextEmphasis property_csspropertywebkittextemphasis;
static constexpr CSSShorthand::WebkitTextStroke property_csspropertywebkittextstroke;
static constexpr CSSLonghand::WebkitAnimationDelay property_csspropertyaliaswebkitanimationdelay;
static constexpr CSSLonghand::WebkitAnimationDirection property_csspropertyaliaswebkitanimationdirection;
static constexpr CSSLonghand::WebkitAnimationDuration property_csspropertyaliaswebkitanimationduration;
static constexpr CSSLonghand::WebkitAnimationFillMode property_csspropertyaliaswebkitanimationfillmode;
static constexpr CSSLonghand::WebkitAnimationIterationCount property_csspropertyaliaswebkitanimationiterationcount;
static constexpr CSSLonghand::WebkitAnimationName property_csspropertyaliaswebkitanimationname;
static constexpr CSSLonghand::WebkitAnimationPlayState property_csspropertyaliaswebkitanimationplaystate;
static constexpr CSSLonghand::WebkitAnimationTimingFunction property_csspropertyaliaswebkitanimationtimingfunction;
static constexpr CSSLonghand::WebkitTransitionDelay property_csspropertyaliaswebkittransitiondelay;
static constexpr CSSLonghand::WebkitTransitionDuration property_csspropertyaliaswebkittransitionduration;
static constexpr CSSLonghand::WebkitTransitionProperty property_csspropertyaliaswebkittransitionproperty;
static constexpr CSSLonghand::WebkitTransitionTimingFunction property_csspropertyaliaswebkittransitiontimingfunction;
static constexpr CSSLonghand::WebkitFontFeatureSettings property_csspropertyaliaswebkitfontfeaturesettings;
static constexpr CSSLonghand::EpubTextOrientation property_csspropertyaliasepubtextorientation;
static constexpr CSSLonghand::EpubWritingMode property_csspropertyaliasepubwritingmode;
static constexpr CSSLonghand::WebkitAlignContent property_csspropertyaliaswebkitaligncontent;
static constexpr CSSLonghand::WebkitAlignItems property_csspropertyaliaswebkitalignitems;
static constexpr CSSLonghand::WebkitAlignSelf property_csspropertyaliaswebkitalignself;
static constexpr CSSLonghand::WebkitBackfaceVisibility property_csspropertyaliaswebkitbackfacevisibility;
static constexpr CSSLonghand::WebkitBackgroundClip property_csspropertyaliaswebkitbackgroundclip;
static constexpr CSSLonghand::WebkitBackgroundOrigin property_csspropertyaliaswebkitbackgroundorigin;
static constexpr CSSLonghand::WebkitBackgroundSize property_csspropertyaliaswebkitbackgroundsize;
static constexpr CSSLonghand::WebkitBorderBottomLeftRadius property_csspropertyaliaswebkitborderbottomleftradius;
static constexpr CSSLonghand::WebkitBorderBottomRightRadius property_csspropertyaliaswebkitborderbottomrightradius;
static constexpr CSSLonghand::WebkitBorderTopLeftRadius property_csspropertyaliaswebkitbordertopleftradius;
static constexpr CSSLonghand::WebkitBorderTopRightRadius property_csspropertyaliaswebkitbordertoprightradius;
static constexpr CSSLonghand::WebkitBoxShadow property_csspropertyaliaswebkitboxshadow;
static constexpr CSSLonghand::WebkitBoxSizing property_csspropertyaliaswebkitboxsizing;
static constexpr CSSLonghand::EpubCaptionSide property_csspropertyaliasepubcaptionside;
static constexpr CSSLonghand::WebkitClipPath property_csspropertyaliaswebkitclippath;
static constexpr CSSLonghand::WebkitColumnCount property_csspropertyaliaswebkitcolumncount;
static constexpr CSSLonghand::WebkitColumnGap property_csspropertyaliaswebkitcolumngap;
static constexpr CSSLonghand::WebkitColumnRuleColor property_csspropertyaliaswebkitcolumnrulecolor;
static constexpr CSSLonghand::WebkitColumnRuleStyle property_csspropertyaliaswebkitcolumnrulestyle;
static constexpr CSSLonghand::WebkitColumnRuleWidth property_csspropertyaliaswebkitcolumnrulewidth;
static constexpr CSSLonghand::WebkitColumnSpan property_csspropertyaliaswebkitcolumnspan;
static constexpr CSSLonghand::WebkitColumnWidth property_csspropertyaliaswebkitcolumnwidth;
static constexpr CSSLonghand::WebkitFilter property_csspropertyaliaswebkitfilter;
static constexpr CSSLonghand::WebkitFlexBasis property_csspropertyaliaswebkitflexbasis;
static constexpr CSSLonghand::WebkitFlexDirection property_csspropertyaliaswebkitflexdirection;
static constexpr CSSLonghand::WebkitFlexGrow property_csspropertyaliaswebkitflexgrow;
static constexpr CSSLonghand::WebkitFlexShrink property_csspropertyaliaswebkitflexshrink;
static constexpr CSSLonghand::WebkitFlexWrap property_csspropertyaliaswebkitflexwrap;
static constexpr CSSLonghand::WebkitJustifyContent property_csspropertyaliaswebkitjustifycontent;
static constexpr CSSLonghand::WebkitOpacity property_csspropertyaliaswebkitopacity;
static constexpr CSSLonghand::WebkitOrder property_csspropertyaliaswebkitorder;
static constexpr CSSLonghand::WebkitPerspective property_csspropertyaliaswebkitperspective;
static constexpr CSSLonghand::WebkitPerspectiveOrigin property_csspropertyaliaswebkitperspectiveorigin;
static constexpr CSSLonghand::WebkitShapeImageThreshold property_csspropertyaliaswebkitshapeimagethreshold;
static constexpr CSSLonghand::WebkitShapeMargin property_csspropertyaliaswebkitshapemargin;
static constexpr CSSLonghand::WebkitShapeOutside property_csspropertyaliaswebkitshapeoutside;
static constexpr CSSLonghand::WebkitTextSizeAdjust property_csspropertyaliaswebkittextsizeadjust;
static constexpr CSSLonghand::EpubTextTransform property_csspropertyaliasepubtexttransform;
static constexpr CSSLonghand::WebkitTransform property_csspropertyaliaswebkittransform;
static constexpr CSSLonghand::WebkitTransformOrigin property_csspropertyaliaswebkittransformorigin;
static constexpr CSSLonghand::WebkitTransformStyle property_csspropertyaliaswebkittransformstyle;
static constexpr CSSLonghand::WebkitUserSelect property_csspropertyaliaswebkituserselect;
static constexpr CSSLonghand::EpubTextCombine property_csspropertyaliasepubtextcombine;
static constexpr CSSLonghand::EpubTextEmphasisColor property_csspropertyaliasepubtextemphasiscolor;
static constexpr CSSLonghand::EpubTextEmphasisStyle property_csspropertyaliasepubtextemphasisstyle;
static constexpr CSSLonghand::EpubWordBreak property_csspropertyaliasepubwordbreak;
static constexpr CSSShorthand::WebkitAnimation property_csspropertyaliaswebkitanimation;
static constexpr CSSShorthand::WebkitBorderRadius property_csspropertyaliaswebkitborderradius;
static constexpr CSSShorthand::WebkitColumnRule property_csspropertyaliaswebkitcolumnrule;
static constexpr CSSShorthand::WebkitColumns property_csspropertyaliaswebkitcolumns;
static constexpr CSSShorthand::WebkitFlex property_csspropertyaliaswebkitflex;
static constexpr CSSShorthand::WebkitFlexFlow property_csspropertyaliaswebkitflexflow;
static constexpr CSSShorthand::WebkitTransition property_csspropertyaliaswebkittransition;
static constexpr CSSShorthand::EpubTextEmphasis property_csspropertyaliasepubtextemphasis;

} // namespace

const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyVariableInternal() {
  return property_csspropertyvariable;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationDelayInternal() {
  return property_csspropertyanimationdelay;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationDirectionInternal() {
  return property_csspropertyanimationdirection;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationDurationInternal() {
  return property_csspropertyanimationduration;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationFillModeInternal() {
  return property_csspropertyanimationfillmode;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationIterationCountInternal() {
  return property_csspropertyanimationiterationcount;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationNameInternal() {
  return property_csspropertyanimationname;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationPlayStateInternal() {
  return property_csspropertyanimationplaystate;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationTimingFunctionInternal() {
  return property_csspropertyanimationtimingfunction;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransitionDelayInternal() {
  return property_csspropertytransitiondelay;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransitionDurationInternal() {
  return property_csspropertytransitionduration;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransitionPropertyInternal() {
  return property_csspropertytransitionproperty;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransitionTimingFunctionInternal() {
  return property_csspropertytransitiontimingfunction;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColorInternal() {
  return property_csspropertycolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyDirectionInternal() {
  return property_csspropertydirection;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontFamilyInternal() {
  return property_csspropertyfontfamily;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontFeatureSettingsInternal() {
  return property_csspropertyfontfeaturesettings;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontKerningInternal() {
  return property_csspropertyfontkerning;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontSizeInternal() {
  return property_csspropertyfontsize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontSizeAdjustInternal() {
  return property_csspropertyfontsizeadjust;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontStretchInternal() {
  return property_csspropertyfontstretch;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontStyleInternal() {
  return property_csspropertyfontstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariantCapsInternal() {
  return property_csspropertyfontvariantcaps;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariantEastAsianInternal() {
  return property_csspropertyfontvarianteastasian;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariantLigaturesInternal() {
  return property_csspropertyfontvariantligatures;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariantNumericInternal() {
  return property_csspropertyfontvariantnumeric;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariationSettingsInternal() {
  return property_csspropertyfontvariationsettings;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontWeightInternal() {
  return property_csspropertyfontweight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextOrientationInternal() {
  return property_csspropertytextorientation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextRenderingInternal() {
  return property_csspropertytextrendering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitFontSmoothingInternal() {
  return property_csspropertywebkitfontsmoothing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitLocaleInternal() {
  return property_csspropertywebkitlocale;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextOrientationInternal() {
  return property_csspropertywebkittextorientation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitWritingModeInternal() {
  return property_csspropertywebkitwritingmode;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWritingModeInternal() {
  return property_csspropertywritingmode;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyZoomInternal() {
  return property_csspropertyzoom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAlignContentInternal() {
  return property_csspropertyaligncontent;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAlignItemsInternal() {
  return property_csspropertyalignitems;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAlignSelfInternal() {
  return property_csspropertyalignself;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAlignmentBaselineInternal() {
  return property_csspropertyalignmentbaseline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAllInternal() {
  return property_csspropertyall;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackdropFilterInternal() {
  return property_csspropertybackdropfilter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackfaceVisibilityInternal() {
  return property_csspropertybackfacevisibility;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundAttachmentInternal() {
  return property_csspropertybackgroundattachment;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundBlendModeInternal() {
  return property_csspropertybackgroundblendmode;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundClipInternal() {
  return property_csspropertybackgroundclip;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundColorInternal() {
  return property_csspropertybackgroundcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundImageInternal() {
  return property_csspropertybackgroundimage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundOriginInternal() {
  return property_csspropertybackgroundorigin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundPositionXInternal() {
  return property_csspropertybackgroundpositionx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundPositionYInternal() {
  return property_csspropertybackgroundpositiony;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundRepeatXInternal() {
  return property_csspropertybackgroundrepeatx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundRepeatYInternal() {
  return property_csspropertybackgroundrepeaty;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundSizeInternal() {
  return property_csspropertybackgroundsize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBaselineShiftInternal() {
  return property_csspropertybaselineshift;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBlockSizeInternal() {
  return property_csspropertyblocksize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomColorInternal() {
  return property_csspropertyborderbottomcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomLeftRadiusInternal() {
  return property_csspropertyborderbottomleftradius;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomRightRadiusInternal() {
  return property_csspropertyborderbottomrightradius;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomStyleInternal() {
  return property_csspropertyborderbottomstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomWidthInternal() {
  return property_csspropertyborderbottomwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderCollapseInternal() {
  return property_csspropertybordercollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageOutsetInternal() {
  return property_csspropertyborderimageoutset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageRepeatInternal() {
  return property_csspropertyborderimagerepeat;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageSliceInternal() {
  return property_csspropertyborderimageslice;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageSourceInternal() {
  return property_csspropertyborderimagesource;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageWidthInternal() {
  return property_csspropertyborderimagewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderLeftColorInternal() {
  return property_csspropertyborderleftcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderLeftStyleInternal() {
  return property_csspropertyborderleftstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderLeftWidthInternal() {
  return property_csspropertyborderleftwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderRightColorInternal() {
  return property_csspropertyborderrightcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderRightStyleInternal() {
  return property_csspropertyborderrightstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderRightWidthInternal() {
  return property_csspropertyborderrightwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopColorInternal() {
  return property_csspropertybordertopcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopLeftRadiusInternal() {
  return property_csspropertybordertopleftradius;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopRightRadiusInternal() {
  return property_csspropertybordertoprightradius;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopStyleInternal() {
  return property_csspropertybordertopstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopWidthInternal() {
  return property_csspropertybordertopwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBottomInternal() {
  return property_csspropertybottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBoxShadowInternal() {
  return property_csspropertyboxshadow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBoxSizingInternal() {
  return property_csspropertyboxsizing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBreakAfterInternal() {
  return property_csspropertybreakafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBreakBeforeInternal() {
  return property_csspropertybreakbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBreakInsideInternal() {
  return property_csspropertybreakinside;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBufferedRenderingInternal() {
  return property_csspropertybufferedrendering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCaptionSideInternal() {
  return property_csspropertycaptionside;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCaretColorInternal() {
  return property_csspropertycaretcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyClearInternal() {
  return property_csspropertyclear;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyClipInternal() {
  return property_csspropertyclip;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyClipPathInternal() {
  return property_csspropertyclippath;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyClipRuleInternal() {
  return property_csspropertycliprule;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColorInterpolationInternal() {
  return property_csspropertycolorinterpolation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColorInterpolationFiltersInternal() {
  return property_csspropertycolorinterpolationfilters;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColorRenderingInternal() {
  return property_csspropertycolorrendering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnCountInternal() {
  return property_csspropertycolumncount;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnFillInternal() {
  return property_csspropertycolumnfill;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnGapInternal() {
  return property_csspropertycolumngap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnRuleColorInternal() {
  return property_csspropertycolumnrulecolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnRuleStyleInternal() {
  return property_csspropertycolumnrulestyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnRuleWidthInternal() {
  return property_csspropertycolumnrulewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnSpanInternal() {
  return property_csspropertycolumnspan;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnWidthInternal() {
  return property_csspropertycolumnwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyContainInternal() {
  return property_csspropertycontain;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyContentInternal() {
  return property_csspropertycontent;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCounterIncrementInternal() {
  return property_csspropertycounterincrement;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCounterResetInternal() {
  return property_csspropertycounterreset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCursorInternal() {
  return property_csspropertycursor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCxInternal() {
  return property_csspropertycx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyCyInternal() {
  return property_csspropertycy;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyDInternal() {
  return property_csspropertyd;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyDisplayInternal() {
  return property_csspropertydisplay;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyDominantBaselineInternal() {
  return property_csspropertydominantbaseline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyEmptyCellsInternal() {
  return property_csspropertyemptycells;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFillInternal() {
  return property_csspropertyfill;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFillOpacityInternal() {
  return property_csspropertyfillopacity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFillRuleInternal() {
  return property_csspropertyfillrule;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFilterInternal() {
  return property_csspropertyfilter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexBasisInternal() {
  return property_csspropertyflexbasis;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexDirectionInternal() {
  return property_csspropertyflexdirection;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexGrowInternal() {
  return property_csspropertyflexgrow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexShrinkInternal() {
  return property_csspropertyflexshrink;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexWrapInternal() {
  return property_csspropertyflexwrap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFloatInternal() {
  return property_csspropertyfloat;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFloodColorInternal() {
  return property_csspropertyfloodcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFloodOpacityInternal() {
  return property_csspropertyfloodopacity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontDisplayInternal() {
  return property_csspropertyfontdisplay;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridAutoColumnsInternal() {
  return property_csspropertygridautocolumns;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridAutoFlowInternal() {
  return property_csspropertygridautoflow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridAutoRowsInternal() {
  return property_csspropertygridautorows;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridColumnEndInternal() {
  return property_csspropertygridcolumnend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridColumnStartInternal() {
  return property_csspropertygridcolumnstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridRowEndInternal() {
  return property_csspropertygridrowend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridRowStartInternal() {
  return property_csspropertygridrowstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridTemplateAreasInternal() {
  return property_csspropertygridtemplateareas;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridTemplateColumnsInternal() {
  return property_csspropertygridtemplatecolumns;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridTemplateRowsInternal() {
  return property_csspropertygridtemplaterows;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyHeightInternal() {
  return property_csspropertyheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyHyphensInternal() {
  return property_csspropertyhyphens;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyImageOrientationInternal() {
  return property_csspropertyimageorientation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyImageRenderingInternal() {
  return property_csspropertyimagerendering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyInlineSizeInternal() {
  return property_csspropertyinlinesize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyIsolationInternal() {
  return property_csspropertyisolation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyJustifyContentInternal() {
  return property_csspropertyjustifycontent;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyJustifyItemsInternal() {
  return property_csspropertyjustifyitems;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyJustifySelfInternal() {
  return property_csspropertyjustifyself;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLeftInternal() {
  return property_csspropertyleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLetterSpacingInternal() {
  return property_csspropertyletterspacing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLightingColorInternal() {
  return property_csspropertylightingcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLineBreakInternal() {
  return property_csspropertylinebreak;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLineHeightInternal() {
  return property_csspropertylineheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyLineHeightStepInternal() {
  return property_csspropertylineheightstep;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyListStyleImageInternal() {
  return property_csspropertyliststyleimage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyListStylePositionInternal() {
  return property_csspropertyliststyleposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyListStyleTypeInternal() {
  return property_csspropertyliststyletype;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarginBottomInternal() {
  return property_csspropertymarginbottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarginLeftInternal() {
  return property_csspropertymarginleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarginRightInternal() {
  return property_csspropertymarginright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarginTopInternal() {
  return property_csspropertymargintop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarkerEndInternal() {
  return property_csspropertymarkerend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarkerMidInternal() {
  return property_csspropertymarkermid;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarkerStartInternal() {
  return property_csspropertymarkerstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaskInternal() {
  return property_csspropertymask;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaskSourceTypeInternal() {
  return property_csspropertymasksourcetype;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaskTypeInternal() {
  return property_csspropertymasktype;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaxBlockSizeInternal() {
  return property_csspropertymaxblocksize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaxHeightInternal() {
  return property_csspropertymaxheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaxInlineSizeInternal() {
  return property_csspropertymaxinlinesize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaxWidthInternal() {
  return property_csspropertymaxwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMaxZoomInternal() {
  return property_csspropertymaxzoom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMinBlockSizeInternal() {
  return property_csspropertyminblocksize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMinHeightInternal() {
  return property_csspropertyminheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMinInlineSizeInternal() {
  return property_csspropertymininlinesize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMinWidthInternal() {
  return property_csspropertyminwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMinZoomInternal() {
  return property_csspropertyminzoom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMixBlendModeInternal() {
  return property_csspropertymixblendmode;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyObjectFitInternal() {
  return property_csspropertyobjectfit;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyObjectPositionInternal() {
  return property_csspropertyobjectposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetAnchorInternal() {
  return property_csspropertyoffsetanchor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetDistanceInternal() {
  return property_csspropertyoffsetdistance;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetPathInternal() {
  return property_csspropertyoffsetpath;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetPositionInternal() {
  return property_csspropertyoffsetposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetRotateInternal() {
  return property_csspropertyoffsetrotate;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOpacityInternal() {
  return property_csspropertyopacity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOrderInternal() {
  return property_csspropertyorder;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOrientationInternal() {
  return property_csspropertyorientation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOrphansInternal() {
  return property_csspropertyorphans;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOutlineColorInternal() {
  return property_csspropertyoutlinecolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOutlineOffsetInternal() {
  return property_csspropertyoutlineoffset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOutlineStyleInternal() {
  return property_csspropertyoutlinestyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOutlineWidthInternal() {
  return property_csspropertyoutlinewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverflowAnchorInternal() {
  return property_csspropertyoverflowanchor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverflowWrapInternal() {
  return property_csspropertyoverflowwrap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverflowXInternal() {
  return property_csspropertyoverflowx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverflowYInternal() {
  return property_csspropertyoverflowy;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverscrollBehaviorXInternal() {
  return property_csspropertyoverscrollbehaviorx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverscrollBehaviorYInternal() {
  return property_csspropertyoverscrollbehaviory;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaddingBottomInternal() {
  return property_csspropertypaddingbottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaddingLeftInternal() {
  return property_csspropertypaddingleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaddingRightInternal() {
  return property_csspropertypaddingright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaddingTopInternal() {
  return property_csspropertypaddingtop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPageInternal() {
  return property_csspropertypage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaintOrderInternal() {
  return property_csspropertypaintorder;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPerspectiveInternal() {
  return property_csspropertyperspective;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPerspectiveOriginInternal() {
  return property_csspropertyperspectiveorigin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPointerEventsInternal() {
  return property_csspropertypointerevents;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPositionInternal() {
  return property_csspropertyposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyQuotesInternal() {
  return property_csspropertyquotes;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRInternal() {
  return property_csspropertyr;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyResizeInternal() {
  return property_csspropertyresize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRightInternal() {
  return property_csspropertyright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRotateInternal() {
  return property_csspropertyrotate;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRowGapInternal() {
  return property_csspropertyrowgap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRxInternal() {
  return property_csspropertyrx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyRyInternal() {
  return property_csspropertyry;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScaleInternal() {
  return property_csspropertyscale;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollBehaviorInternal() {
  return property_csspropertyscrollbehavior;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollCustomizationInternal() {
  return property_csspropertyscrollcustomization;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginBlockEndInternal() {
  return property_csspropertyscrollmarginblockend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginBlockStartInternal() {
  return property_csspropertyscrollmarginblockstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginBottomInternal() {
  return property_csspropertyscrollmarginbottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginInlineEndInternal() {
  return property_csspropertyscrollmargininlineend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginInlineStartInternal() {
  return property_csspropertyscrollmargininlinestart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginLeftInternal() {
  return property_csspropertyscrollmarginleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginRightInternal() {
  return property_csspropertyscrollmarginright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginTopInternal() {
  return property_csspropertyscrollmargintop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingBlockEndInternal() {
  return property_csspropertyscrollpaddingblockend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingBlockStartInternal() {
  return property_csspropertyscrollpaddingblockstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingBottomInternal() {
  return property_csspropertyscrollpaddingbottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingInlineEndInternal() {
  return property_csspropertyscrollpaddinginlineend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingInlineStartInternal() {
  return property_csspropertyscrollpaddinginlinestart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingLeftInternal() {
  return property_csspropertyscrollpaddingleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingRightInternal() {
  return property_csspropertyscrollpaddingright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingTopInternal() {
  return property_csspropertyscrollpaddingtop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollSnapAlignInternal() {
  return property_csspropertyscrollsnapalign;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollSnapStopInternal() {
  return property_csspropertyscrollsnapstop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollSnapTypeInternal() {
  return property_csspropertyscrollsnaptype;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyShapeImageThresholdInternal() {
  return property_csspropertyshapeimagethreshold;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyShapeMarginInternal() {
  return property_csspropertyshapemargin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyShapeOutsideInternal() {
  return property_csspropertyshapeoutside;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyShapeRenderingInternal() {
  return property_csspropertyshaperendering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertySizeInternal() {
  return property_csspropertysize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertySpeakInternal() {
  return property_csspropertyspeak;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertySrcInternal() {
  return property_csspropertysrc;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStopColorInternal() {
  return property_csspropertystopcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStopOpacityInternal() {
  return property_csspropertystopopacity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeInternal() {
  return property_csspropertystroke;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeDasharrayInternal() {
  return property_csspropertystrokedasharray;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeDashoffsetInternal() {
  return property_csspropertystrokedashoffset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeLinecapInternal() {
  return property_csspropertystrokelinecap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeLinejoinInternal() {
  return property_csspropertystrokelinejoin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeMiterlimitInternal() {
  return property_csspropertystrokemiterlimit;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeOpacityInternal() {
  return property_csspropertystrokeopacity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyStrokeWidthInternal() {
  return property_csspropertystrokewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTabSizeInternal() {
  return property_csspropertytabsize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTableLayoutInternal() {
  return property_csspropertytablelayout;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextAlignInternal() {
  return property_csspropertytextalign;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextAlignLastInternal() {
  return property_csspropertytextalignlast;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextAnchorInternal() {
  return property_csspropertytextanchor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextCombineUprightInternal() {
  return property_csspropertytextcombineupright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextDecorationColorInternal() {
  return property_csspropertytextdecorationcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextDecorationLineInternal() {
  return property_csspropertytextdecorationline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextDecorationSkipInkInternal() {
  return property_csspropertytextdecorationskipink;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextDecorationStyleInternal() {
  return property_csspropertytextdecorationstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextIndentInternal() {
  return property_csspropertytextindent;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextJustifyInternal() {
  return property_csspropertytextjustify;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextOverflowInternal() {
  return property_csspropertytextoverflow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextShadowInternal() {
  return property_csspropertytextshadow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextSizeAdjustInternal() {
  return property_csspropertytextsizeadjust;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextTransformInternal() {
  return property_csspropertytexttransform;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextUnderlinePositionInternal() {
  return property_csspropertytextunderlineposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTopInternal() {
  return property_csspropertytop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTouchActionInternal() {
  return property_csspropertytouchaction;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransformInternal() {
  return property_csspropertytransform;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransformBoxInternal() {
  return property_csspropertytransformbox;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransformOriginInternal() {
  return property_csspropertytransformorigin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransformStyleInternal() {
  return property_csspropertytransformstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTranslateInternal() {
  return property_csspropertytranslate;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyUnicodeBidiInternal() {
  return property_csspropertyunicodebidi;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyUnicodeRangeInternal() {
  return property_csspropertyunicoderange;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyUserSelectInternal() {
  return property_csspropertyuserselect;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyUserZoomInternal() {
  return property_csspropertyuserzoom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyVectorEffectInternal() {
  return property_csspropertyvectoreffect;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyVerticalAlignInternal() {
  return property_csspropertyverticalalign;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyViewportFitInternal() {
  return property_csspropertyviewportfit;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyVisibilityInternal() {
  return property_csspropertyvisibility;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitAppRegionInternal() {
  return property_csspropertywebkitappregion;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitAppearanceInternal() {
  return property_csspropertywebkitappearance;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderAfterColorInternal() {
  return property_csspropertywebkitborderaftercolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderAfterStyleInternal() {
  return property_csspropertywebkitborderafterstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderAfterWidthInternal() {
  return property_csspropertywebkitborderafterwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderBeforeColorInternal() {
  return property_csspropertywebkitborderbeforecolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderBeforeStyleInternal() {
  return property_csspropertywebkitborderbeforestyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderBeforeWidthInternal() {
  return property_csspropertywebkitborderbeforewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderEndColorInternal() {
  return property_csspropertywebkitborderendcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderEndStyleInternal() {
  return property_csspropertywebkitborderendstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderEndWidthInternal() {
  return property_csspropertywebkitborderendwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderHorizontalSpacingInternal() {
  return property_csspropertywebkitborderhorizontalspacing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderImageInternal() {
  return property_csspropertywebkitborderimage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderStartColorInternal() {
  return property_csspropertywebkitborderstartcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderStartStyleInternal() {
  return property_csspropertywebkitborderstartstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderStartWidthInternal() {
  return property_csspropertywebkitborderstartwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderVerticalSpacingInternal() {
  return property_csspropertywebkitborderverticalspacing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxAlignInternal() {
  return property_csspropertywebkitboxalign;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxDecorationBreakInternal() {
  return property_csspropertywebkitboxdecorationbreak;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxDirectionInternal() {
  return property_csspropertywebkitboxdirection;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxFlexInternal() {
  return property_csspropertywebkitboxflex;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxOrdinalGroupInternal() {
  return property_csspropertywebkitboxordinalgroup;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxOrientInternal() {
  return property_csspropertywebkitboxorient;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxPackInternal() {
  return property_csspropertywebkitboxpack;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBoxReflectInternal() {
  return property_csspropertywebkitboxreflect;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitFontSizeDeltaInternal() {
  return property_csspropertywebkitfontsizedelta;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitHighlightInternal() {
  return property_csspropertywebkithighlight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitHyphenateCharacterInternal() {
  return property_csspropertywebkithyphenatecharacter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitLineBreakInternal() {
  return property_csspropertywebkitlinebreak;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitLineClampInternal() {
  return property_csspropertywebkitlineclamp;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitLogicalHeightInternal() {
  return property_csspropertywebkitlogicalheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitLogicalWidthInternal() {
  return property_csspropertywebkitlogicalwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginAfterInternal() {
  return property_csspropertywebkitmarginafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginAfterCollapseInternal() {
  return property_csspropertywebkitmarginaftercollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginBeforeInternal() {
  return property_csspropertywebkitmarginbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginBeforeCollapseInternal() {
  return property_csspropertywebkitmarginbeforecollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginBottomCollapseInternal() {
  return property_csspropertywebkitmarginbottomcollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginEndInternal() {
  return property_csspropertywebkitmarginend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginStartInternal() {
  return property_csspropertywebkitmarginstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginTopCollapseInternal() {
  return property_csspropertywebkitmargintopcollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageOutsetInternal() {
  return property_csspropertywebkitmaskboximageoutset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageRepeatInternal() {
  return property_csspropertywebkitmaskboximagerepeat;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageSliceInternal() {
  return property_csspropertywebkitmaskboximageslice;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageSourceInternal() {
  return property_csspropertywebkitmaskboximagesource;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageWidthInternal() {
  return property_csspropertywebkitmaskboximagewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskClipInternal() {
  return property_csspropertywebkitmaskclip;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskCompositeInternal() {
  return property_csspropertywebkitmaskcomposite;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskImageInternal() {
  return property_csspropertywebkitmaskimage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskOriginInternal() {
  return property_csspropertywebkitmaskorigin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskPositionXInternal() {
  return property_csspropertywebkitmaskpositionx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskPositionYInternal() {
  return property_csspropertywebkitmaskpositiony;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskRepeatXInternal() {
  return property_csspropertywebkitmaskrepeatx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskRepeatYInternal() {
  return property_csspropertywebkitmaskrepeaty;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskSizeInternal() {
  return property_csspropertywebkitmasksize;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaxLogicalHeightInternal() {
  return property_csspropertywebkitmaxlogicalheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaxLogicalWidthInternal() {
  return property_csspropertywebkitmaxlogicalwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMinLogicalHeightInternal() {
  return property_csspropertywebkitminlogicalheight;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMinLogicalWidthInternal() {
  return property_csspropertywebkitminlogicalwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPaddingAfterInternal() {
  return property_csspropertywebkitpaddingafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPaddingBeforeInternal() {
  return property_csspropertywebkitpaddingbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPaddingEndInternal() {
  return property_csspropertywebkitpaddingend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPaddingStartInternal() {
  return property_csspropertywebkitpaddingstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPerspectiveOriginXInternal() {
  return property_csspropertywebkitperspectiveoriginx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPerspectiveOriginYInternal() {
  return property_csspropertywebkitperspectiveoriginy;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitPrintColorAdjustInternal() {
  return property_csspropertywebkitprintcoloradjust;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitRtlOrderingInternal() {
  return property_csspropertywebkitrtlordering;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitRubyPositionInternal() {
  return property_csspropertywebkitrubyposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTapHighlightColorInternal() {
  return property_csspropertywebkittaphighlightcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextCombineInternal() {
  return property_csspropertywebkittextcombine;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextDecorationsInEffectInternal() {
  return property_csspropertywebkittextdecorationsineffect;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextEmphasisColorInternal() {
  return property_csspropertywebkittextemphasiscolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextEmphasisPositionInternal() {
  return property_csspropertywebkittextemphasisposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextEmphasisStyleInternal() {
  return property_csspropertywebkittextemphasisstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextFillColorInternal() {
  return property_csspropertywebkittextfillcolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextSecurityInternal() {
  return property_csspropertywebkittextsecurity;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextStrokeColorInternal() {
  return property_csspropertywebkittextstrokecolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextStrokeWidthInternal() {
  return property_csspropertywebkittextstrokewidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTransformOriginXInternal() {
  return property_csspropertywebkittransformoriginx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTransformOriginYInternal() {
  return property_csspropertywebkittransformoriginy;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTransformOriginZInternal() {
  return property_csspropertywebkittransformoriginz;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitUserDragInternal() {
  return property_csspropertywebkituserdrag;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitUserModifyInternal() {
  return property_csspropertywebkitusermodify;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWhiteSpaceInternal() {
  return property_csspropertywhitespace;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWidowsInternal() {
  return property_csspropertywidows;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWidthInternal() {
  return property_csspropertywidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWillChangeInternal() {
  return property_csspropertywillchange;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWordBreakInternal() {
  return property_csspropertywordbreak;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWordSpacingInternal() {
  return property_csspropertywordspacing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWordWrapInternal() {
  return property_csspropertywordwrap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyXInternal() {
  return property_csspropertyx;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyYInternal() {
  return property_csspropertyy;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyZIndexInternal() {
  return property_csspropertyzindex;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyAnimationInternal() {
  return property_csspropertyanimation;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundInternal() {
  return property_csspropertybackground;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundPositionInternal() {
  return property_csspropertybackgroundposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBackgroundRepeatInternal() {
  return property_csspropertybackgroundrepeat;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderInternal() {
  return property_csspropertyborder;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderBottomInternal() {
  return property_csspropertyborderbottom;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderColorInternal() {
  return property_csspropertybordercolor;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderImageInternal() {
  return property_csspropertyborderimage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderLeftInternal() {
  return property_csspropertyborderleft;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderRadiusInternal() {
  return property_csspropertyborderradius;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderRightInternal() {
  return property_csspropertyborderright;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderSpacingInternal() {
  return property_csspropertyborderspacing;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderStyleInternal() {
  return property_csspropertyborderstyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderTopInternal() {
  return property_csspropertybordertop;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyBorderWidthInternal() {
  return property_csspropertyborderwidth;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnRuleInternal() {
  return property_csspropertycolumnrule;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyColumnsInternal() {
  return property_csspropertycolumns;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexInternal() {
  return property_csspropertyflex;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFlexFlowInternal() {
  return property_csspropertyflexflow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontInternal() {
  return property_csspropertyfont;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyFontVariantInternal() {
  return property_csspropertyfontvariant;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGapInternal() {
  return property_csspropertygap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridInternal() {
  return property_csspropertygrid;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridAreaInternal() {
  return property_csspropertygridarea;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridColumnInternal() {
  return property_csspropertygridcolumn;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridColumnGapInternal() {
  return property_csspropertygridcolumngap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridGapInternal() {
  return property_csspropertygridgap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridRowInternal() {
  return property_csspropertygridrow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridRowGapInternal() {
  return property_csspropertygridrowgap;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyGridTemplateInternal() {
  return property_csspropertygridtemplate;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyListStyleInternal() {
  return property_csspropertyliststyle;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarginInternal() {
  return property_csspropertymargin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyMarkerInternal() {
  return property_csspropertymarker;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOffsetInternal() {
  return property_csspropertyoffset;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOutlineInternal() {
  return property_csspropertyoutline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverflowInternal() {
  return property_csspropertyoverflow;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyOverscrollBehaviorInternal() {
  return property_csspropertyoverscrollbehavior;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPaddingInternal() {
  return property_csspropertypadding;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPageBreakAfterInternal() {
  return property_csspropertypagebreakafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPageBreakBeforeInternal() {
  return property_csspropertypagebreakbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPageBreakInsideInternal() {
  return property_csspropertypagebreakinside;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPlaceContentInternal() {
  return property_csspropertyplacecontent;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPlaceItemsInternal() {
  return property_csspropertyplaceitems;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyPlaceSelfInternal() {
  return property_csspropertyplaceself;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginInternal() {
  return property_csspropertyscrollmargin;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginBlockInternal() {
  return property_csspropertyscrollmarginblock;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollMarginInlineInternal() {
  return property_csspropertyscrollmargininline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingInternal() {
  return property_csspropertyscrollpadding;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingBlockInternal() {
  return property_csspropertyscrollpaddingblock;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyScrollPaddingInlineInternal() {
  return property_csspropertyscrollpaddinginline;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTextDecorationInternal() {
  return property_csspropertytextdecoration;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyTransitionInternal() {
  return property_csspropertytransition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderAfterInternal() {
  return property_csspropertywebkitborderafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderBeforeInternal() {
  return property_csspropertywebkitborderbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderEndInternal() {
  return property_csspropertywebkitborderend;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitBorderStartInternal() {
  return property_csspropertywebkitborderstart;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitColumnBreakAfterInternal() {
  return property_csspropertywebkitcolumnbreakafter;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitColumnBreakBeforeInternal() {
  return property_csspropertywebkitcolumnbreakbefore;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitColumnBreakInsideInternal() {
  return property_csspropertywebkitcolumnbreakinside;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMarginCollapseInternal() {
  return property_csspropertywebkitmargincollapse;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskInternal() {
  return property_csspropertywebkitmask;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskBoxImageInternal() {
  return property_csspropertywebkitmaskboximage;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskPositionInternal() {
  return property_csspropertywebkitmaskposition;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitMaskRepeatInternal() {
  return property_csspropertywebkitmaskrepeat;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextEmphasisInternal() {
  return property_csspropertywebkittextemphasis;
}
const CSSUnresolvedProperty& CSSUnresolvedProperty::GetCSSPropertyWebkitTextStrokeInternal() {
  return property_csspropertywebkittextstroke;
}

const CSSUnresolvedProperty* CSSUnresolvedProperty::GetAliasProperty(CSSPropertyID id) {
  DCHECK_GT(id, 443); // last property id
  DCHECK_LE(id, 954); // last unresolved property id
  switch (id) {
    case CSSPropertyAliasWebkitAnimationDelay:
      return &property_csspropertyaliaswebkitanimationdelay;
    case CSSPropertyAliasWebkitAnimationDirection:
      return &property_csspropertyaliaswebkitanimationdirection;
    case CSSPropertyAliasWebkitAnimationDuration:
      return &property_csspropertyaliaswebkitanimationduration;
    case CSSPropertyAliasWebkitAnimationFillMode:
      return &property_csspropertyaliaswebkitanimationfillmode;
    case CSSPropertyAliasWebkitAnimationIterationCount:
      return &property_csspropertyaliaswebkitanimationiterationcount;
    case CSSPropertyAliasWebkitAnimationName:
      return &property_csspropertyaliaswebkitanimationname;
    case CSSPropertyAliasWebkitAnimationPlayState:
      return &property_csspropertyaliaswebkitanimationplaystate;
    case CSSPropertyAliasWebkitAnimationTimingFunction:
      return &property_csspropertyaliaswebkitanimationtimingfunction;
    case CSSPropertyAliasWebkitTransitionDelay:
      return &property_csspropertyaliaswebkittransitiondelay;
    case CSSPropertyAliasWebkitTransitionDuration:
      return &property_csspropertyaliaswebkittransitionduration;
    case CSSPropertyAliasWebkitTransitionProperty:
      return &property_csspropertyaliaswebkittransitionproperty;
    case CSSPropertyAliasWebkitTransitionTimingFunction:
      return &property_csspropertyaliaswebkittransitiontimingfunction;
    case CSSPropertyAliasWebkitFontFeatureSettings:
      return &property_csspropertyaliaswebkitfontfeaturesettings;
    case CSSPropertyAliasEpubTextOrientation:
      return &property_csspropertyaliasepubtextorientation;
    case CSSPropertyAliasEpubWritingMode:
      return &property_csspropertyaliasepubwritingmode;
    case CSSPropertyAliasWebkitAlignContent:
      return &property_csspropertyaliaswebkitaligncontent;
    case CSSPropertyAliasWebkitAlignItems:
      return &property_csspropertyaliaswebkitalignitems;
    case CSSPropertyAliasWebkitAlignSelf:
      return &property_csspropertyaliaswebkitalignself;
    case CSSPropertyAliasWebkitBackfaceVisibility:
      return &property_csspropertyaliaswebkitbackfacevisibility;
    case CSSPropertyAliasWebkitBackgroundClip:
      return &property_csspropertyaliaswebkitbackgroundclip;
    case CSSPropertyAliasWebkitBackgroundOrigin:
      return &property_csspropertyaliaswebkitbackgroundorigin;
    case CSSPropertyAliasWebkitBackgroundSize:
      return &property_csspropertyaliaswebkitbackgroundsize;
    case CSSPropertyAliasWebkitBorderBottomLeftRadius:
      return &property_csspropertyaliaswebkitborderbottomleftradius;
    case CSSPropertyAliasWebkitBorderBottomRightRadius:
      return &property_csspropertyaliaswebkitborderbottomrightradius;
    case CSSPropertyAliasWebkitBorderTopLeftRadius:
      return &property_csspropertyaliaswebkitbordertopleftradius;
    case CSSPropertyAliasWebkitBorderTopRightRadius:
      return &property_csspropertyaliaswebkitbordertoprightradius;
    case CSSPropertyAliasWebkitBoxShadow:
      return &property_csspropertyaliaswebkitboxshadow;
    case CSSPropertyAliasWebkitBoxSizing:
      return &property_csspropertyaliaswebkitboxsizing;
    case CSSPropertyAliasEpubCaptionSide:
      return &property_csspropertyaliasepubcaptionside;
    case CSSPropertyAliasWebkitClipPath:
      return &property_csspropertyaliaswebkitclippath;
    case CSSPropertyAliasWebkitColumnCount:
      return &property_csspropertyaliaswebkitcolumncount;
    case CSSPropertyAliasWebkitColumnGap:
      return &property_csspropertyaliaswebkitcolumngap;
    case CSSPropertyAliasWebkitColumnRuleColor:
      return &property_csspropertyaliaswebkitcolumnrulecolor;
    case CSSPropertyAliasWebkitColumnRuleStyle:
      return &property_csspropertyaliaswebkitcolumnrulestyle;
    case CSSPropertyAliasWebkitColumnRuleWidth:
      return &property_csspropertyaliaswebkitcolumnrulewidth;
    case CSSPropertyAliasWebkitColumnSpan:
      return &property_csspropertyaliaswebkitcolumnspan;
    case CSSPropertyAliasWebkitColumnWidth:
      return &property_csspropertyaliaswebkitcolumnwidth;
    case CSSPropertyAliasWebkitFilter:
      return &property_csspropertyaliaswebkitfilter;
    case CSSPropertyAliasWebkitFlexBasis:
      return &property_csspropertyaliaswebkitflexbasis;
    case CSSPropertyAliasWebkitFlexDirection:
      return &property_csspropertyaliaswebkitflexdirection;
    case CSSPropertyAliasWebkitFlexGrow:
      return &property_csspropertyaliaswebkitflexgrow;
    case CSSPropertyAliasWebkitFlexShrink:
      return &property_csspropertyaliaswebkitflexshrink;
    case CSSPropertyAliasWebkitFlexWrap:
      return &property_csspropertyaliaswebkitflexwrap;
    case CSSPropertyAliasWebkitJustifyContent:
      return &property_csspropertyaliaswebkitjustifycontent;
    case CSSPropertyAliasWebkitOpacity:
      return &property_csspropertyaliaswebkitopacity;
    case CSSPropertyAliasWebkitOrder:
      return &property_csspropertyaliaswebkitorder;
    case CSSPropertyAliasWebkitPerspective:
      return &property_csspropertyaliaswebkitperspective;
    case CSSPropertyAliasWebkitPerspectiveOrigin:
      return &property_csspropertyaliaswebkitperspectiveorigin;
    case CSSPropertyAliasWebkitShapeImageThreshold:
      return &property_csspropertyaliaswebkitshapeimagethreshold;
    case CSSPropertyAliasWebkitShapeMargin:
      return &property_csspropertyaliaswebkitshapemargin;
    case CSSPropertyAliasWebkitShapeOutside:
      return &property_csspropertyaliaswebkitshapeoutside;
    case CSSPropertyAliasWebkitTextSizeAdjust:
      return &property_csspropertyaliaswebkittextsizeadjust;
    case CSSPropertyAliasEpubTextTransform:
      return &property_csspropertyaliasepubtexttransform;
    case CSSPropertyAliasWebkitTransform:
      return &property_csspropertyaliaswebkittransform;
    case CSSPropertyAliasWebkitTransformOrigin:
      return &property_csspropertyaliaswebkittransformorigin;
    case CSSPropertyAliasWebkitTransformStyle:
      return &property_csspropertyaliaswebkittransformstyle;
    case CSSPropertyAliasWebkitUserSelect:
      return &property_csspropertyaliaswebkituserselect;
    case CSSPropertyAliasEpubTextCombine:
      return &property_csspropertyaliasepubtextcombine;
    case CSSPropertyAliasEpubTextEmphasisColor:
      return &property_csspropertyaliasepubtextemphasiscolor;
    case CSSPropertyAliasEpubTextEmphasisStyle:
      return &property_csspropertyaliasepubtextemphasisstyle;
    case CSSPropertyAliasEpubWordBreak:
      return &property_csspropertyaliasepubwordbreak;
    case CSSPropertyAliasWebkitAnimation:
      return &property_csspropertyaliaswebkitanimation;
    case CSSPropertyAliasWebkitBorderRadius:
      return &property_csspropertyaliaswebkitborderradius;
    case CSSPropertyAliasWebkitColumnRule:
      return &property_csspropertyaliaswebkitcolumnrule;
    case CSSPropertyAliasWebkitColumns:
      return &property_csspropertyaliaswebkitcolumns;
    case CSSPropertyAliasWebkitFlex:
      return &property_csspropertyaliaswebkitflex;
    case CSSPropertyAliasWebkitFlexFlow:
      return &property_csspropertyaliaswebkitflexflow;
    case CSSPropertyAliasWebkitTransition:
      return &property_csspropertyaliaswebkittransition;
    case CSSPropertyAliasEpubTextEmphasis:
      return &property_csspropertyaliasepubtextemphasis;
    default:
      NOTREACHED();
      return nullptr;
  }
}

const CSSUnresolvedProperty& CSSUnresolvedProperty::GetNonAliasProperty(CSSPropertyID id) {
  DCHECK_NE(id, CSSPropertyInvalid);
  DCHECK_LE(id, 443); // last property id
  static constexpr const CSSUnresolvedProperty* const property_classes[] = {
    &property_csspropertyvariable,  // CSSPropertyVariable
    &property_csspropertyanimationdelay,  // CSSPropertyAnimationDelay
    &property_csspropertyanimationdirection,  // CSSPropertyAnimationDirection
    &property_csspropertyanimationduration,  // CSSPropertyAnimationDuration
    &property_csspropertyanimationfillmode,  // CSSPropertyAnimationFillMode
    &property_csspropertyanimationiterationcount,  // CSSPropertyAnimationIterationCount
    &property_csspropertyanimationname,  // CSSPropertyAnimationName
    &property_csspropertyanimationplaystate,  // CSSPropertyAnimationPlayState
    &property_csspropertyanimationtimingfunction,  // CSSPropertyAnimationTimingFunction
    &property_csspropertytransitiondelay,  // CSSPropertyTransitionDelay
    &property_csspropertytransitionduration,  // CSSPropertyTransitionDuration
    &property_csspropertytransitionproperty,  // CSSPropertyTransitionProperty
    &property_csspropertytransitiontimingfunction,  // CSSPropertyTransitionTimingFunction
    &property_csspropertycolor,  // CSSPropertyColor
    &property_csspropertydirection,  // CSSPropertyDirection
    &property_csspropertyfontfamily,  // CSSPropertyFontFamily
    &property_csspropertyfontfeaturesettings,  // CSSPropertyFontFeatureSettings
    &property_csspropertyfontkerning,  // CSSPropertyFontKerning
    &property_csspropertyfontsize,  // CSSPropertyFontSize
    &property_csspropertyfontsizeadjust,  // CSSPropertyFontSizeAdjust
    &property_csspropertyfontstretch,  // CSSPropertyFontStretch
    &property_csspropertyfontstyle,  // CSSPropertyFontStyle
    &property_csspropertyfontvariantcaps,  // CSSPropertyFontVariantCaps
    &property_csspropertyfontvarianteastasian,  // CSSPropertyFontVariantEastAsian
    &property_csspropertyfontvariantligatures,  // CSSPropertyFontVariantLigatures
    &property_csspropertyfontvariantnumeric,  // CSSPropertyFontVariantNumeric
    &property_csspropertyfontvariationsettings,  // CSSPropertyFontVariationSettings
    &property_csspropertyfontweight,  // CSSPropertyFontWeight
    &property_csspropertytextorientation,  // CSSPropertyTextOrientation
    &property_csspropertytextrendering,  // CSSPropertyTextRendering
    &property_csspropertywebkitfontsmoothing,  // CSSPropertyWebkitFontSmoothing
    &property_csspropertywebkitlocale,  // CSSPropertyWebkitLocale
    &property_csspropertywebkittextorientation,  // CSSPropertyWebkitTextOrientation
    &property_csspropertywebkitwritingmode,  // CSSPropertyWebkitWritingMode
    &property_csspropertywritingmode,  // CSSPropertyWritingMode
    &property_csspropertyzoom,  // CSSPropertyZoom
    &property_csspropertyaligncontent,  // CSSPropertyAlignContent
    &property_csspropertyalignitems,  // CSSPropertyAlignItems
    &property_csspropertyalignself,  // CSSPropertyAlignSelf
    &property_csspropertyalignmentbaseline,  // CSSPropertyAlignmentBaseline
    &property_csspropertyall,  // CSSPropertyAll
    &property_csspropertybackdropfilter,  // CSSPropertyBackdropFilter
    &property_csspropertybackfacevisibility,  // CSSPropertyBackfaceVisibility
    &property_csspropertybackgroundattachment,  // CSSPropertyBackgroundAttachment
    &property_csspropertybackgroundblendmode,  // CSSPropertyBackgroundBlendMode
    &property_csspropertybackgroundclip,  // CSSPropertyBackgroundClip
    &property_csspropertybackgroundcolor,  // CSSPropertyBackgroundColor
    &property_csspropertybackgroundimage,  // CSSPropertyBackgroundImage
    &property_csspropertybackgroundorigin,  // CSSPropertyBackgroundOrigin
    &property_csspropertybackgroundpositionx,  // CSSPropertyBackgroundPositionX
    &property_csspropertybackgroundpositiony,  // CSSPropertyBackgroundPositionY
    &property_csspropertybackgroundrepeatx,  // CSSPropertyBackgroundRepeatX
    &property_csspropertybackgroundrepeaty,  // CSSPropertyBackgroundRepeatY
    &property_csspropertybackgroundsize,  // CSSPropertyBackgroundSize
    &property_csspropertybaselineshift,  // CSSPropertyBaselineShift
    &property_csspropertyblocksize,  // CSSPropertyBlockSize
    &property_csspropertyborderbottomcolor,  // CSSPropertyBorderBottomColor
    &property_csspropertyborderbottomleftradius,  // CSSPropertyBorderBottomLeftRadius
    &property_csspropertyborderbottomrightradius,  // CSSPropertyBorderBottomRightRadius
    &property_csspropertyborderbottomstyle,  // CSSPropertyBorderBottomStyle
    &property_csspropertyborderbottomwidth,  // CSSPropertyBorderBottomWidth
    &property_csspropertybordercollapse,  // CSSPropertyBorderCollapse
    &property_csspropertyborderimageoutset,  // CSSPropertyBorderImageOutset
    &property_csspropertyborderimagerepeat,  // CSSPropertyBorderImageRepeat
    &property_csspropertyborderimageslice,  // CSSPropertyBorderImageSlice
    &property_csspropertyborderimagesource,  // CSSPropertyBorderImageSource
    &property_csspropertyborderimagewidth,  // CSSPropertyBorderImageWidth
    &property_csspropertyborderleftcolor,  // CSSPropertyBorderLeftColor
    &property_csspropertyborderleftstyle,  // CSSPropertyBorderLeftStyle
    &property_csspropertyborderleftwidth,  // CSSPropertyBorderLeftWidth
    &property_csspropertyborderrightcolor,  // CSSPropertyBorderRightColor
    &property_csspropertyborderrightstyle,  // CSSPropertyBorderRightStyle
    &property_csspropertyborderrightwidth,  // CSSPropertyBorderRightWidth
    &property_csspropertybordertopcolor,  // CSSPropertyBorderTopColor
    &property_csspropertybordertopleftradius,  // CSSPropertyBorderTopLeftRadius
    &property_csspropertybordertoprightradius,  // CSSPropertyBorderTopRightRadius
    &property_csspropertybordertopstyle,  // CSSPropertyBorderTopStyle
    &property_csspropertybordertopwidth,  // CSSPropertyBorderTopWidth
    &property_csspropertybottom,  // CSSPropertyBottom
    &property_csspropertyboxshadow,  // CSSPropertyBoxShadow
    &property_csspropertyboxsizing,  // CSSPropertyBoxSizing
    &property_csspropertybreakafter,  // CSSPropertyBreakAfter
    &property_csspropertybreakbefore,  // CSSPropertyBreakBefore
    &property_csspropertybreakinside,  // CSSPropertyBreakInside
    &property_csspropertybufferedrendering,  // CSSPropertyBufferedRendering
    &property_csspropertycaptionside,  // CSSPropertyCaptionSide
    &property_csspropertycaretcolor,  // CSSPropertyCaretColor
    &property_csspropertyclear,  // CSSPropertyClear
    &property_csspropertyclip,  // CSSPropertyClip
    &property_csspropertyclippath,  // CSSPropertyClipPath
    &property_csspropertycliprule,  // CSSPropertyClipRule
    &property_csspropertycolorinterpolation,  // CSSPropertyColorInterpolation
    &property_csspropertycolorinterpolationfilters,  // CSSPropertyColorInterpolationFilters
    &property_csspropertycolorrendering,  // CSSPropertyColorRendering
    &property_csspropertycolumncount,  // CSSPropertyColumnCount
    &property_csspropertycolumnfill,  // CSSPropertyColumnFill
    &property_csspropertycolumngap,  // CSSPropertyColumnGap
    &property_csspropertycolumnrulecolor,  // CSSPropertyColumnRuleColor
    &property_csspropertycolumnrulestyle,  // CSSPropertyColumnRuleStyle
    &property_csspropertycolumnrulewidth,  // CSSPropertyColumnRuleWidth
    &property_csspropertycolumnspan,  // CSSPropertyColumnSpan
    &property_csspropertycolumnwidth,  // CSSPropertyColumnWidth
    &property_csspropertycontain,  // CSSPropertyContain
    &property_csspropertycontent,  // CSSPropertyContent
    &property_csspropertycounterincrement,  // CSSPropertyCounterIncrement
    &property_csspropertycounterreset,  // CSSPropertyCounterReset
    &property_csspropertycursor,  // CSSPropertyCursor
    &property_csspropertycx,  // CSSPropertyCx
    &property_csspropertycy,  // CSSPropertyCy
    &property_csspropertyd,  // CSSPropertyD
    &property_csspropertydisplay,  // CSSPropertyDisplay
    &property_csspropertydominantbaseline,  // CSSPropertyDominantBaseline
    &property_csspropertyemptycells,  // CSSPropertyEmptyCells
    &property_csspropertyfill,  // CSSPropertyFill
    &property_csspropertyfillopacity,  // CSSPropertyFillOpacity
    &property_csspropertyfillrule,  // CSSPropertyFillRule
    &property_csspropertyfilter,  // CSSPropertyFilter
    &property_csspropertyflexbasis,  // CSSPropertyFlexBasis
    &property_csspropertyflexdirection,  // CSSPropertyFlexDirection
    &property_csspropertyflexgrow,  // CSSPropertyFlexGrow
    &property_csspropertyflexshrink,  // CSSPropertyFlexShrink
    &property_csspropertyflexwrap,  // CSSPropertyFlexWrap
    &property_csspropertyfloat,  // CSSPropertyFloat
    &property_csspropertyfloodcolor,  // CSSPropertyFloodColor
    &property_csspropertyfloodopacity,  // CSSPropertyFloodOpacity
    &property_csspropertyfontdisplay,  // CSSPropertyFontDisplay
    &property_csspropertygridautocolumns,  // CSSPropertyGridAutoColumns
    &property_csspropertygridautoflow,  // CSSPropertyGridAutoFlow
    &property_csspropertygridautorows,  // CSSPropertyGridAutoRows
    &property_csspropertygridcolumnend,  // CSSPropertyGridColumnEnd
    &property_csspropertygridcolumnstart,  // CSSPropertyGridColumnStart
    &property_csspropertygridrowend,  // CSSPropertyGridRowEnd
    &property_csspropertygridrowstart,  // CSSPropertyGridRowStart
    &property_csspropertygridtemplateareas,  // CSSPropertyGridTemplateAreas
    &property_csspropertygridtemplatecolumns,  // CSSPropertyGridTemplateColumns
    &property_csspropertygridtemplaterows,  // CSSPropertyGridTemplateRows
    &property_csspropertyheight,  // CSSPropertyHeight
    &property_csspropertyhyphens,  // CSSPropertyHyphens
    &property_csspropertyimageorientation,  // CSSPropertyImageOrientation
    &property_csspropertyimagerendering,  // CSSPropertyImageRendering
    &property_csspropertyinlinesize,  // CSSPropertyInlineSize
    &property_csspropertyisolation,  // CSSPropertyIsolation
    &property_csspropertyjustifycontent,  // CSSPropertyJustifyContent
    &property_csspropertyjustifyitems,  // CSSPropertyJustifyItems
    &property_csspropertyjustifyself,  // CSSPropertyJustifySelf
    &property_csspropertyleft,  // CSSPropertyLeft
    &property_csspropertyletterspacing,  // CSSPropertyLetterSpacing
    &property_csspropertylightingcolor,  // CSSPropertyLightingColor
    &property_csspropertylinebreak,  // CSSPropertyLineBreak
    &property_csspropertylineheight,  // CSSPropertyLineHeight
    &property_csspropertylineheightstep,  // CSSPropertyLineHeightStep
    &property_csspropertyliststyleimage,  // CSSPropertyListStyleImage
    &property_csspropertyliststyleposition,  // CSSPropertyListStylePosition
    &property_csspropertyliststyletype,  // CSSPropertyListStyleType
    &property_csspropertymarginbottom,  // CSSPropertyMarginBottom
    &property_csspropertymarginleft,  // CSSPropertyMarginLeft
    &property_csspropertymarginright,  // CSSPropertyMarginRight
    &property_csspropertymargintop,  // CSSPropertyMarginTop
    &property_csspropertymarkerend,  // CSSPropertyMarkerEnd
    &property_csspropertymarkermid,  // CSSPropertyMarkerMid
    &property_csspropertymarkerstart,  // CSSPropertyMarkerStart
    &property_csspropertymask,  // CSSPropertyMask
    &property_csspropertymasksourcetype,  // CSSPropertyMaskSourceType
    &property_csspropertymasktype,  // CSSPropertyMaskType
    &property_csspropertymaxblocksize,  // CSSPropertyMaxBlockSize
    &property_csspropertymaxheight,  // CSSPropertyMaxHeight
    &property_csspropertymaxinlinesize,  // CSSPropertyMaxInlineSize
    &property_csspropertymaxwidth,  // CSSPropertyMaxWidth
    &property_csspropertymaxzoom,  // CSSPropertyMaxZoom
    &property_csspropertyminblocksize,  // CSSPropertyMinBlockSize
    &property_csspropertyminheight,  // CSSPropertyMinHeight
    &property_csspropertymininlinesize,  // CSSPropertyMinInlineSize
    &property_csspropertyminwidth,  // CSSPropertyMinWidth
    &property_csspropertyminzoom,  // CSSPropertyMinZoom
    &property_csspropertymixblendmode,  // CSSPropertyMixBlendMode
    &property_csspropertyobjectfit,  // CSSPropertyObjectFit
    &property_csspropertyobjectposition,  // CSSPropertyObjectPosition
    &property_csspropertyoffsetanchor,  // CSSPropertyOffsetAnchor
    &property_csspropertyoffsetdistance,  // CSSPropertyOffsetDistance
    &property_csspropertyoffsetpath,  // CSSPropertyOffsetPath
    &property_csspropertyoffsetposition,  // CSSPropertyOffsetPosition
    &property_csspropertyoffsetrotate,  // CSSPropertyOffsetRotate
    &property_csspropertyopacity,  // CSSPropertyOpacity
    &property_csspropertyorder,  // CSSPropertyOrder
    &property_csspropertyorientation,  // CSSPropertyOrientation
    &property_csspropertyorphans,  // CSSPropertyOrphans
    &property_csspropertyoutlinecolor,  // CSSPropertyOutlineColor
    &property_csspropertyoutlineoffset,  // CSSPropertyOutlineOffset
    &property_csspropertyoutlinestyle,  // CSSPropertyOutlineStyle
    &property_csspropertyoutlinewidth,  // CSSPropertyOutlineWidth
    &property_csspropertyoverflowanchor,  // CSSPropertyOverflowAnchor
    &property_csspropertyoverflowwrap,  // CSSPropertyOverflowWrap
    &property_csspropertyoverflowx,  // CSSPropertyOverflowX
    &property_csspropertyoverflowy,  // CSSPropertyOverflowY
    &property_csspropertyoverscrollbehaviorx,  // CSSPropertyOverscrollBehaviorX
    &property_csspropertyoverscrollbehaviory,  // CSSPropertyOverscrollBehaviorY
    &property_csspropertypaddingbottom,  // CSSPropertyPaddingBottom
    &property_csspropertypaddingleft,  // CSSPropertyPaddingLeft
    &property_csspropertypaddingright,  // CSSPropertyPaddingRight
    &property_csspropertypaddingtop,  // CSSPropertyPaddingTop
    &property_csspropertypage,  // CSSPropertyPage
    &property_csspropertypaintorder,  // CSSPropertyPaintOrder
    &property_csspropertyperspective,  // CSSPropertyPerspective
    &property_csspropertyperspectiveorigin,  // CSSPropertyPerspectiveOrigin
    &property_csspropertypointerevents,  // CSSPropertyPointerEvents
    &property_csspropertyposition,  // CSSPropertyPosition
    &property_csspropertyquotes,  // CSSPropertyQuotes
    &property_csspropertyr,  // CSSPropertyR
    &property_csspropertyresize,  // CSSPropertyResize
    &property_csspropertyright,  // CSSPropertyRight
    &property_csspropertyrotate,  // CSSPropertyRotate
    &property_csspropertyrowgap,  // CSSPropertyRowGap
    &property_csspropertyrx,  // CSSPropertyRx
    &property_csspropertyry,  // CSSPropertyRy
    &property_csspropertyscale,  // CSSPropertyScale
    &property_csspropertyscrollbehavior,  // CSSPropertyScrollBehavior
    &property_csspropertyscrollcustomization,  // CSSPropertyScrollCustomization
    &property_csspropertyscrollmarginblockend,  // CSSPropertyScrollMarginBlockEnd
    &property_csspropertyscrollmarginblockstart,  // CSSPropertyScrollMarginBlockStart
    &property_csspropertyscrollmarginbottom,  // CSSPropertyScrollMarginBottom
    &property_csspropertyscrollmargininlineend,  // CSSPropertyScrollMarginInlineEnd
    &property_csspropertyscrollmargininlinestart,  // CSSPropertyScrollMarginInlineStart
    &property_csspropertyscrollmarginleft,  // CSSPropertyScrollMarginLeft
    &property_csspropertyscrollmarginright,  // CSSPropertyScrollMarginRight
    &property_csspropertyscrollmargintop,  // CSSPropertyScrollMarginTop
    &property_csspropertyscrollpaddingblockend,  // CSSPropertyScrollPaddingBlockEnd
    &property_csspropertyscrollpaddingblockstart,  // CSSPropertyScrollPaddingBlockStart
    &property_csspropertyscrollpaddingbottom,  // CSSPropertyScrollPaddingBottom
    &property_csspropertyscrollpaddinginlineend,  // CSSPropertyScrollPaddingInlineEnd
    &property_csspropertyscrollpaddinginlinestart,  // CSSPropertyScrollPaddingInlineStart
    &property_csspropertyscrollpaddingleft,  // CSSPropertyScrollPaddingLeft
    &property_csspropertyscrollpaddingright,  // CSSPropertyScrollPaddingRight
    &property_csspropertyscrollpaddingtop,  // CSSPropertyScrollPaddingTop
    &property_csspropertyscrollsnapalign,  // CSSPropertyScrollSnapAlign
    &property_csspropertyscrollsnapstop,  // CSSPropertyScrollSnapStop
    &property_csspropertyscrollsnaptype,  // CSSPropertyScrollSnapType
    &property_csspropertyshapeimagethreshold,  // CSSPropertyShapeImageThreshold
    &property_csspropertyshapemargin,  // CSSPropertyShapeMargin
    &property_csspropertyshapeoutside,  // CSSPropertyShapeOutside
    &property_csspropertyshaperendering,  // CSSPropertyShapeRendering
    &property_csspropertysize,  // CSSPropertySize
    &property_csspropertyspeak,  // CSSPropertySpeak
    &property_csspropertysrc,  // CSSPropertySrc
    &property_csspropertystopcolor,  // CSSPropertyStopColor
    &property_csspropertystopopacity,  // CSSPropertyStopOpacity
    &property_csspropertystroke,  // CSSPropertyStroke
    &property_csspropertystrokedasharray,  // CSSPropertyStrokeDasharray
    &property_csspropertystrokedashoffset,  // CSSPropertyStrokeDashoffset
    &property_csspropertystrokelinecap,  // CSSPropertyStrokeLinecap
    &property_csspropertystrokelinejoin,  // CSSPropertyStrokeLinejoin
    &property_csspropertystrokemiterlimit,  // CSSPropertyStrokeMiterlimit
    &property_csspropertystrokeopacity,  // CSSPropertyStrokeOpacity
    &property_csspropertystrokewidth,  // CSSPropertyStrokeWidth
    &property_csspropertytabsize,  // CSSPropertyTabSize
    &property_csspropertytablelayout,  // CSSPropertyTableLayout
    &property_csspropertytextalign,  // CSSPropertyTextAlign
    &property_csspropertytextalignlast,  // CSSPropertyTextAlignLast
    &property_csspropertytextanchor,  // CSSPropertyTextAnchor
    &property_csspropertytextcombineupright,  // CSSPropertyTextCombineUpright
    &property_csspropertytextdecorationcolor,  // CSSPropertyTextDecorationColor
    &property_csspropertytextdecorationline,  // CSSPropertyTextDecorationLine
    &property_csspropertytextdecorationskipink,  // CSSPropertyTextDecorationSkipInk
    &property_csspropertytextdecorationstyle,  // CSSPropertyTextDecorationStyle
    &property_csspropertytextindent,  // CSSPropertyTextIndent
    &property_csspropertytextjustify,  // CSSPropertyTextJustify
    &property_csspropertytextoverflow,  // CSSPropertyTextOverflow
    &property_csspropertytextshadow,  // CSSPropertyTextShadow
    &property_csspropertytextsizeadjust,  // CSSPropertyTextSizeAdjust
    &property_csspropertytexttransform,  // CSSPropertyTextTransform
    &property_csspropertytextunderlineposition,  // CSSPropertyTextUnderlinePosition
    &property_csspropertytop,  // CSSPropertyTop
    &property_csspropertytouchaction,  // CSSPropertyTouchAction
    &property_csspropertytransform,  // CSSPropertyTransform
    &property_csspropertytransformbox,  // CSSPropertyTransformBox
    &property_csspropertytransformorigin,  // CSSPropertyTransformOrigin
    &property_csspropertytransformstyle,  // CSSPropertyTransformStyle
    &property_csspropertytranslate,  // CSSPropertyTranslate
    &property_csspropertyunicodebidi,  // CSSPropertyUnicodeBidi
    &property_csspropertyunicoderange,  // CSSPropertyUnicodeRange
    &property_csspropertyuserselect,  // CSSPropertyUserSelect
    &property_csspropertyuserzoom,  // CSSPropertyUserZoom
    &property_csspropertyvectoreffect,  // CSSPropertyVectorEffect
    &property_csspropertyverticalalign,  // CSSPropertyVerticalAlign
    &property_csspropertyviewportfit,  // CSSPropertyViewportFit
    &property_csspropertyvisibility,  // CSSPropertyVisibility
    &property_csspropertywebkitappregion,  // CSSPropertyWebkitAppRegion
    &property_csspropertywebkitappearance,  // CSSPropertyWebkitAppearance
    &property_csspropertywebkitborderaftercolor,  // CSSPropertyWebkitBorderAfterColor
    &property_csspropertywebkitborderafterstyle,  // CSSPropertyWebkitBorderAfterStyle
    &property_csspropertywebkitborderafterwidth,  // CSSPropertyWebkitBorderAfterWidth
    &property_csspropertywebkitborderbeforecolor,  // CSSPropertyWebkitBorderBeforeColor
    &property_csspropertywebkitborderbeforestyle,  // CSSPropertyWebkitBorderBeforeStyle
    &property_csspropertywebkitborderbeforewidth,  // CSSPropertyWebkitBorderBeforeWidth
    &property_csspropertywebkitborderendcolor,  // CSSPropertyWebkitBorderEndColor
    &property_csspropertywebkitborderendstyle,  // CSSPropertyWebkitBorderEndStyle
    &property_csspropertywebkitborderendwidth,  // CSSPropertyWebkitBorderEndWidth
    &property_csspropertywebkitborderhorizontalspacing,  // CSSPropertyWebkitBorderHorizontalSpacing
    &property_csspropertywebkitborderimage,  // CSSPropertyWebkitBorderImage
    &property_csspropertywebkitborderstartcolor,  // CSSPropertyWebkitBorderStartColor
    &property_csspropertywebkitborderstartstyle,  // CSSPropertyWebkitBorderStartStyle
    &property_csspropertywebkitborderstartwidth,  // CSSPropertyWebkitBorderStartWidth
    &property_csspropertywebkitborderverticalspacing,  // CSSPropertyWebkitBorderVerticalSpacing
    &property_csspropertywebkitboxalign,  // CSSPropertyWebkitBoxAlign
    &property_csspropertywebkitboxdecorationbreak,  // CSSPropertyWebkitBoxDecorationBreak
    &property_csspropertywebkitboxdirection,  // CSSPropertyWebkitBoxDirection
    &property_csspropertywebkitboxflex,  // CSSPropertyWebkitBoxFlex
    &property_csspropertywebkitboxordinalgroup,  // CSSPropertyWebkitBoxOrdinalGroup
    &property_csspropertywebkitboxorient,  // CSSPropertyWebkitBoxOrient
    &property_csspropertywebkitboxpack,  // CSSPropertyWebkitBoxPack
    &property_csspropertywebkitboxreflect,  // CSSPropertyWebkitBoxReflect
    &property_csspropertywebkitfontsizedelta,  // CSSPropertyWebkitFontSizeDelta
    &property_csspropertywebkithighlight,  // CSSPropertyWebkitHighlight
    &property_csspropertywebkithyphenatecharacter,  // CSSPropertyWebkitHyphenateCharacter
    &property_csspropertywebkitlinebreak,  // CSSPropertyWebkitLineBreak
    &property_csspropertywebkitlineclamp,  // CSSPropertyWebkitLineClamp
    &property_csspropertywebkitlogicalheight,  // CSSPropertyWebkitLogicalHeight
    &property_csspropertywebkitlogicalwidth,  // CSSPropertyWebkitLogicalWidth
    &property_csspropertywebkitmarginafter,  // CSSPropertyWebkitMarginAfter
    &property_csspropertywebkitmarginaftercollapse,  // CSSPropertyWebkitMarginAfterCollapse
    &property_csspropertywebkitmarginbefore,  // CSSPropertyWebkitMarginBefore
    &property_csspropertywebkitmarginbeforecollapse,  // CSSPropertyWebkitMarginBeforeCollapse
    &property_csspropertywebkitmarginbottomcollapse,  // CSSPropertyWebkitMarginBottomCollapse
    &property_csspropertywebkitmarginend,  // CSSPropertyWebkitMarginEnd
    &property_csspropertywebkitmarginstart,  // CSSPropertyWebkitMarginStart
    &property_csspropertywebkitmargintopcollapse,  // CSSPropertyWebkitMarginTopCollapse
    &property_csspropertywebkitmaskboximageoutset,  // CSSPropertyWebkitMaskBoxImageOutset
    &property_csspropertywebkitmaskboximagerepeat,  // CSSPropertyWebkitMaskBoxImageRepeat
    &property_csspropertywebkitmaskboximageslice,  // CSSPropertyWebkitMaskBoxImageSlice
    &property_csspropertywebkitmaskboximagesource,  // CSSPropertyWebkitMaskBoxImageSource
    &property_csspropertywebkitmaskboximagewidth,  // CSSPropertyWebkitMaskBoxImageWidth
    &property_csspropertywebkitmaskclip,  // CSSPropertyWebkitMaskClip
    &property_csspropertywebkitmaskcomposite,  // CSSPropertyWebkitMaskComposite
    &property_csspropertywebkitmaskimage,  // CSSPropertyWebkitMaskImage
    &property_csspropertywebkitmaskorigin,  // CSSPropertyWebkitMaskOrigin
    &property_csspropertywebkitmaskpositionx,  // CSSPropertyWebkitMaskPositionX
    &property_csspropertywebkitmaskpositiony,  // CSSPropertyWebkitMaskPositionY
    &property_csspropertywebkitmaskrepeatx,  // CSSPropertyWebkitMaskRepeatX
    &property_csspropertywebkitmaskrepeaty,  // CSSPropertyWebkitMaskRepeatY
    &property_csspropertywebkitmasksize,  // CSSPropertyWebkitMaskSize
    &property_csspropertywebkitmaxlogicalheight,  // CSSPropertyWebkitMaxLogicalHeight
    &property_csspropertywebkitmaxlogicalwidth,  // CSSPropertyWebkitMaxLogicalWidth
    &property_csspropertywebkitminlogicalheight,  // CSSPropertyWebkitMinLogicalHeight
    &property_csspropertywebkitminlogicalwidth,  // CSSPropertyWebkitMinLogicalWidth
    &property_csspropertywebkitpaddingafter,  // CSSPropertyWebkitPaddingAfter
    &property_csspropertywebkitpaddingbefore,  // CSSPropertyWebkitPaddingBefore
    &property_csspropertywebkitpaddingend,  // CSSPropertyWebkitPaddingEnd
    &property_csspropertywebkitpaddingstart,  // CSSPropertyWebkitPaddingStart
    &property_csspropertywebkitperspectiveoriginx,  // CSSPropertyWebkitPerspectiveOriginX
    &property_csspropertywebkitperspectiveoriginy,  // CSSPropertyWebkitPerspectiveOriginY
    &property_csspropertywebkitprintcoloradjust,  // CSSPropertyWebkitPrintColorAdjust
    &property_csspropertywebkitrtlordering,  // CSSPropertyWebkitRtlOrdering
    &property_csspropertywebkitrubyposition,  // CSSPropertyWebkitRubyPosition
    &property_csspropertywebkittaphighlightcolor,  // CSSPropertyWebkitTapHighlightColor
    &property_csspropertywebkittextcombine,  // CSSPropertyWebkitTextCombine
    &property_csspropertywebkittextdecorationsineffect,  // CSSPropertyWebkitTextDecorationsInEffect
    &property_csspropertywebkittextemphasiscolor,  // CSSPropertyWebkitTextEmphasisColor
    &property_csspropertywebkittextemphasisposition,  // CSSPropertyWebkitTextEmphasisPosition
    &property_csspropertywebkittextemphasisstyle,  // CSSPropertyWebkitTextEmphasisStyle
    &property_csspropertywebkittextfillcolor,  // CSSPropertyWebkitTextFillColor
    &property_csspropertywebkittextsecurity,  // CSSPropertyWebkitTextSecurity
    &property_csspropertywebkittextstrokecolor,  // CSSPropertyWebkitTextStrokeColor
    &property_csspropertywebkittextstrokewidth,  // CSSPropertyWebkitTextStrokeWidth
    &property_csspropertywebkittransformoriginx,  // CSSPropertyWebkitTransformOriginX
    &property_csspropertywebkittransformoriginy,  // CSSPropertyWebkitTransformOriginY
    &property_csspropertywebkittransformoriginz,  // CSSPropertyWebkitTransformOriginZ
    &property_csspropertywebkituserdrag,  // CSSPropertyWebkitUserDrag
    &property_csspropertywebkitusermodify,  // CSSPropertyWebkitUserModify
    &property_csspropertywhitespace,  // CSSPropertyWhiteSpace
    &property_csspropertywidows,  // CSSPropertyWidows
    &property_csspropertywidth,  // CSSPropertyWidth
    &property_csspropertywillchange,  // CSSPropertyWillChange
    &property_csspropertywordbreak,  // CSSPropertyWordBreak
    &property_csspropertywordspacing,  // CSSPropertyWordSpacing
    &property_csspropertywordwrap,  // CSSPropertyWordWrap
    &property_csspropertyx,  // CSSPropertyX
    &property_csspropertyy,  // CSSPropertyY
    &property_csspropertyzindex,  // CSSPropertyZIndex
    &property_csspropertyanimation,  // CSSPropertyAnimation
    &property_csspropertybackground,  // CSSPropertyBackground
    &property_csspropertybackgroundposition,  // CSSPropertyBackgroundPosition
    &property_csspropertybackgroundrepeat,  // CSSPropertyBackgroundRepeat
    &property_csspropertyborder,  // CSSPropertyBorder
    &property_csspropertyborderbottom,  // CSSPropertyBorderBottom
    &property_csspropertybordercolor,  // CSSPropertyBorderColor
    &property_csspropertyborderimage,  // CSSPropertyBorderImage
    &property_csspropertyborderleft,  // CSSPropertyBorderLeft
    &property_csspropertyborderradius,  // CSSPropertyBorderRadius
    &property_csspropertyborderright,  // CSSPropertyBorderRight
    &property_csspropertyborderspacing,  // CSSPropertyBorderSpacing
    &property_csspropertyborderstyle,  // CSSPropertyBorderStyle
    &property_csspropertybordertop,  // CSSPropertyBorderTop
    &property_csspropertyborderwidth,  // CSSPropertyBorderWidth
    &property_csspropertycolumnrule,  // CSSPropertyColumnRule
    &property_csspropertycolumns,  // CSSPropertyColumns
    &property_csspropertyflex,  // CSSPropertyFlex
    &property_csspropertyflexflow,  // CSSPropertyFlexFlow
    &property_csspropertyfont,  // CSSPropertyFont
    &property_csspropertyfontvariant,  // CSSPropertyFontVariant
    &property_csspropertygap,  // CSSPropertyGap
    &property_csspropertygrid,  // CSSPropertyGrid
    &property_csspropertygridarea,  // CSSPropertyGridArea
    &property_csspropertygridcolumn,  // CSSPropertyGridColumn
    &property_csspropertygridcolumngap,  // CSSPropertyGridColumnGap
    &property_csspropertygridgap,  // CSSPropertyGridGap
    &property_csspropertygridrow,  // CSSPropertyGridRow
    &property_csspropertygridrowgap,  // CSSPropertyGridRowGap
    &property_csspropertygridtemplate,  // CSSPropertyGridTemplate
    &property_csspropertyliststyle,  // CSSPropertyListStyle
    &property_csspropertymargin,  // CSSPropertyMargin
    &property_csspropertymarker,  // CSSPropertyMarker
    &property_csspropertyoffset,  // CSSPropertyOffset
    &property_csspropertyoutline,  // CSSPropertyOutline
    &property_csspropertyoverflow,  // CSSPropertyOverflow
    &property_csspropertyoverscrollbehavior,  // CSSPropertyOverscrollBehavior
    &property_csspropertypadding,  // CSSPropertyPadding
    &property_csspropertypagebreakafter,  // CSSPropertyPageBreakAfter
    &property_csspropertypagebreakbefore,  // CSSPropertyPageBreakBefore
    &property_csspropertypagebreakinside,  // CSSPropertyPageBreakInside
    &property_csspropertyplacecontent,  // CSSPropertyPlaceContent
    &property_csspropertyplaceitems,  // CSSPropertyPlaceItems
    &property_csspropertyplaceself,  // CSSPropertyPlaceSelf
    &property_csspropertyscrollmargin,  // CSSPropertyScrollMargin
    &property_csspropertyscrollmarginblock,  // CSSPropertyScrollMarginBlock
    &property_csspropertyscrollmargininline,  // CSSPropertyScrollMarginInline
    &property_csspropertyscrollpadding,  // CSSPropertyScrollPadding
    &property_csspropertyscrollpaddingblock,  // CSSPropertyScrollPaddingBlock
    &property_csspropertyscrollpaddinginline,  // CSSPropertyScrollPaddingInline
    &property_csspropertytextdecoration,  // CSSPropertyTextDecoration
    &property_csspropertytransition,  // CSSPropertyTransition
    &property_csspropertywebkitborderafter,  // CSSPropertyWebkitBorderAfter
    &property_csspropertywebkitborderbefore,  // CSSPropertyWebkitBorderBefore
    &property_csspropertywebkitborderend,  // CSSPropertyWebkitBorderEnd
    &property_csspropertywebkitborderstart,  // CSSPropertyWebkitBorderStart
    &property_csspropertywebkitcolumnbreakafter,  // CSSPropertyWebkitColumnBreakAfter
    &property_csspropertywebkitcolumnbreakbefore,  // CSSPropertyWebkitColumnBreakBefore
    &property_csspropertywebkitcolumnbreakinside,  // CSSPropertyWebkitColumnBreakInside
    &property_csspropertywebkitmargincollapse,  // CSSPropertyWebkitMarginCollapse
    &property_csspropertywebkitmask,  // CSSPropertyWebkitMask
    &property_csspropertywebkitmaskboximage,  // CSSPropertyWebkitMaskBoxImage
    &property_csspropertywebkitmaskposition,  // CSSPropertyWebkitMaskPosition
    &property_csspropertywebkitmaskrepeat,  // CSSPropertyWebkitMaskRepeat
    &property_csspropertywebkittextemphasis,  // CSSPropertyWebkitTextEmphasis
    &property_csspropertywebkittextstroke,  // CSSPropertyWebkitTextStroke
  };
  // Subtract 1 because CSSPropertyInvalid does not appear in the array.
  return *property_classes[id - 1];
}

const CSSUnresolvedProperty& CSSUnresolvedProperty::Get(CSSPropertyID id) {
  DCHECK_NE(id, CSSPropertyInvalid);
  DCHECK_LE(id, 954);  // last_unresolved_property_id
  if (id <= 443) // last property id
    return GetNonAliasProperty(id);
  return *GetAliasProperty(id);
}

}  // namespace blink
