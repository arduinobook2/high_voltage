
#define RELAY1  7       
                 
void setup()
{    
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);   
}

  void loop()
{
   // Turns ON Relays 1
   digitalWrite(RELAY1,0);           
   Serial.println("Light ON");
   delay(2000);                     

   // Turns Relay Off
   digitalWrite(RELAY1,1);          
   Serial.println("Light OFF");
   delay(2000); 
}
