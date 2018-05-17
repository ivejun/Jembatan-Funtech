const int inputPinA = 8;

const int motorAnaik = 2;
const int motorAturun = 3;
const int motorBnaik = 4;
const int motorBturun = 5;


int pirStateA = LOW;
int pirStateB = LOW;

int deteksiA = 0;
int deteksiB = 0;


void setup() {
  pinMode(motorAnaik, OUTPUT);
  pinMode(motorAturun, OUTPUT);
  pinMode(motorBnaik, OUTPUT);
  pinMode(motorBturun, OUTPUT);

  pinMode(inputPinA, INPUT);

  digitalWrite(motorAnaik, HIGH);
  digitalWrite(motorAturun, HIGH);
  digitalWrite(motorBnaik, HIGH);
  digitalWrite(motorBturun, HIGH);


  Serial.begin(9600);
  delay(5000);
}

void loop() {
  deteksiA = digitalRead(inputPinA);
  if (deteksiA == HIGH) {
    digitalWrite(motorBturun, LOW);
    delay(500);
    digitalWrite(motorBturun, HIGH);
    delay(500);
    digitalWrite(motorBnaik, LOW);
    delay(1500);
    digitalWrite(motorBnaik, HIGH);
    digitalWrite(motorAturun, LOW);
    delay(500);
    digitalWrite(motorAturun, HIGH);
    delay(500);
    digitalWrite(motorAnaik, LOW);
    delay(1500);
    digitalWrite(motorAnaik, HIGH);
    delay(500);

    digitalWrite(motorBturun, LOW);
    delay(500);
    digitalWrite(motorBturun, HIGH);
    delay(500);
    digitalWrite(motorBnaik, LOW);
    delay(1500);
    digitalWrite(motorBnaik, HIGH);
    digitalWrite(motorAturun, LOW);
    delay(500);
    digitalWrite(motorAturun, HIGH);
    delay(500);
    digitalWrite(motorAnaik, LOW);
    delay(1500);
    digitalWrite(motorAnaik, HIGH);
    delay(500);
  }
}


