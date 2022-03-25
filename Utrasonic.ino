#define trigPin 12
#define echoPin 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin,HIGH);
   distance=((duration*0.034)/2);
   if(distance>=200 || distance<=0){
    Serial.println("Out of range");
   }
   else{
    Serial.print(distance);
    Serial.print("cm \n");
    
   }

   delay(500);
}
   
