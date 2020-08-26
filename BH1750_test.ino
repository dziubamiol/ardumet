#include <Wire.h>
#include <BH1750.h>

BH1750 light_meter;

void setup() {
  Serial.begin(9600);

  Wire.begin();
  light_meter.begin(BH1750::CONTINUOUS_HIGH_RES_MODE, 0x23, &Wire);
}

void loop() {
  const float light_level = light_meter.readLightLevel();

  Serial.println(light_level);
  delay(1000);

}
