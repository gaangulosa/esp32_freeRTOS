#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"

/**
 * Project: Blink LED
 * 
 * Author: Gilbert A. Angulo S.
 * Date: Octuber 01, 2022
 * 
 */

// Define output pin (Built-in LED)
#define BLINK_LED 2

// Main function
void app_main(void){

	// Getting task name
	char *ourTaskName = pcTaskGetName(NULL);
	ESP_LOGI(ourTaskName, "Hello, starting up!\n"); // Showing message
	
	// Setting the output pin
	gpio_reset_pin(BLINK_LED);
	gpio_set_direction(BLINK_LED, GPIO_MODE_OUTPUT);

	// Blink LED
	while(1){
		gpio_set_level(BLINK_LED, 1);
		vTaskDelay(pdMS_TO_TICKS(100)); // Set delay for 100ms
		gpio_set_level(BLINK_LED, 0);
		vTaskDelay(pdMS_TO_TICKS(100));
	}
}
