// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smart_Gadget

#include "../ui.h"


// COMPONENT Alarm Comp

lv_obj_t * ui_Panel_Alarm_Comp_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Panel_Alarm_Comp;
    cui_Panel_Alarm_Comp = lv_obj_create(comp_parent);
    lv_obj_set_height(cui_Panel_Alarm_Comp, 80);
    lv_obj_set_width(cui_Panel_Alarm_Comp, lv_pct(94));
    lv_obj_set_x(cui_Panel_Alarm_Comp, 0);
    lv_obj_set_y(cui_Panel_Alarm_Comp, 43);
    lv_obj_set_align(cui_Panel_Alarm_Comp, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(cui_Panel_Alarm_Comp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_Panel_Alarm_Comp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Panel_Alarm_Comp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cui_Panel_Alarm_Comp, lv_color_hex(0x293062), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(cui_Panel_Alarm_Comp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_Panel_Alarm_Comp, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(cui_Panel_Alarm_Comp, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Panel_Alarm_Comp, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Panel_Alarm_Comp, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Panel_Alarm_Comp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Panel_Alarm_Comp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Label_Alarm_Num2;
    cui_Label_Alarm_Num2 = lv_label_create(cui_Panel_Alarm_Comp);
    lv_obj_set_width(cui_Label_Alarm_Num2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Label_Alarm_Num2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_Label_Alarm_Num2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(cui_Label_Alarm_Num2, "7:00");
    lv_obj_set_style_text_color(cui_Label_Alarm_Num2, lv_color_hex(0x293062), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Label_Alarm_Num2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_Label_Alarm_Num2, &ui_font_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Small_label_Period;
    cui_Small_label_Period = ui_Label_Small_Label_create(cui_Panel_Alarm_Comp);
    lv_obj_set_x(cui_Small_label_Period, -5);
    lv_obj_set_y(cui_Small_label_Period, -6);
    lv_obj_set_align(cui_Small_label_Period, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(cui_Small_label_Period, "Wake Up!");

    lv_obj_t * cui_Switch_Switch1;
    cui_Switch_Switch1 = lv_switch_create(cui_Panel_Alarm_Comp);
    lv_obj_set_width(cui_Switch_Switch1, 61);
    lv_obj_set_height(cui_Switch_Switch1, 32);
    lv_obj_set_x(cui_Switch_Switch1, -4);
    lv_obj_set_y(cui_Switch_Switch1, 11);
    lv_obj_set_align(cui_Switch_Switch1, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_style_radius(cui_Switch_Switch1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Switch_Switch1, lv_color_hex(0x9D9ED5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Switch_Switch1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(cui_Switch_Switch1, 50, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Switch_Switch1, lv_color_hex(0x293062), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(cui_Switch_Switch1, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_radius(cui_Switch_Switch1, 50, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Switch_Switch1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Switch_Switch1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Switch_Switch1, -3, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Switch_Switch1, -3, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Switch_Switch1, -3, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Switch_Switch1, -3, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PANEL_ALARM_COMP_NUM);
    children[UI_COMP_PANEL_ALARM_COMP_PANEL_ALARM_COMP] = cui_Panel_Alarm_Comp;
    children[UI_COMP_PANEL_ALARM_COMP_LABEL_ALARM_NUM2] = cui_Label_Alarm_Num2;
    children[UI_COMP_PANEL_ALARM_COMP_SMALL_LABEL_PERIOD] = cui_Small_label_Period;
    children[UI_COMP_PANEL_ALARM_COMP_SWITCH_SWITCH1] = cui_Switch_Switch1;
    lv_obj_add_event_cb(cui_Panel_Alarm_Comp, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Panel_Alarm_Comp, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_Panel_Alarm_Comp_create_hook(cui_Panel_Alarm_Comp);
    return cui_Panel_Alarm_Comp;
}

