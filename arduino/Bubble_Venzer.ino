// BUBBLE VENZER — joystick horizontal para mirar + botão para disparar
// Joystick: VRx -> A0 | VRy -> A1 (reservado) | SW -> D2
const int PIN_SW = 2;
const int PIN_VRX = A0;
const int PIN_VRY = A1;
void setup() { Serial.begin(9600); pinMode(PIN_SW, INPUT_PULLUP); }
void loop() {
  int x = analogRead(PIN_VRX);
  int y = analogRead(PIN_VRY);
  int b = digitalRead(PIN_SW);
  Serial.print("x:"); Serial.print(x);
  Serial.print(",y:"); Serial.print(y);
  Serial.print(",b:"); Serial.println(b);
  delay(20);
}
