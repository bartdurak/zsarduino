#include <IRremote.h>
#define irPin 11
IRrecv irrecv(irPin);
decode_results results;

#define diodaPin 5
int diodaStatus = LOW;

void setup() {
   Serial.begin(9600);
    irrecv.enableIRIn();

    pinMode(diodaPin, OUTPUT);
}

void loop() {
   if (irrecv.decode(&results)) {

      switch (results.value) {
         case 0x10C8D12E:
            Serial.println("srodek");
            diodaStatus = ~diodaStatus;
            digitalWrite(diodaPin, diodaStatus);
            delay(250);
            break;
         }

   irrecv.resume();
   }
}
