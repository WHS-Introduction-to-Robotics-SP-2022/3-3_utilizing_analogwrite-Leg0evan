/*

*/
int pin1=11;
int pin2=10;
int pin3=9;

void setup() {
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
}

void loop() {
    analogWrite(pin1, 255);
    delay(1000);
    analogWrite(pin1, 102);
    delay(1000);
    analogWrite(pin1, 0);
    delay(1000);
    analogWrite(pin2, 255);
    delay(1000);
    analogWrite(pin2, 102);
    delay(1000);
    analogWrite(pin2, 0);
    delay(1000);
    analogWrite(pin3, 255);
    delay(1000);
    analogWrite(pin3, 102);
    delay(1000);
    analogWrite(pin3, 0);
    delay(1000)
}
