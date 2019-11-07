// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

InternetButton b = InternetButton();

void setup() {
    b.begin();
}

void loop() {
    
      b.ledOn(1, 255, 255, 255);
       b.ledOn(3, 255, 255, 255);
        b.ledOn(4, 255, 255, 255);
        b.ledOn(5, 255, 255, 255);
        b.ledOn(6, 255, 255, 255);
        b.ledOn(7, 255, 255, 255);
        b.ledOn(8, 255, 255, 255);
        b.ledOn(9, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
        delay(1000);
        b.allLedsOff();
        b.ledOn(1, 255, 255, 255);
        b.ledOn(4, 255, 255, 255);
        b.ledOn(5, 255, 255, 255);
        b.ledOn(6, 255, 255, 255);
        b.ledOn(7, 255, 255, 255);
        b.ledOn(8, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
        delay(1000);
        b.allLedsOff();
        b.ledOn(1, 255, 255, 255);
        b.ledOn(5, 255, 255, 255);
        b.ledOn(6, 255, 255, 255);
        b.ledOn(7, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
        delay(1000);
        b.allLedsOff();
        b.ledOn(1, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
        delay(1000);
        b.allLedsOff();
        delay(1000);
        
        b.allLedsOff();
         delay(1000);
   Particle.publish("broadcastMessage","Success",60,PUBLIC);


}


