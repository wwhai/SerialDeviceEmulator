#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
}
static const char *json = "{\"key1\": \"value1\",\"key2\": \"value2\",\"key3\": \"value3\",\"key4\": \"value4\"}";
void loop()
{
  delay(5000); // 5S 一次
  Serial.println(json);
}