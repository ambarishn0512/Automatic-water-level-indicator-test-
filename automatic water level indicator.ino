// Pin definitions for sensors
const int sensorLow = 2;
const int sensorMid = 3;
const int sensorHigh = 4;
const int sensorFull = 5;

// Pin definitions for LEDs
const int ledLow = 6;
const int ledMid = 7;
const int ledHigh = 8;
const int ledFull = 9;

// Buzzer pin
const int buzzer = 10;

void setup() {
  // Initialize sensor pins as input
  pinMode(sensorLow, INPUT);
  pinMode(sensorMid, INPUT);
  pinMode(sensorHigh, INPUT);
  pinMode(sensorFull, INPUT);

  // Initialize LED pins as output
  pinMode(ledLow, OUTPUT);
  pinMode(ledMid, OUTPUT);
  pinMode(ledHigh, OUTPUT);
  pinMode(ledFull, OUTPUT);

  // Buzzer as output
  pinMode(buzzer, OUTPUT);

  // Begin serial communication (optional for debugging)
  Serial.begin(9600);
}

void loop() {
  // Read sensor values
  int lowLevel = digitalRead(sensorLow);
  int midLevel = digitalRead(sensorMid);
  int highLevel = digitalRead(sensorHigh);
  int fullLevel = digitalRead(sensorFull);

  // Show status on LEDs
  digitalWrite(ledLow, lowLevel);
  digitalWrite(ledMid, midLevel);
  digitalWrite(ledHigh, highLevel);
  digitalWrite(ledFull, fullLevel);

  // Activate buzzer if tank is full
  if (fullLevel == HIGH) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  // Debugging output to Serial Monitor
  Serial.print("LOW: ");
  Serial.print(lowLevel);
  Serial.print(" MID: ");
  Serial.print(midLevel);
  Serial.print(" HIGH: ");
  Serial.print(highLevel);
  Serial.print(" FULL: ");
  Serial.println(fullLevel);

  delay(500);  // Delay for stability
}
