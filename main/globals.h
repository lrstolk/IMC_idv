// #pragma once

// /* Description: This header file can be used to include global defines and/or include header files globally
//  * Author: Stijn Verhelpen
//  * Date: 10/03/2020
//  **/

// #if !defined(_GLOBALS_H)
// #define _GLOBALS_H

// //Includes
// #if !defined(_GLOBAL_INCLUDES)
//     #define _GLOBAL_INCLUDES
//     #if !defined(_GLOBAL_STD_INCLUDES)
//         #define _GLOBAL_STD_INCLUDES
//         #include <string.h>
//         #include <time.h>
//         #include <sys/time.h>
//         #include <stdio.h>
//         #include <sys/unistd.h>
//         #include <stdlib.h>
//         #include <sys/stat.h>
//     #endif

//     //Standard ESP headers
//     #if !defined(_GLOBAL_ESP_INCLUDES)
//         #define _GLOBAL_ESP_INCLUDES
//         #include "esp_system.h"
//         #include "esp_wifi.h"
//         #include "esp_event_loop.h"
//         #include "esp_log.h"
//         #include "esp_attr.h"
//         #include "esp_sleep.h"
//         #include "esp_sntp.h"
//         #include "audio_element.h"
//         #include "audio_pipeline.h"
//         #include "audio_event_iface.h"
//         #include "audio_common.h"
//         #include "fatfs_stream.h"
//         #include "i2s_stream.h"
//         #include "mp3_decoder.h"
//         #include "esp_peripherals.h"
//         #include "board_pins_config.h"
//         #include "periph_sdcard.h"
//         #include "periph_touch.h"
//         #include "periph_button.h"
//         #include "input_key_service.h"
//         #include "esp_vfs_fat.h"
//         #include "driver/sdmmc_host.h"
//         #include "driver/sdspi_host.h"
//         #include "sdmmc_cmd.h"
//         #include "esp_err.h"
//     #endif

//     //Standard FreeRTOS headers
//     #if !defined(_GLOBAL_FREERTOS_INCLUDES)
//         #define _GLOBAL_FREERTOS_INCLUDES
//         #include "freertos/FreeRTOS.h"
//         #include "freertos/task.h"
//         #include "freertos/event_groups.h"
//         #include "freertos/queue.h"
//         #include "nvs_flash.h"
//     #endif
// #endif

// #if !defined(_GLOBAL_WIFI_SETTINGS)
// #define _GLOBAL_WIFI_SETTINGS
// #define DEFAULT_SSID ""
// #define DEFAULT_PASS ""
// #endif

// //Defines
// #if !defined(_GLOBAL_DEFAULT_DEFINES)
// #define _GLOBAL_DEFAUL_DEFINES



// #endif
// #endif