#include "Arduino.h"
#include "ESP8266WiFi.h"
#include "WiFiUtils/WiFiUtils.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif


void setup()
{
	Serial.begin(115200);
	IPAddress ipAddress = connectToWiFi(String(WIFI_SSID), String(WIFI_PASSWORD));
	Serial.println("WiFi connection successful.");
	Serial.println("The IP Address of ESP8266 Module is: ");
	Serial.print(ipAddress);
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(2000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(2000);
}