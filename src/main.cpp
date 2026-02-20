#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author RIYA RAGHAV
 * @date 2026-02-20
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>
#include<wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDR 0x3c
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// TODO 1:
// Define the DHT data pin (Use digital pin 2)

// TODO 2:
// Define the DHT sensor type (DHT11)

// TODO 3:
// Create a DHT object using the defined pin and sensor type

void setup() {
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Sensor Initialized");
    if (!display.begin(SSD1306_SWITCHCAPVCC , OLED_ADDR)) {
        Serial.println("OLED NOT FOUND");
        while (true);
    }
}

void loop() {

    // TODO 7:
    // Read humidity value from sensor

    // TODO 8:
    // Read temperature value from sensor

    // TODO 9:
    // Check if either reading failed using isnan()
    // If failed, print error message and return

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
