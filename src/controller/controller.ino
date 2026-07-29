#include <DS3231.h>
#include <Wire.h>

#define pinRele 2

DS3231 rtc;
int hour, minute;

void setup() {
  pinMode(pinRele, OUTPUT);
  digitalWrite(pinRele, LOW);

  Wire.begin();
}

void loop() {
  bool h12 = false;
  bool pm = false;

  hour = rtc.getHour(h12, pm);
  minute = rtc.getMinute();

  if ((hour == 6 || hour == 14 || hour == 22) && (minute >= 0 && minute <= 10)){
    digitalWrite(pinRele, HIGH);
  } else {
    digitalWrite(pinRele, LOW);
  }
}
