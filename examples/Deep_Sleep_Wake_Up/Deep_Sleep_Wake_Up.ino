/*
 * @Description: ESP Sleep
 * @version: V1.0.0
 * @Author: LILYGO_L
 * @Date: 2023-08-18 15:26:31
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-03-08 15:39:48
 * @License: GPL 3.0
 */
#include "Arduino.h"
#include "pin_config.h"

#define SLEEP_WAKE_UP_INT GPIO_NUM_0

static size_t CycleTime = 0;

void setup()
{
    Serial.begin(115200);
    Serial.println("Ciallo");

    pinMode(SLEEP_WAKE_UP_INT, INPUT_PULLUP);

    Serial.println("Enter deep sleep in 5 seconds");

    CycleTime = millis() + 5000;
}

void loop()
{
    if (millis() > CycleTime)
    {
        delay(300);
        
        Serial.println("Enter deep sleep");
        gpio_hold_en(GPIO_NUM_0);
        esp_sleep_enable_ext0_wakeup(SLEEP_WAKE_UP_INT, LOW);
        esp_deep_sleep_start();
    }
}
