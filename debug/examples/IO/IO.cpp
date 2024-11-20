/*
 * @Description: None
 * @version: V1.0.0
 * @Author: None
 * @Date: 2023-12-27 15:59:08
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-02-22 13:56:33
 * @License: GPL 3.0
 */
#include <Arduino.h>

static uint8_t i = 0;

void setup()
{
    pinMode(GPIO_NUM_37, OUTPUT);
    pinMode(GPIO_NUM_35, OUTPUT);
    pinMode(GPIO_NUM_36, OUTPUT);
    pinMode(GPIO_NUM_45, OUTPUT);
    pinMode(GPIO_NUM_48, OUTPUT);
    pinMode(GPIO_NUM_47, OUTPUT);
    pinMode(GPIO_NUM_21, OUTPUT);
    pinMode(GPIO_NUM_14, OUTPUT);
    pinMode(GPIO_NUM_13, OUTPUT);
    pinMode(GPIO_NUM_12, OUTPUT);
    pinMode(GPIO_NUM_11, OUTPUT);
    pinMode(GPIO_NUM_10, OUTPUT);
    pinMode(GPIO_NUM_9, OUTPUT);
    pinMode(GPIO_NUM_46, OUTPUT);
    pinMode(GPIO_NUM_3, OUTPUT);
    pinMode(GPIO_NUM_38, OUTPUT);
    pinMode(GPIO_NUM_39, OUTPUT);
    pinMode(GPIO_NUM_40, OUTPUT);
    pinMode(GPIO_NUM_41, OUTPUT);
    pinMode(GPIO_NUM_8, OUTPUT);
    pinMode(GPIO_NUM_0, OUTPUT);
    pinMode(GPIO_NUM_18, OUTPUT);
    pinMode(GPIO_NUM_17, OUTPUT);
    pinMode(GPIO_NUM_7, OUTPUT);
    pinMode(GPIO_NUM_6, OUTPUT);
    pinMode(GPIO_NUM_5, OUTPUT);
    pinMode(GPIO_NUM_4, OUTPUT);
    pinMode(GPIO_NUM_42, OUTPUT);
    pinMode(GPIO_NUM_2, OUTPUT);
    pinMode(GPIO_NUM_1, OUTPUT);
    pinMode(GPIO_NUM_43, OUTPUT);
    pinMode(GPIO_NUM_44, OUTPUT);

    digitalWrite(GPIO_NUM_37, i);
    digitalWrite(GPIO_NUM_35, i);
    digitalWrite(GPIO_NUM_36, i);
    digitalWrite(GPIO_NUM_45, i);
    digitalWrite(GPIO_NUM_48, i);
    digitalWrite(GPIO_NUM_47, i);
    digitalWrite(GPIO_NUM_21, i);
    digitalWrite(GPIO_NUM_14, i);
    digitalWrite(GPIO_NUM_13, i);
    digitalWrite(GPIO_NUM_12, i);
    digitalWrite(GPIO_NUM_11, i);
    digitalWrite(GPIO_NUM_10, i);
    digitalWrite(GPIO_NUM_9, i);
    digitalWrite(GPIO_NUM_46, i);
    digitalWrite(GPIO_NUM_3, i);
    digitalWrite(GPIO_NUM_38, i);
    digitalWrite(GPIO_NUM_39, i);
    digitalWrite(GPIO_NUM_40, i);
    digitalWrite(GPIO_NUM_41, i);
    digitalWrite(GPIO_NUM_8, i);
    digitalWrite(GPIO_NUM_0, i);
    digitalWrite(GPIO_NUM_18, i);
    digitalWrite(GPIO_NUM_17, i);
    digitalWrite(GPIO_NUM_7, i);
    digitalWrite(GPIO_NUM_6, i);
    digitalWrite(GPIO_NUM_5, i);
    digitalWrite(GPIO_NUM_4, i);
    digitalWrite(GPIO_NUM_42, i);
    digitalWrite(GPIO_NUM_2, i);
    digitalWrite(GPIO_NUM_1, i);
    digitalWrite(GPIO_NUM_43, i);
    digitalWrite(GPIO_NUM_44, i);
}

void loop()
{
    digitalWrite(GPIO_NUM_37, i);
    digitalWrite(GPIO_NUM_35, i);
    digitalWrite(GPIO_NUM_36, i);
    digitalWrite(GPIO_NUM_45, i);
    digitalWrite(GPIO_NUM_48, i);
    digitalWrite(GPIO_NUM_47, i);
    digitalWrite(GPIO_NUM_21, i);
    digitalWrite(GPIO_NUM_14, i);
    digitalWrite(GPIO_NUM_13, i);
    digitalWrite(GPIO_NUM_12, i);
    digitalWrite(GPIO_NUM_11, i);
    digitalWrite(GPIO_NUM_10, i);
    digitalWrite(GPIO_NUM_9, i);
    digitalWrite(GPIO_NUM_46, i);
    digitalWrite(GPIO_NUM_3, i);
    digitalWrite(GPIO_NUM_38, i);
    digitalWrite(GPIO_NUM_39, i);
    digitalWrite(GPIO_NUM_40, i);
    digitalWrite(GPIO_NUM_41, i);
    digitalWrite(GPIO_NUM_8, i);
    digitalWrite(GPIO_NUM_0, i);
    digitalWrite(GPIO_NUM_18, i);
    digitalWrite(GPIO_NUM_17, i);
    digitalWrite(GPIO_NUM_7, i);
    digitalWrite(GPIO_NUM_6, i);
    digitalWrite(GPIO_NUM_5, i);
    digitalWrite(GPIO_NUM_4, i);
    digitalWrite(GPIO_NUM_42, i);
    digitalWrite(GPIO_NUM_2, i);
    digitalWrite(GPIO_NUM_1, i);
    digitalWrite(GPIO_NUM_43, i);
    digitalWrite(GPIO_NUM_44, i);

    i = !i;
    delay(3000);
}