#include <DS3231.h>
#include <Wire.h>

DS3231 rtc;

int year = 2026;
byte month = 7;
byte date = 28;
byte dow = 2;
byte hour = 13;
byte minute = 14;
byte second = 10;

void setup() {
  Wire.begin();
  Serial.begin(57600);

  rtc.setYear(year);
  rtc.setMonth(month);
  rtc.setDate(date);
  rtc.setDoW(dow);
  rtc.setHour(hour);
  rtc.setMinute(minute);
  rtc.setSecond(second);
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
