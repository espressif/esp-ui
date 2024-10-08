// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smart_Gadget

#include "../ui.h"

void ui_SmartGadgetMusicPlayer_screen_init(void)
{
    ui_SmartGadgetMusicPlayer = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SmartGadgetMusicPlayer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetMusicPlayer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_SmartGadgetMusicPlayer, &ui_img_pattern_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_SmartGadgetMusicPlayer, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetMusicPlayer_Small_label_Music_Title = ui_Label_Small_Label_create(ui_SmartGadgetMusicPlayer);
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, 0);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, 0);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, "Wood and forest");
    lv_obj_set_style_text_color(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, lv_color_hex(0x000746),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetMusicPlayer_Small_label_Music_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetMusicPlayer_Small_label_Author = ui_Label_Small_Label_create(ui_SmartGadgetMusicPlayer);
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Small_label_Author, 0);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Small_label_Author, 25);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Small_label_Author, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SmartGadgetMusicPlayer_Small_label_Author, "Alan Smith");
    lv_obj_set_style_text_color(ui_SmartGadgetMusicPlayer_Small_label_Author, lv_color_hex(0x9C9CD9),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetMusicPlayer_Small_label_Author, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetMusicPlayer_Panel_Play_btn = lv_obj_create(ui_SmartGadgetMusicPlayer);
    lv_obj_set_width(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 60);
    lv_obj_set_height(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 60);
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 0);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Panel_Play_btn, -42);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Panel_Play_btn, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer_Panel_Play_btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SmartGadgetMusicPlayer_Panel_Play_btn, lv_color_hex(0x293062),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_SmartGadgetMusicPlayer_Panel_Play_btn, lv_color_hex(0x293062),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SmartGadgetMusicPlayer_Panel_Play_btn, lv_color_hex(0x515EB5),
                              LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_SmartGadgetMusicPlayer_Panel_Play_btn, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_SmartGadgetMusicPlayer_Image_Play = lv_img_create(ui_SmartGadgetMusicPlayer_Panel_Play_btn);
    lv_img_set_src(ui_SmartGadgetMusicPlayer_Image_Play, &ui_img_play_png);
    lv_obj_set_width(ui_SmartGadgetMusicPlayer_Image_Play, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetMusicPlayer_Image_Play, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Image_Play, 2);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Image_Play, 0);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Image_Play, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SmartGadgetMusicPlayer_Image_Play, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer_Image_Play, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SmartGadgetMusicPlayer_Image_Album = lv_img_create(ui_SmartGadgetMusicPlayer);
    lv_img_set_src(ui_SmartGadgetMusicPlayer_Image_Album, &ui_img_album_png);
    lv_obj_set_width(ui_SmartGadgetMusicPlayer_Image_Album, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetMusicPlayer_Image_Album, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Image_Album, 0);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Image_Album, 20);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Image_Album, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_SmartGadgetMusicPlayer_Image_Album, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer_Image_Album, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SmartGadgetMusicPlayer_Image_Album, 300, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_SmartGadgetMusicPlayer_Image_Album, lv_color_hex(0xD5D2D5),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_SmartGadgetMusicPlayer_Image_Album, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_SmartGadgetMusicPlayer_Image_Album, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_SmartGadgetMusicPlayer_Image_Album, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_SmartGadgetMusicPlayer_Image_Album, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_SmartGadgetMusicPlayer_Image_Album, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetMusicPlayer_Image_Backward = lv_img_create(ui_SmartGadgetMusicPlayer);
    lv_img_set_src(ui_SmartGadgetMusicPlayer_Image_Backward, &ui_img_backward_png);
    lv_obj_set_width(ui_SmartGadgetMusicPlayer_Image_Backward, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetMusicPlayer_Image_Backward, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Image_Backward, 30);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Image_Backward, -60);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Image_Backward, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_SmartGadgetMusicPlayer_Image_Backward,
                    LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer_Image_Backward, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_SmartGadgetMusicPlayer_Image_Backward, lv_color_hex(0x293062),
                                 LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetMusicPlayer_Image_Backward, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_SmartGadgetMusicPlayer_Image_Backward, lv_color_hex(0x515EB5),
                                 LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetMusicPlayer_Image_Backward, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_SmartGadgetMusicPlayer_Image_Forward = lv_img_create(ui_SmartGadgetMusicPlayer);
    lv_img_set_src(ui_SmartGadgetMusicPlayer_Image_Forward, &ui_img_forward_png);
    lv_obj_set_width(ui_SmartGadgetMusicPlayer_Image_Forward, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetMusicPlayer_Image_Forward, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Image_Forward, -30);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Image_Forward, -60);
    lv_obj_set_align(ui_SmartGadgetMusicPlayer_Image_Forward, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_SmartGadgetMusicPlayer_Image_Forward, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetMusicPlayer_Image_Forward, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_SmartGadgetMusicPlayer_Image_Forward, lv_color_hex(0x293062),
                                 LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetMusicPlayer_Image_Forward, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_SmartGadgetMusicPlayer_Image_Forward, lv_color_hex(0x515EB5),
                                 LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetMusicPlayer_Image_Forward, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3 = ui_Panel_Scrolldots_create(ui_SmartGadgetMusicPlayer);
    lv_obj_set_x(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, 0);
    lv_obj_set_y(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, -8);

    lv_obj_set_width(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D1),
                     4);
    lv_obj_set_height(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3,
                                        UI_COMP_PANEL_SCROLLDOTS_PANEL_D1), 4);

    lv_obj_set_x(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D2),
                 10);
    lv_obj_set_y(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D2), 0);

    lv_obj_set_x(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3),
                 20);
    lv_obj_set_y(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), 0);

    lv_obj_set_width(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D4),
                     8);
    lv_obj_set_height(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3,
                                        UI_COMP_PANEL_SCROLLDOTS_PANEL_D4), 8);
    lv_obj_set_x(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D4),
                 31);
    lv_obj_set_y(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3, UI_COMP_PANEL_SCROLLDOTS_PANEL_D4), 0);
    lv_obj_set_style_bg_color(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3,
                                                UI_COMP_PANEL_SCROLLDOTS_PANEL_D4), lv_color_hex(0x101C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_comp_get_child(ui_SmartGadgetMusicPlayer_Scrolldots_Scrolldots3,
                                              UI_COMP_PANEL_SCROLLDOTS_PANEL_D4), 255, LV_PART_MAIN | LV_STATE_DEFAULT);




    lv_obj_add_event_cb(ui_SmartGadgetMusicPlayer, ui_event_SmartGadgetMusicPlayer, LV_EVENT_ALL, NULL);

}
