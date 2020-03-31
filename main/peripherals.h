#pragma once

#ifndef _TOUCH_PERIPH_H
#define _TOUCH_PERIPH_H

#include "esp_peripherals.h"
#include "board_pins_config.h"
#include "periph_touch.h"
#include "periph_button.h"

static esp_periph_set_handle_t touch_periph_set;
typedef esp_err_t(*PERIPH_EVENT_HANDLE)(audio_event_iface_msg_t* event, void* context);
typedef void(*PERIPH_BUTTON_EVENT)(int cmd, void* data);
static PERIPH_BUTTON_EVENT on_btn_play_callback;
static PERIPH_BUTTON_EVENT on_btn_set_callback;
static PERIPH_BUTTON_EVENT on_btn_volup_callback;
static PERIPH_BUTTON_EVENT on_btn_voldown_callback;

void f_setup_event_touch_periph_play(PERIPH_BUTTON_EVENT event);
void f_setup_event_touch_periph_set(PERIPH_BUTTON_EVENT event);
void f_setup_event_touch_periph_volup(PERIPH_BUTTON_EVENT event);
void f_setup_event_touch_periph_voldown(PERIPH_BUTTON_EVENT event);

void f_add_callback(PERIPH_EVENT_HANDLE callback);

esp_err_t on_touch(audio_event_iface_msg_t* event, void* context);

void f_setup_touch_periph();

void f_destroy_touch_periph();

#endif