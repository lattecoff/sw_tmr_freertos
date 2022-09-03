
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LED_CONTROL_H
#define __LED_CONTROL_H

#ifdef __cplusplus
extern "C" {
#endif

void led_on(void);

void led_off(void);

void led_toggle(void);

void vCallbackSwTimerLed (TimerHandle_t xTimer);

#ifdef __cplusplus
}
#endif

#endif /* __LED_CONTROL_H */
