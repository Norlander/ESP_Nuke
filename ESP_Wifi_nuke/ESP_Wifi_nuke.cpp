#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <EEPROM.h>

/*
 * 1. Boot device
 * 2. For 2min act as WIFI AP, no broadcasting!
 * 3. Wait for SSID + PW. Store WiFi params using IAP flash programming
 * 4. Re-init WiFi in Client config and use WiFi params to connect to WiFi
 * 5.
 */


void setup() {

}

void loop() {

}
