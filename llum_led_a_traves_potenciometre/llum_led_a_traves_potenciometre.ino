 /*************************************************************************
 **                                                                      **
 **    Intensitat lluminosa d'un led controlada per potenciòmetre        **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
const int pinSensor = 0;
const int pinLed = 9;
int llumLed = 0;  
int valorPot = 0;
 //******  Setup  *********************************************************
 void setup () {
  pinMode(pinSensor, INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);          
	   
  
 }


 //******  Loop  **********************************************************
 void loop () {
   valorPot = analogRead(pinSensor);
   llumLed = map(valorPot, 0, 1023, 0, 255);
   analogWrite(pinLed, llumLed);
   Serial.print("Valor del Potenciometre = ");
   Serial.print(valorPot);
   Serial.print("    llum del Led = ");
   Serial.println(llumLed);
    delay(100);
 }
