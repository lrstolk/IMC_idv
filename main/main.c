#include "living_stream.h"
#include "peripherals.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

static const char *TAG = "MAIN"; 
bool isPlaying = 0;

//Onboard button method for 'Play'. Starts the stream initializing 
void on_play(int cmd, void * data){
    if(cmd == 2){
        ESP_LOGI(TAG, "Touched play");

        if(!isPlaying){
            start_living_stream();
            isPlaying = 1;
        } else {
            ESP_LOGI(TAG, "Living stream already running");
        }
    }
}

//Onboard button method for 'Set'. Goes to the next channel in the list 
void on_set(int cmd, void * data){
    if(cmd == 2){
        ESP_LOGI(TAG, "Touched set");
        if(!isPlaying){
            ESP_LOGI(TAG, "Press play first");
        } else {
            radio_next_channel();
        }
    }
}

//Onboard button method for 'Vol-'. Increases the volume 
void on_voldown(int cmd, void * data){
    if(cmd == 2){
        ESP_LOGI(TAG, "Touched voldown");
        radio_player_volume_down();
    }
}

//Onboard button method for 'Vol+'. Decreases the volume 
void on_volup(int cmd, void * data){
    if(cmd == 2){
        ESP_LOGI(TAG, "Touched volup");
        radio_player_volume_up();
    }
}

void app_main(){

    TickType_t xLastWakeTime;    
    xLastWakeTime = xTaskGetTickCount();
    vTaskDelayUntil(&xLastWakeTime, 1000 / portTICK_RATE_MS);    
    
    f_setup_touch_periph();
    //Initialize the onboard buttons linked to methods 
    f_setup_event_touch_periph_play(on_play);
    f_setup_event_touch_periph_set(on_set);
    f_setup_event_touch_periph_voldown(on_voldown);
    f_setup_event_touch_periph_volup(on_volup);


    for(;;){
        vTaskDelayUntil(&xLastWakeTime, 20000 / portTICK_RATE_MS);
    }

    f_destroy_touch_periph();
}