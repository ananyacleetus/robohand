

int flexPin1 = A0;
int flexPin2 = A1;
int flexPin3 = A2;
int flexPin4 = A3;
int flexPin5 = A4;  

void setup() {
Serial.begin(9600);      // open the serial port at 9600 bps:    


pinMode(flexPin1, INPUT);
pinMode(flexPin2, INPUT);
pinMode(flexPin3, INPUT);
pinMode(flexPin4, INPUT);
pinMode(flexPin5, INPUT); 
}
void loop(){

int flex1 = analogRead(flexPin1);
int flex2 = analogRead(flexPin2);
int flex3 = analogRead(flexPin3);
int flex4 = analogRead(flexPin4);
int flex5 = analogRead(flexPin5); 

Serial.print(flex2);       // prints 
Serial.print("\n");              

  //Serial.print(flex2);  
  //Serial.print("\n");      

  //Serial.print(flex3); 
  //Serial.print("\n");   

  //Serial.print(flex4);
  //Serial.print("\n");

  //Serial.print(flex5);
  //Serial.print("\n"); 
  
delay(1000);
} 
