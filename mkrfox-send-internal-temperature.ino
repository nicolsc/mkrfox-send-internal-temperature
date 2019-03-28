// Arduino SigFox for MKRFox1200 - Version: Latest 
#include <SigFox.h>

/*

*/
typedef struct __attribute__ ((packed)) sigfox_message{
  int8_t temp;
}SigfoxMessage;

void setup() {
    Serial.begin(9600);
    if (!SigFox.begin()){
      Serial.println("UNEXPECTED ERROR ... PLEASE WAIT");
      NVIC_SystemReset();
      while(1);
    }
    SigFox.reset();
    delay(100);
    SigFox.debug();
    SigFox.end();
}
