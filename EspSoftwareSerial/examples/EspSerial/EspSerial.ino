
#include <SoftwareSerial.h>

SoftwareSerial EspSerial(14, 12, false, 256);

void setup() {
  Serial.begin(115200);
  EspSerial.begin(115200);

  Serial.println("\nEsp_Software serial test iniciado");

  for (char ch = ' '; ch <= 'z'; ch++) {
    EspSerial.write(ch);
  }
  EspSerial.println("");

}

void loop() {
  while (EspSerial.available() > 0) {
    Serial.write(EspSerial.read());
  }
  while (Serial.available() > 0) {
    EspSerial.write(Serial.read());
  }

}
