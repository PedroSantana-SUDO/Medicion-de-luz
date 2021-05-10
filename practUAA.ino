int analog;
int iluminacion;

void setup() 
{
   Serial.begin(9600);
}

void loop()
{
   analog = analogRead(A0);         
   iluminacion = ((long)analog*10000)/((long)150*(1024-analog));    //INVESTIGAR POR QUE SE REALIZA ESTA OPERACIÓN
   Serial.println(iluminacion);   
   delay(1000);
}
