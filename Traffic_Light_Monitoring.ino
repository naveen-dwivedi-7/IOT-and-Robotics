  int r=2;
  int g=4;
  int y=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r,OUTPUT); digitalWrite(r, LOW);
  pinMode(y,OUTPUT); digitalWrite(y, LOW);
  pinMode(g,OUTPUT); digitalWrite(g, LOW);

}

void traffic() {
  
  digitalWrite(g, HIGH);
  Serial.println("Green LED :ON, GO");
  delay(5000);
  digitalWrite(g, LOW);
  digitalWrite(y, HIGH);
  Serial.println("Green LED :OFF, WAIT");
  delay(5000);
  digitalWrite(y, LOW);
   digitalWrite(r, HIGH);
  Serial.println("Yellow LED :OFF, STOP");
  delay(5000);
  digitalWrite(r, LOW);
  Serial.println("ALL OFF");
}
void loop(){
// put your main code here, to run repeatedly:

  traffic();
  delay(10000);
  
}
