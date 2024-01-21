#define pinSensor A0
#define ledPin 2

int nilaiSensor;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinSensor, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  nilaiSensor = analogRead(pinSensor);
  if(nilaiSensor >= 500)
  {
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
  Serial.println(nilaiSensor);
}
