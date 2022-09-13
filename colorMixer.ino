/*
   RGB LED with each color controlled by a poteniometer
   @author Dustin Mullins
   last updated 9/3/2022
*/
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int redLED = 3;
int greenLED = 5;
int blueLED = 6;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  redValue = analogRead(A2) * 0.25;
  greenValue = analogRead(A1) * 0.25;
  blueValue = analogRead(A0) * 0.25;

  analogWrite(redLED, redValue);
  analogWrite(greenLED, greenValue);
  analogWrite(blueLED, blueValue);
  
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  
  delay(1);        // delay in between reads for stability
}
