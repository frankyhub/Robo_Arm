/*************************************************************************************************
                                      PROGRAMMINFO
**************************************************************************************************
Funktion: Robo_Arm

**************************************************************************************************
Version: 20.10.2023
**************************************************************************************************
Board: NANO oBL
**************************************************************************************************
Libraries:
    VarSpeedServo.h
    https://github.com/netlabtoolkit/varspeedservo
 
**************************************************************************************************
C++ Arduino IDE V1.8.19
**************************************************************************************************
Einstellungen:
https://dl.espressif.com/dl/package_esp32_index.json
http://dan.drown.org/stm32duino/package_STM32duino_index.json
http://arduino.esp8266.com/stable/package_esp8266com_index.json
**************************************************************************************************/

#include <VarSpeedServo.h> 


VarSpeedServo Gr_servo; //Greifarm
VarSpeedServo Dr_servo; //Drehteller
VarSpeedServo Ki_servo; //Kippen
VarSpeedServo He_servo; //Heben

int Poti_Drehen = A1;     //Drehteller
int Joystick_Kippen = A2; //Kipp
int Joystick_Heben = A3;  //Heben
int Poti_Greifen = A4;    //Greifarm

int Greifarm;
int Drehteller;
int Kippen;
int Heben;

//Speed festlegen:
int SPEED = 30; //30 bei Test


void setup() {
    Serial.begin (115200);
  
    Dr_servo.attach(6);   //PWM#6
    Ki_servo.attach(9);  //PWM#9
    He_servo.attach(10);  //PWM#10
    Gr_servo.attach(11);   //PWM#11
} 
 
void loop() {
  
int Poti_Drehen = analogRead(A1);
int Joystick_Kippen = analogRead(A2);
int Joystick_Heben = analogRead(A3);
int Poti_Greifen = analogRead(A4);

  //Drehteller
  Drehteller = map(Poti_Drehen, 0, 1023, 0, 175);
  Dr_servo.write(Drehteller, SPEED);
  Serial.print("A1 Drehteller: ");
  Serial.println(Drehteller);

  //Kippen
  Kippen = map(Joystick_Kippen, 0, 1023, 0, 130);
  Ki_servo.write(Kippen, SPEED);
  Serial.print("A2 Kippen: ");
  Serial.println(Kippen);
  

  //Heben
  Heben = map(Joystick_Heben, 0, 1023, 50, 0);
  He_servo.write(Heben, SPEED);
  Serial.print("A3 Heben: ");
  Serial.println(Heben);  
  
  
  //Greifarm
  Greifarm = map(Poti_Greifen, 0, 1023, 0, 90);
  Gr_servo.write(Greifarm, SPEED);
  Serial.print("A4 Greifarm: ");
  Serial.println(Greifarm);
    delay(100);
}
