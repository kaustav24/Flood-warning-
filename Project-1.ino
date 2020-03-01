#include<SoftwareSerial.h>
SoftwareSerial gsm(2,3);
int t=5;
int e=6;
int dist;
long int ti;
int LED=12;
int B=7;

void setup() 
{  
           pinMode(t,OUTPUT);
           pinMode(e,INPUT);                  
           Serial.begin(9600);   
           pinMode(LED, OUTPUT);
           pinMode(B, OUTPUT); 
           delay(5000);
           Serial.begin(9600);
           gsm.begin(9600);
}

void loop() 
{
                digitalWrite(t,LOW);
                delay(10);
                digitalWrite(t,HIGH );
                delay(100);
                digitalWrite(t,LOW);
                ti=pulseIn(e,HIGH);  
                dist=(ti*0.034)/2;
                Serial.print("DISTANCE = ");
                Serial.println(dist);
 if(dist<=10)
 {
                digitalWrite(LED, HIGH); 
                digitalWrite(B, HIGH);
                delay(3000);
                digitalWrite(B,LOW);
                 Serial.println("gsm initialised");
                          gsm.println("AT+CMGF=1");
                          delay(1000);
                          gsm.println("AT+CMGS=\"+918948041190\"\r"); 
                          delay(1000);
                              gsm.println("FLOOD ALERT!!");
                          delay(100);
                          gsm.println((char)26);
                          delay(5000);

                             gsm.println("AT+CMGF=1");
                        delay(1000);
                          gsm.println("AT+CMGS=\"+918957679338\"\r"); 
                          delay(1000);
                              gsm.println("FLOOD ALERT!!");
                          delay(100);
                          gsm.println((char)26);
                          delay(5000);
                                 gsm.println("AT+CMGF=1");
                        delay(1000);
                          gsm.println("AT+CMGS=\"+919140864445\"\r"); 
                          delay(1000);
                              gsm.println("FLOOD ALERT!!");
                          delay(100);
                          gsm.println((char)26);
                          delay(5000);
                                     gsm.println("AT+CMGF=1");
                        delay(1000);
                          gsm.println("AT+CMGS=\"+918005235872\"\r"); 
                          delay(1000);
                              gsm.println("FLOOD ALERT!!");
                          delay(100);
                          gsm.println((char)26);
                          delay(1000);

             Serial.println("msg send");
             exit(0);
 }
else
{
                digitalWrite(LED1, LOW);
                digitalWrite(B, LOW);
}
}
