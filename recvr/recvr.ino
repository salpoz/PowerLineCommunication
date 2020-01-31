#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3

String inComingText;


SoftwareSerial mySerial(rxPin, txPin);


void setup() {
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
  Serial.begin(9600);

}

void loop() {
  if(mySerial.read() == '#'){
    inComingText = mySerial.readStringUntil('$');
  }

  Serial.println(inComingText);
  delay(1000);
   
}
