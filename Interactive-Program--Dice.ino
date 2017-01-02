int lightresist0 = 0,
    lightresist1 = 0,
    lightresist2 = 0,
    lightresist3 = 0,
    lightresist4 = 0,
    lightresist5 = 0,
    initallightresist0 = 0,
    initallightresist1 = 0,
    initallightresist2 = 0,
    initallightresist3 = 0,
    initallightresist4 = 0,
    initallightresist5 = 0,
    melody[] = {261,294,330,350,392,440},
    switchVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);//////SWITCH
  pinMode(3,OUTPUT);//////SPEAKER
  pinMode(5,OUTPUT);//////LED
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  while(millis() < 3000) {

    initallightresist0 = analogRead(A0);
    initallightresist1 = analogRead(A1);
    initallightresist2 = analogRead(A2);
    initallightresist3 = analogRead(A3);
    initallightresist4 = analogRead(A4);
    initallightresist5 = analogRead(A5);
    
  };

 
}



void loop() {
  // put your main code here, to run repeatedly:
    
  lightresist0 = analogRead(A0);
  lightresist1 = analogRead(A1);
  lightresist2 = analogRead(A2);
  lightresist3 = analogRead(A3);
  lightresist4 = analogRead(A4);
  lightresist5 = analogRead(A5);
  Serial.print("lightresist0=");
  Serial.println(lightresist0);
  Serial.print("lightresist1=");
  Serial.println(lightresist1);
  Serial.print("lightresist2=");
  Serial.println(lightresist2);
  Serial.print("lightresist3=");
  Serial.println(lightresist3);
  Serial.print("lightresist4=");
  Serial.println(lightresist4);
  Serial.print("lightresist5=");
  Serial.println(lightresist5);

  Serial.print("initallightresist0=");
  Serial.println(initallightresist0);
  Serial.print("initallightresist1=");
  Serial.println(initallightresist1);
  Serial.print("initallightresist2=");
  Serial.println(initallightresist2);
  Serial.print("initallightresist3=");
  Serial.println(initallightresist3);
  Serial.print("initallightresist4=");
  Serial.println(initallightresist4);
  Serial.print("initallightresist5=");
  Serial.println(initallightresist5);
///////////////////////////////////////////lightresist
  if(lightresist0 > initallightresist0)
  digitalWrite(12,HIGH);
  else 
  digitalWrite(12,LOW);
  delay(500);
  
  if(lightresist1 > initallightresist1)
  digitalWrite(11,HIGH);
  else
  digitalWrite(11,LOW);
  delay(500);
  
  if(lightresist2 > initallightresist2)
  digitalWrite(10,HIGH);
  else
  digitalWrite(10,LOW);
  delay(500);

  if(lightresist3 > initallightresist3)
  digitalWrite(9,HIGH);
  else
  digitalWrite(9,LOW);
  delay(500);

  if(lightresist4 > initallightresist4)
  digitalWrite(6,HIGH);
  else
  digitalWrite(6,LOW);
  delay(500);
  
  if(lightresist5 > initallightresist5)
  digitalWrite(5,HIGH);
  else
  digitalWrite(5,LOW);
  delay(500);
////////////////////////////////////////////////sound
  if(lightresist0 > initallightresist0 && lightresist1 > initallightresist1
  && lightresist2 > initallightresist2 && lightresist3 > initallightresist3
  && lightresist4 > initallightresist4 && lightresist5 > initallightresist5){

   for(int i = 0;i < 4;i++)
    {
      
    tone(3,melody[i]);
    delay(500);
    noTone(3);
    
    
    } ;
     
  };
  
  
///////////////////////////////////////////////switch

   switchVal = digitalRead(2);
   
  if(switchVal == HIGH)
   digitalWrite(13,HIGH);
   else
   digitalWrite(13,LOW);
   
   
   Serial.print("Switch:");
   Serial.println(switchVal);
   
///////////////////////////////////////////////
  
  

  
    
  
  

  
  
  
  

}
