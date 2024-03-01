#include "ESP8266WiFi.h"

IPAddress connectToWiFi(String ssid, String password)
{
	WiFi.mode(WIFI_STA);
	WiFi.begin(ssid, password);
	Serial.print("Connecting.");
	while (WiFi.status() != WL_CONNECTED)
	{
		delay(500);
		Serial.print(".");
	}
	Serial.println("done.");
	return WiFi.localIP();
}