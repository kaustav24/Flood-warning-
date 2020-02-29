int t=2;
int e=3;
int dist;
long int ti;
void setup() 
{
 pinMode(t,OUTPUT);
 pinMode(e,INPUT);
 Serial.begin(9600);
                                    // put your setup code here, to run once:

}

void loop() 
{ digitalWrite(t,LOW);
delay(10);
digitalWrite(t,HIGH );
  delay(100);
digitalWrite(t,LOW);
ti=pulseIn(e,HIGH);  
  dist=(ti*0.034)/2;
  Serial.print("DISTANCE = ");
  Serial.println(dist);
                                      // put your main code here, to run repeatedly:

}
