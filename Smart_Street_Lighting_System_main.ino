/*
############################################################################################################
© Harshil Malhotra

Project name:- Smart Street Light System
Author:- Harshil Malhotra 
Last Updated:- 25-November-2023
Github Link:- https://github.com/Harshilmalhotra/Smart-Street-Lighting-System

Note:- Kindly go through the instructions in Github Repository

############################################################################################################
*/


const int ldr = A0;
int lsensor;
const int relay=12;
const int led=11;
int ir = 9;


void setup() 
{
  Serial.begin(9600);
  //pinMode(ledpin, OUTPUT);
  pinMode(ldr,INPUT);
  pinMode(ir,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() 
{
  int lsensor = analogRead(ldr); // reads   analog data from light sensor
  int irsensor= digitalRead(ir); // Set the Arduino pin as Input
  
  Serial.print(lsensor);
  Serial.println();
  
  if(lsensor<70)   //Enter the approximate value when light turns on . You can get it from serial monitor of Calibration_LDR.ino code.
  {
    

    if (irsensor == 0) // Check if the pin high or not
  {
    // if the pin is high turn off the onboard Led
    digitalWrite(LED_BUILTIN, HIGH);
    analogWrite(led, 200);
    digitalWrite(relay, LOW);
    delay(2000);
  }
  else  {
    //else turn on the onboard LED
   digitalWrite(LED_BUILTIN, LOW);
   analogWrite(led,100);
  }



  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(led, LOW);
    digitalWrite(relay, HIGH);
  }
  //delay(2000);
}
