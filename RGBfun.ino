#define GREEN 3
#define BLUE 5
#define RED 6
#define delayTime 20

int gpin = 10;
  int bpin = 11;
  int rpin = 9;
void setup() {
  
  

  pinMode(gpin, OUTPUT);
  pinMode(bpin, OUTPUT);
  pinMode(rpin, OUTPUT);
  
}

void loop(){
digitalWrite(gpin, 255);
  digitalWrite(bpin, 127);
  digitalWrite(rpin, 0);
  
  delay(1000);
  
  digitalWrite(gpin, LOW);
  digitalWrite(bpin, HIGH);
  digitalWrite(rpin, LOW);
  
  delay(1000);
  
  digitalWrite(gpin, LOW);
  digitalWrite(bpin, LOW);
  digitalWrite(rpin, HIGH);
  
  
}
//
//int redVal;
//int blueVal;
//int greenVal;
// 
//void loop() {
// 
//  int redVal = 255;
//  int blueVal = 0;
//  int greenVal = 0;
//  for( int i = 0 ; i < 255 ; i += 1 ){
//    greenVal += 1;
//    redVal -= 1;
//    analogWrite( GREEN, 255 - greenVal );
//    analogWrite( RED, 255 - redVal );
//
//    delay( delayTime );
//  }
// 
//  redVal = 0;
//  blueVal = 0;
//  greenVal = 255;
//  for( int i = 0 ; i < 255 ; i += 1 ){
//    blueVal += 1;
//    greenVal -= 1;
//    analogWrite( BLUE, 255 - blueVal );
//    analogWrite( GREEN, 255 - greenVal );
//      
//    delay( delayTime );
//  }
// 
//  redVal = 0;
//  blueVal = 255;
//  greenVal = 0;
//  for( int i = 0 ; i < 255 ; i += 1 ){
//    redVal += 1;
//    blueVal -= 1;
//    analogWrite( RED, 255 - redVal );
//    analogWrite( BLUE, 255 - blueVal );
//
//    delay( delayTime );
//  }
//}
