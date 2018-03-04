/*
 * created by Rui Santos, http://randomnerdtutorials.com
 * 
 * Complete Guide for Ultrasonic Sensor HC-SR04
 *
    Ultrasonic sensor Pins:
        VCC: +5VDC
        Trig : Trigger (INPUT) - Pin11
        Echo: Echo (OUTPUT) - Pin 12
        GND: GND
 */
 
int trigPin1 = 2;    //Trig - green Jumper
int echoPin1 = 3;    //Echo - yellow Jumper
int trigPin2 = 4;    //Trig - green Jumper
int echoPin2= 5;    //Echo - yellow Jumper
int trigPin3 = 6;    //Trig - green Jumper
int echoPin3 = 7;    //Echo - yellow Jumper
long duration, cm, inches;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
}
 
void loop()
{
 
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
 pinMode(echoPin1, INPUT);
 int duration1 = pulseIn(echoPin1, HIGH);

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  
 pinMode(echoPin2, INPUT);
 int duration2 = pulseIn(echoPin2, HIGH);

 
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);

   pinMode(echoPin3, INPUT);
 int duration3 = pulseIn(echoPin3, HIGH);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  
 


 
  // convert the time into a distance
 
 int cm1 = (duration1/2) / 29.1;
  //inches = (duration/2) / 74;

  int cm2 = (duration2/2) / 29.1;

 int cm3 = (duration3/2) / 29.1;
  
  //Serial.print(inches);
  //Serial.print("in, ");
  Serial.print(cm1);
  Serial.print("cm1");
  Serial.println();

  Serial.print(cm2);
  Serial.print("cm2");
  Serial.println();

  Serial.print(cm3);
  Serial.print("cm3");
  Serial.println();

  Serial.flush();
  
  delay(1500);
}
