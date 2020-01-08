int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9 = 5;
int LED10 = 4;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
   pinMode(LED7, OUTPUT);
   pinMode(LED8, OUTPUT);
   pinMode(LED9, OUTPUT);
   pinMode(LED10, OUTPUT);
}


void loop() {
  digitalWrite(LED10, LOW);    // turn off LED10
  digitalWrite(LED1, HIGH);    // turn on LED1 
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED2, HIGH);    // turn on LED2
  digitalWrite(LED1, LOW);     //turn off LED1
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue       
  digitalWrite(LED3, HIGH);    //turn on LED3
  digitalWrite(LED2, LOW);     //turn off LED2
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED4, HIGH);    //turn on LED4 
  digitalWrite(LED3, LOW);     //turn off LED3
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED5, HIGH);    //turn on LED5
  digitalWrite(LED4, LOW);     //turn off LED4
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED6, HIGH);    //turn on LED6
  digitalWrite(LED5, LOW);     //turn off LED5
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED7, HIGH);    //turn on LED7
  digitalWrite(LED6, LOW);     //turn off LED6
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED8, HIGH);    //turn on LED8
  digitalWrite(LED7, LOW);     //turn off LED7
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED9, HIGH);    //turn on LED9
  digitalWrite(LED8, LOW);     //turn off LED8
  sensorValue = analogRead(sensorPin);
  delay(sensorValue);                  // wait for time=sensorvalue
  digitalWrite(LED10, HIGH);   //turn on LED10
  digitalWrite(LED9, LOW);     //turn off LED9
  sensorValue = analogRead(sensorPin); 
  delay(sensorValue);                  // wait for time=sensorvalue
  
  
}
