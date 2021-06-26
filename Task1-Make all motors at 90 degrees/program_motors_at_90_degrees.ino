
#include <Servo.h>

Servo myservo0;  
Servo myservo1;  
Servo myservo2;  
Servo myservo3;  
Servo myservo4;  


/*int pos = 90; */   
void setup() {
  myservo0.attach(0);  
  myservo1.attach(1); 
  myservo2.attach(2); 
  myservo3.attach(4); 
  myservo4.attach(3); 
  myservo0.write(90);  
  myservo1.write(90); 
  myservo2.write(90); 
  myservo3.write(90); 
  myservo4.write(90);
 
  
}

void loop() {
  
}
