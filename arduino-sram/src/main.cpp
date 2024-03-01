#include "Arduino.h"
#include "ESP8266WiFi.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

const char* ssid = "ssid";
const char* password = "password";

void setup()
{
	Serial.begin(115200);
	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED)
	{
		delay(500);
		Serial.print("*");
	}

	Serial.println("");
	Serial.println("WiFi connection successful.");
	Serial.println("The IP Address of ESP8266 Module is: ");
	Serial.print(WiFi.localIP());
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(2000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(2000);
}