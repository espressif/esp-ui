/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <algorithm>
#include "stylesheet/dark/phone_stylesheet.h"
#include "esp_brookesia_phone_type.h"
#include "esp_brookesia_phone.hpp"

#if !ESP_BROOKESIA_LOG_ENABLE_DEBUG_PHONE_PHONE
#undef ESP_BROOKESIA_LOGD
#define ESP_BROOKESIA_LOGD(...)
#endif

using namespace std;

ESP_Brookesia_Phone::ESP_Brookesia_Phone(lv_disp_t *display):
    ESP_Brookesia_TemplatePhone(_stylesheet.core, _home, _manager, display),
    _home(*this, _stylesheet.home),
    _manager(*this, _home, _stylesheet.manager)
{
}

ESP_Brookesia_Phone::~ESP_Brookesia_Phone()
{
    ESP_BROOKESIA_LOGD("Destroy phone(@0x%p)", this);
    if (!del()) {
        ESP_BROOKESIA_LOGE("Delete failed");
    }
    ESP_Brookesia_TemplatePhone::~ESP_Brookesia_TemplatePhone();
}

bool ESP_Brookesia_Phone::calibrateStylesheet(const ESP_Brookesia_StyleSize_t &screen_size, ESP_Brookesia_PhoneStylesheet_t &stylesheet)
{
    ESP_BROOKESIA_LOGD("Calibrate phone(0x%p) stylesheet", this);

    // Core
    ESP_BROOKESIA_CHECK_FALSE_RETURN(calibrateCoreData(stylesheet.core), false, "Invalid core data");

    // Home
    if (!_stylesheet.manager.flags.enable_gesture && _stylesheet.home.flags.enable_recents_screen) {
        ESP_BROOKESIA_LOGW("Gesture is disabled, but recents_screen is enabled, disable recents_screen automatically");
        _stylesheet.home.flags.enable_recents_screen = 0;
    }
    ESP_BROOKESIA_CHECK_FALSE_RETURN(_home.calibrateData(screen_size, stylesheet.home), false, "Invalid home data");
    ESP_BROOKESIA_CHECK_FALSE_RETURN(_manager.calibrateData(screen_size, _home, stylesheet.manager), false,
                                     "Invalid manager data");

    return true;
}

bool ESP_Brookesia_Phone::begin(void)
{
    bool ret = true;
    ESP_Brookesia_PhoneStylesheet_t *default_dark_data = nullptr;
    const ESP_Brookesia_PhoneStylesheet_t *default_find_data = nullptr;
    ESP_Brookesia_StyleSize_t display_size = {};

    ESP_BROOKESIA_LOGD("Begin phone(@0x%p)", this);
    ESP_BROOKESIA_CHECK_FALSE_RETURN(!checkCoreInitialized(), false, "Already initialized");

    // Check if any phone stylesheet is added, if not, add default stylesheet
    if (getStylesheetCount() == 0) {
        default_dark_data = new ESP_Brookesia_PhoneStylesheet_t ESP_BROOKESIA_PHONE_DEFAULT_DARK_STYLESHEET();
        ESP_BROOKESIA_LOGW("No phone stylesheet is added, adding default dark stylesheet(%s)", default_dark_data->core.name);
        ESP_BROOKESIA_CHECK_NULL_RETURN(default_dark_data, false, "Failed to create default stylesheet");
        ESP_BROOKESIA_CHECK_FALSE_GOTO(ret = addStylesheet(*default_dark_data), end, "Failed to add default stylesheet");
    }
    // Check if any phone stylesheet is activated, if not, activate default stylesheet
    if (_stylesheet.core.name == nullptr) {
        ESP_BROOKESIA_CHECK_NULL_RETURN(_display, false, "Invalid display");
        display_size.width = lv_disp_get_hor_res(_display);
        display_size.height = lv_disp_get_ver_res(_display);

        ESP_BROOKESIA_LOGW("No phone stylesheet is activated, try to find first stylesheet with screen size(%dx%d)",
                           display_size.width, display_size.height);
        default_find_data = getStylesheet(display_size);
        ESP_BROOKESIA_CHECK_NULL_GOTO(default_find_data, end, "Failed to get default stylesheet");

        ret = activateStylesheet(*default_find_data);
        ESP_BROOKESIA_CHECK_FALSE_GOTO(ret, end, "Failed to activate default stylesheet");
    }

    ESP_BROOKESIA_CHECK_FALSE_GOTO(ret = beginCore(), end, "Failed to begin core");
    ESP_BROOKESIA_CHECK_FALSE_GOTO(ret = _home.begin(), end, "Failed to begin home");
    ESP_BROOKESIA_CHECK_FALSE_GOTO(ret = _manager.begin(), end, "Failed to begin manager");

end:
    if (default_dark_data != nullptr) {
        delete default_dark_data;
    }

    return ret;
}

