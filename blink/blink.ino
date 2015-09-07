int ledPins[] = {13, 1};

// Main, run once
void setup() 
{
  for (int curPinIdx = 0; curPinIdx <= 3; curPinIdx++)
  {
    pinMode(ledPins[curPinIdx], OUTPUT);
  }
}

// Loop forever
void loop() 
{
  for(int curPinIdx = 0; curPinIdx < 3; curPinIdx++)
  {
    digitalWrite(ledPins[curPinIdx], HIGH);
    delay(500);
    digitalWrite(ledPins[curPinIdx], LOW);
    delay(500);
  }
}
