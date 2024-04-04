void setup(){ 
 pinMode(2,OUTPUT); //Set pins D2 to D6 as outputs 
 pinMode(3,OUTPUT); 
 pinMode(4,OUTPUT); 
 pinMode(5,OUTPUT); 
 pinMode(6,OUTPUT); 
} 
void loop(){ 
digitalWrite(4,HIGH); //Turn ON middle LED 
delay(1000); 
digitalWrite(3,HIGH); //Turn ON next 2 LEDs 
digitalWrite(5,HIGH); 
delay(1000); 
digitalWrite(2,HIGH); //Turn ON next 2 LEDs 
digitalWrite(6,HIGH); 
delay(1000); 
digitalWrite(2,LOW); //Turn OFF all LEDs 
digitalWrite(3,LOW); 
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(6,LOW); 
delay(1000); 
}