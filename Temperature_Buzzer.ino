  int temPin=A5;
  int buzzer=13;
  // variable to read and store temp
  int value;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Read temp value on pin A5 by Analog Read() method
  value=analogRead(temPin);
  // float mvalue=(value/1024.0)*5000;
   // float cel=mvalue/10;
   float mvalue=316.3114 - 56.0655*(5/1024)*value;
    float cel=mvalue/10;
  Serial.print(cel);

  if(cel>22){
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(2000);
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(2000);
    
  }
  Serial.print("    TEMPERATURE=");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  
  
  

}
