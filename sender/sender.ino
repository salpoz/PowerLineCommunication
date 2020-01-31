#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3


SoftwareSerial mySerial(rxPin, txPin);

void setup() {
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
  Serial.begin(9600);

}

void loop() {

 String test = "Hello World!";

 stringToSend(test);

}

void stringToSend(String &txt){
  int len = txt.length();
  mySerial.write('#');
  mySerial.write(txt.c_str(),len);
  mySerial.write('$');
  mySerial.flush();
  delay(1000);
}
