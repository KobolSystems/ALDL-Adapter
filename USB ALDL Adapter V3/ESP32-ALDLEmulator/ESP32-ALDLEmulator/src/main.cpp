// https://techtutorialsx.com/2018/12/09/esp32-arduino-serial-over-bluetooth-client-connection-event/

#include <Arduino.h>
#include <broadcast.cpp>

void setup() 
{
  // Define Serial Port
  Serial.begin(115200);  // Debug Port (USB TX0/RX0)  
  Serial1.begin(8192);   // ALDL Emulation Port 
  
  // Debug Hello Message
  Serial.println("KOBOL Systems ALDL Emulator Ver.1.0");

}

void loop() 
{


}

/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */
void serialEvent1() 
{
  while (Serial.available()) 
  {
    // Get and Send Frame Goes Here
      
  }
}

void serialEvent2()
{

}