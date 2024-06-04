// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Dynamic_Island

#include "ui.h"

void ui_ScreenIslandDemo_screen_init(void)
{
    ui_ScreenIslandDemo = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenIslandDemo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Island = lv_obj_create(ui_ScreenIslandDemo);
    lv_obj_set_width(ui_Island, 100);
    lv_obj_set_height(ui_Island, 25);
    lv_obj_set_x(ui_Island, 0);
    lv_obj_set_y(ui_Island, 9);
    lv_obj_set_align(ui_Island, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Island, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Island, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Island, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Island, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Island, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageChargingLabel = lv_img_create(ui_Island);
    lv_img_set_src(ui_ImageChargingLabel, &ui_img_charging_png);
    lv_obj_set_width(ui_ImageChargingLabel, LV_SIZE_CONTENT);   /// 45
    lv_obj_set_height(ui_ImageChargingLabel, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_ImageChargingLabel, 0);
    lv_obj_set_y(ui_ImageChargingLabel, -6);
    lv_obj_set_align(ui_ImageChargingLabel, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ImageChargingLabel, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageChargingLabel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageBattery = lv_img_create(ui_Island);
    lv_img_set_src(ui_ImageBattery, &ui_img_battery_png);
    lv_obj_set_width(ui_ImageBattery, LV_SIZE_CONTENT);   /// 54
    lv_obj_set_height(ui_ImageBattery, LV_SIZE_CONTENT);    /// 13
    lv_obj_set_x(ui_ImageBattery, 0);
    lv_obj_set_y(ui_ImageBattery, -7);
    lv_obj_set_align(ui_ImageBattery, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ImageBattery, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageBattery, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IslandMask = lv_obj_create(ui_ScreenIslandDemo);
    lv_obj_set_width(ui_IslandMask, 100);
    lv_obj_set_height(ui_IslandMask, 25);
    lv_obj_set_x(ui_IslandMask, 0);
    lv_obj_set_y(ui_IslandMask, 9);
    lv_obj_set_align(ui_IslandMask, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_IslandMask, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IslandMask, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IslandMask, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IslandMask, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_IslandMask, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonWider = lv_btn_create(ui_ScreenIslandDemo);
    lv_obj_set_width(ui_ButtonWider, 126);
    lv_obj_set_height(ui_ButtonWider, 60);
    lv_obj_set_x(ui_ButtonWider, 0);
    lv_obj_set_y(ui_ButtonWider, lv_pct(-20));
    lv_obj_set_align(ui_ButtonWider, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonWider, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonWider, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelWider = lv_label_create(ui_ButtonWider);
    lv_obj_set_width(ui_LabelWider, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelWider, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelWider, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelWider, "Wider");

    ui_ButtonBigger = lv_btn_create(ui_ScreenIslandDemo);
    lv_obj_set_width(ui_ButtonBigger, 126);
    lv_obj_set_height(ui_ButtonBigger, 60);
    lv_obj_set_x(ui_ButtonBigger, 0);
    lv_obj_set_y(ui_ButtonBigger, lv_pct(1));
    lv_obj_set_align(ui_ButtonBigger, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonBigger, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonBigger, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelBigger = lv_label_create(ui_ButtonBigger);
    lv_obj_set_width(ui_LabelBigger, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelBigger, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelBigger, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelBigger, "Bigger");

    ui_ButtonCharging = lv_btn_create(ui_ScreenIslandDemo);
    lv_obj_set_width(ui_ButtonCharging, 126);
    lv_obj_set_height(ui_ButtonCharging, 60);
    lv_obj_set_x(ui_ButtonCharging, 0);
    lv_obj_set_y(ui_ButtonCharging, lv_pct(22));
    lv_obj_set_align(ui_ButtonCharging, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonCharging, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonCharging, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelCharging = lv_label_create(ui_ButtonCharging);
    lv_obj_set_width(ui_LabelCharging, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelCharging, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelCharging, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelCharging, "Charging");

    lv_obj_add_event_cb(ui_ButtonWider, ui_event_ButtonWider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonBigger, ui_event_ButtonBigger, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonCharging, ui_event_ButtonCharging, LV_EVENT_ALL, NULL);

}