bool ESP_Brookesia_Phone::del(void)
{
    ESP_BROOKESIA_LOGD("Delete(@0x%p)", this);

    if (!checkCoreInitialized()) {
        return true;
    }

    if (!delCore()) {
        ESP_BROOKESIA_LOGE("Delete core failed");
    }
    if (!delTemplate()) {
        ESP_BROOKESIA_LOGE("Delete core template failed");
    }
    if (!_home.del()) {
        ESP_BROOKESIA_LOGE("Delete home failed");
    }
    if (!_manager.del()) {
        ESP_BROOKESIA_LOGE("Delete manager failed");
    }

    return true;
}

bool ESP_Brookesia_Phone::addStylesheet(const ESP_Brookesia_PhoneStylesheet_t &stylesheet)
{
    ESP_BROOKESIA_LOGD("Add phone(0x%p) stylesheet", this);

    ESP_BROOKESIA_CHECK_FALSE_RETURN(
        ESP_Brookesia_Template<ESP_Brookesia_PhoneStylesheet_t>::addStylesheet(stylesheet.core.name, stylesheet.core.screen_size,
                stylesheet), false, "Failed to add phone stylesheet"
    );

    return true;
}

bool ESP_Brookesia_Phone::addStylesheet(const ESP_Brookesia_PhoneStylesheet_t *stylesheet)
{
    ESP_BROOKESIA_LOGD("Add phone(0x%p) stylesheet", this);

    ESP_BROOKESIA_CHECK_FALSE_RETURN(
        ESP_Brookesia_Template<ESP_Brookesia_PhoneStylesheet_t>::addStylesheet(stylesheet->core.name, stylesheet->core.screen_size,
                *stylesheet), false, "Failed to add phone stylesheet"
    );

    return true;
}

bool ESP_Brookesia_Phone::activateStylesheet(const ESP_Brookesia_PhoneStylesheet_t &stylesheet)
{
    ESP_BROOKESIA_LOGD("Activate phone(0x%p) stylesheet", this);

    ESP_BROOKESIA_CHECK_FALSE_RETURN(
        ESP_Brookesia_Template<ESP_Brookesia_PhoneStylesheet_t>::activateStylesheet(stylesheet.core.name, stylesheet.core.screen_size),
        false, "Failed to activate phone stylesheet"
    );

    return true;
}

bool ESP_Brookesia_Phone::activateStylesheet(const ESP_Brookesia_PhoneStylesheet_t *stylesheet)
{
    ESP_BROOKESIA_LOGD("Activate phone(0x%p) stylesheet", this);

    ESP_BROOKESIA_CHECK_FALSE_RETURN(
        ESP_Brookesia_Template<ESP_Brookesia_PhoneStylesheet_t>::activateStylesheet(stylesheet->core.name, stylesheet->core.screen_size),
        false, "Failed to activate phone stylesheet"
    );

    return true;
}
