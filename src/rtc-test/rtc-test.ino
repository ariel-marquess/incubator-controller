#include <DS3231.h>
#include <Wire.h>

DS3231 rtc;
int hour, minute, second;

void setup() {
  Wire.begin();
  Serial.begin(57600);
}

void loop() {
  bool h12 = false;
  bool pm = false;

  hour = rtc.getHour(h12, pm);
  minute = rtc.getMinute();
  second = rtc.getSecond();

  Serial.print(hour);
  Serial.print(" : ");
  Serial.print(minute);
  Serial.print(" : ");
  Serial.println(second);

  delay(1000);
}
