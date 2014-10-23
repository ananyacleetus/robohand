#include <Servo.h> 

Servo test1, test2, test3, test4; 

int serv1 =3;
int serv2 = 5;
int serv3 = 6;
int serv4 = 9;

void setup(){
test1.attach(serv1);
test2.attach(serv2);
test3.attach(serv3);
test4.attach(serv4);
}

void loop(){

test1.write(30);
test2.write(30);
test3.write(30);
test4.write(30);

}
