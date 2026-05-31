#define RED 23
#define YELLOW 22
#define GREEN 21
#define BUTTON 19

void setup() {
  Serial.begin(115200);

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {

  // Green Signal
  Serial.println("GREEN SIGNAL");
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  for(int i=0; i<50; i++) {
    if(digitalRead(BUTTON)==LOW) {
      pedestrianCross();
      return;
    }
    delay(100);
  }

  // Yellow Signal
  Serial.println("YELLOW SIGNAL");
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);

  // Red Signal
  Serial.println("RED SIGNAL");
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(5000);

  digitalWrite(RED, LOW);
}

void pedestrianCross() {

  Serial.println("PEDESTRIAN REQUEST");

  digitalWrite(GREEN, LOW);

  digitalWrite(YELLOW, HIGH);
  delay(2000);

  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);

  Serial.println("PEDESTRIANS CAN CROSS");
  delay(5000);

  digitalWrite(RED, LOW);
}
