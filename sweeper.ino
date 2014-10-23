
#include <Servo.h> 
 
Servo sweeper1,sweeper2,sweeper3,sweeper4;  
                
 
int pos = 0;    
 
void setup() 
{ 
  sweeper1.attach(9);  
  sweeper2.attach(3);
  sweeper3.attach(5);
  sweeper4.attach(6);
} 
 
 
void loop() 
{ 
  
  for(pos = 0; pos < 180; pos += 1) 
  {                                  
    sweeper1.write(pos);          
    sweeper2.write(pos);
    sweeper3.write(pos);
    sweeper4.write(pos);   
    
    delay(15);                       
  } 
  
  for(pos = 180; pos>=1; pos-=1)      
  {                                
    sweeper1.write(pos);          
    sweeper2.write(pos);
    sweeper3.write(pos);
    sweeper4.write(pos);     
    
    delay(15);                        
  } 
}

