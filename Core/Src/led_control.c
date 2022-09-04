/* Includes ------------------------------------------------------------------*/

#include "stm32l4xx_hal.h"

#include "main.h"

#include "FreeRTOS.h"
#include "timers.h"

/* Private define ------------------------------------------------------------*/


/* Extern variables ---------------------------------------------------------*/

/* Private variables --------------------------------------------------------*/


/* Public Functions ---------------------------------------------------------*/

void led_on(void)
{
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
}


void led_off(void)
{
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
}

void led_toggle(void)
{
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}

void vCallbackSwTimerLed (TimerHandle_t xTimer)
{
	led_toggle();
}
