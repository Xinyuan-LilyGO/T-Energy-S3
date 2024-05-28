/*
 * @Description: WIFI STA
 * @version: V1.0.0
 * @Author: LILYGO_L
 * @Date: 2023-08-16 15:19:01
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-02-01 14:13:49
 * @License: GPL 3.0
 */
#include "Arduino.h"
#include "WiFi.h"
#include <HTTPClient.h>
#include "pin_config.h"

#define WIFI_SSID "xinyuandianzi"
#define WIFI_PASSWORD "AA15994823428"
// #define WIFI_SSID "LilyGo-AABB"
// #define WIFI_PASSWORD "xinyuandianzi"

#define WIFI_CONNECT_WAIT_MAX 5000

#define NTP_SERVER1 "pool.ntp.org"
#define NTP_SERVER2 "time.nist.gov"
#define GMT_OFFSET_SEC 8 * 3600 // 时区设置函数，东八区（UTC/GMT+8:00）写成8*3600
#define DAY_LIGHT_OFFSET_SEC 0  // 夏令时填写3600，否则填0

static bool Wifi_Connection_Flag = false;

static size_t CycleTime = 0;

void Wifi_STA_Test(void)
{
    String text;
    int wifi_num = 0;

    Serial.printf("\nScanning wifi");
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);

    wifi_num = WiFi.scanNetworks();
    if (wifi_num == 0)
    {
        text = "\nWiFi scan complete !\nNo wifi discovered.\n";
    }
    else
    {
        text = "\nWiFi scan complete !\n";
        text += wifi_num;
        text += " wifi discovered.\n\n";

        for (int i = 0; i < wifi_num; i++)
        {
            text += (i + 1);
            text += ": ";
            text += WiFi.SSID(i);
            text += " (";
            text += WiFi.RSSI(i);
            text += ")";
            text += (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " \n" : "*\n";
            delay(10);
        }
    }

    Serial.println(text);

    delay(3000);
    text.clear();

    text = "Connecting to ";
    Serial.print("Connecting to ");
    text += WIFI_SSID;
    text += "\n";

    Serial.print(WIFI_SSID);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    uint32_t last_tick = millis();

    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        text += ".";
        delay(100);

        if (millis() - last_tick > WIFI_CONNECT_WAIT_MAX)
        {
            Wifi_Connection_Flag = false;
            break;
        }
        else
        {
            Wifi_Connection_Flag = true;
        }
    }

    if (Wifi_Connection_Flag == true)
    {
        text += "\nThe connection was successful ! \nTakes ";
        Serial.print("\nThe connection was successful ! \nTakes ");

        text += millis() - last_tick;
        Serial.print(millis() - last_tick);

        text += " ms\n";
        Serial.println(" ms\n");
    }
    else
    {
        Serial.printf("\nWifi test error!\n");
    }
}

void WIFI_STA_Test_Loop(void)
{
    if (Wifi_Connection_Flag == false)
    {
        Serial.printf("Not connected to the networ\n");

        Wifi_STA_Test();

        delay(2000);
    }
    else
    {
        // Obtain and set the time from the network time server
        // After successful acquisition, the chip will use the RTC clock to update the holding time
        configTime(GMT_OFFSET_SEC, DAY_LIGHT_OFFSET_SEC, NTP_SERVER1, NTP_SERVER2);

        delay(3000);

        struct tm timeinfo;
        if (!getLocalTime(&timeinfo, 10000))
        {
            Serial.println("Failed to obtain time");
            Wifi_Connection_Flag = false;
            return;
        }
        Serial.println("Get time success");
        Serial.println(&timeinfo, "%A,%B %d %Y %H:%M:%S"); // Format Output
    }
}

void setup()
{
    Serial.begin(115200);
    Serial.println("Ciallo");

    Wifi_STA_Test();
}

void loop()
{
    if (millis() > CycleTime)
    {
        WIFI_STA_Test_Loop();

        CycleTime = millis() + 3000; // 3000ms
    }
}
