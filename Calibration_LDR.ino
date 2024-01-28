/*
############################################################################################################
© Harshil Malhotra

Project name:- Smart Street Lighting System

Author:- Harshil Malhotra 
Last Updated:- 25-November-2023
Github Link:- https://github.com/Harshilmalhotra/Smart-Street-Lighting-System

Note:-1) Kindly go through the instructions in Github Repository.
      2) This is calibration file only. The project works using main file.

############################################################################################################
*/ 
const int ldr = A0;
int lsensor;


void setup() 
{
  Serial.begin(9600);
  //pinMode(ledpin, OUTPUT);
  pinMode(ldr,INPUT);
  
}

void loop() 
{
  int lsensor = analogRead(ldr); // reads   analog data from light sensor
  Serial.print(lsensor);
  Serial.println();
  delay(500);
}
