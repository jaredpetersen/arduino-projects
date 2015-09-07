int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // Read the input from pin 2 to get the state of the switch
  switchState = digitalRead(2);
  if (switchState == LOW) {
    // Switch is not pressed, display ready state
    digitalWrite(3, HIGH); // "System Ready" LED on
    digitalWrite(4, LOW);  // "Engage Hyperdrive" LEDs off
    digitalWrite(5, LOW);
  }
  else {
    // Switch is pressed, alternate the red lights
    digitalWrite(3, LOW);  // "System Ready" LED off
    digitalWrite(4, LOW);  // "Engage Hyperdrive" 1st LED off
    digitalWrite(5, HIGH); // "Engage Hyperdrive" 2nd LED off
    delay(250);            // Wait 1/4 of a second...
    digitalWrite(4, HIGH); // "Engage Hyperdrive" 1st LED on
    digitalWrite(5, LOW);  // "Engage Hyperdrive" 2nd LED off
    delay(250);            // Wait 1/4 of a second...
  }
}
