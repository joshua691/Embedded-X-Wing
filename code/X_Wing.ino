#include <IRremote.h>

const int IRRecievePin = 7;
IRrecv irrecv(IRRecievePin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN,OUTPUT);

  Serial.println("Starting IR-receiver...");

  irrecv.enableIRIn();

  Serial.println("IR-receiver active");

  digitalWrite(LED_BUILTIN,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}
