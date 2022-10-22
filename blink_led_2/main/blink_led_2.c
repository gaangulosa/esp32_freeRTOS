#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"

/**
*	FreeRTOS Task Scheduling
*	Project 2: Blink LED using task sheduling
*
*	Functions used:
*	- vTaskDelay()
* 	- xTaskCreatePinnedToCore()
*  	- vTaskSuspend()
*  	- vTaskResume()
*  	- vTaskDelete()
*  	- pdMS_TO_TICKS()
*  	- xPortGetCoreID()
*  	- uxTaskPriorityGet()
*
* 	Date: October 16, 2022
* 	Author: Gilbert Angulo
* 	License: Free
*
*/

// Use only core 1 for demo purposes
#if CONFIG_FREERTOS_UNICORE
	static const BaseType_t app_cpu = 0;
#else
	static const BaseType_t app_cpu = 1;
#endif

// Pins
#define BLINK_LED 2

// Some string to print
const char msg[] = "Barkadeer brig Arr booty rum.";

void app_main(void) {

	
}
