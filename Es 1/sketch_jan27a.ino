void setup() {
  // put your setup code here, to run once:
 pinMode (13, OUTPUT);  //Settato piedino 13


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (13, HIGH); //pin 13 impostato su 1 digitale
delay (2000);
digitalWrite (13, LOW); 
delay (5000);
}
