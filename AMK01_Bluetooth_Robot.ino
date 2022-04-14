//Robo India tutorial on Controlling Arduino with Android
//https://www.roboindia.com/tutorials/

#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8); // RX, TX

String BT_input;                          // to store input character received via BT.
int LED = 13;                              // device to control

// Define Motor Pin
const int Motor_L_F = 2;
const int Motor_L_B = 3;
const int Motor_R_F = 4;
const int Motor_R_B = 5;

void setup()  
{  
  Serial.begin(9600);                      //default baud rate of module
  mySerial.begin(9600);
  pinMode(LED, OUTPUT);
  while (!Serial) 
  {
     // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() 

 { 
  if (mySerial.available())
    {   
        BT_input = mySerial.read();   // read input string from bluetooth 
        Serial.println(BT_input);
        if (BT_input=="1")                
        {
          Forward();
        }
        if (BT_input=="2")                
        {
          Right();
        }
        if (BT_input=="3")                
        {
          Left();
        }
        if (BT_input=="4")                
        {
          Back();
        }
        
        if (BT_input=="5")                
        {
          Stop();
        }
        

    }
 
}


void Forward(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }

void Right(){
  //Stop Right Motor
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);

  //Run Left Motor in Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  
  }

void Left(){
  //Stop Left Motor
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }

void Back(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);
  
  }


void Stop(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);
  
  }
