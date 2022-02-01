const int ENABLE = 5;
const int DIR_A = 3;
const int DIR_B = 4;

void setup() 
{
  pinMode(ENABLE,OUTPUT);
  pinMode(DIR_A,OUTPUT);
  pinMode(DIR_B,OUTPUT);
}

void loop() 
{
    analogWrite(ENABLE,255); 
    digitalWrite(DIR_A,HIGH); 
    digitalWrite(DIR_B,LOW);

    for(int i=250; i > 50; i -= 25)
    {
      delay(1000);
      analogWrite(ENABLE,i);       
    }
}
   
