int t=2;
int e=3;
int dist;
long int ti;
int LED1=12;
int B=5;

void setup() 
{  
           pinMode(t,OUTPUT);
           pinMode(e,INPUT);                  
           Serial.begin(9600);   
           pinMode(LED1, OUTPUT);
           pinMode(B, OUTPUT); 
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
 if(dist<=5)
 {
                digitalWrite(LED1, HIGH); 
                digitalWrite(B, HIGH);
 }
else
{
                digitalWrite(LED1, LOW);
                digitalWrite(B, LOW);
}
}
