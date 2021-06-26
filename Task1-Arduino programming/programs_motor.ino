
#include <Servo.h>

Servo myservo0;  
Servo myservo1;  
Servo myservo2;  
Servo myservo3;  
Servo myservo4;  


int pos = 0;    
void setup() {
  myservo0.attach(0);  
  myservo1.attach(1); 
  myservo2.attach(2); 
  myservo3.attach(4); 
  myservo4.attach(3); 

  
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo0.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo0.write(pos);              
    delay(15);                       
  }
  
  
   for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo1.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo1.write(pos);              
    delay(15);                       
  }
  
  
   for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo2.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo2.write(pos);              
    delay(15);                       
  }
  
   for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo3.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo3.write(pos);              
    delay(15);                       
  }
  
  for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo4.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo4.write(pos);              
    delay(15);                       
  }
}
