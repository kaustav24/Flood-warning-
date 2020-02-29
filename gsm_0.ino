#include<SoftwareSerial.h>
SoftwareSerial gsm(2,3);
void setup()
{
  delay(2000);
  Serial.begin(9600);
  gsm.begin(9600);
  gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("AT+CMGS=\"+918957679338\"\r");
  delay(1000);
  gsm.println("flood alert");
  delay(500);
  gsm.println((char)26);
  delay(2000);
    
    
  gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("AT+CMGS=\"+918948041190\"\r");
  delay(1000);
  gsm.println("flood alert");
  delay(500);
  gsm.println((char)26);
  delay(2000);
  
  Serial.println("send");
}
void loop()
{
  
}
