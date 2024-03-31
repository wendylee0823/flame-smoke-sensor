int MQ3=A1;
int beep=8;
int flame_DO=3;
int flame_AO=0;
int ledPin=13;
int sersor_v;
void setup()
{
  Serial.begin(9600);
  pinMode(beep,OUTPUT);
  pinMode(flame_DO,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(MQ3,INPUT);
}
void loop() {
  int fire_DO = digitalRead(flame_DO);   
  int fire_AO = analogRead (flame_AO);
  int sensor_v = analogRead(MQ3);
  
  Serial.print("fire_DO:");  
  Serial.print(fire_DO);               
  Serial.print("\t");
  Serial.print("fire_AO:");
  Serial.println(fire_AO);
  Serial.print("MQ3:");
  Serial.println(sensor_v);
  if( fire_DO==LOW && sensor_v>=600)                      
  {
    digitalWrite(beep,HIGH);
    digitalWrite(ledPin, HIGH);
  }
else if(fire_DO==LOW  || sensor_v>=600){
    digitalWrite(beep,HIGH);
    digitalWrite(ledPin, HIGH);

}
  else{
    digitalWrite(beep,LOW);
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
