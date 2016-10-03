#include "SoftwareSerial.h"
#include "DynamixelConsole.h"

// This is a basic console that allow you to experiment easily with your servos,
// from the arduino serial terminal (or any other serial terminal)
// One limitation for arduino models with only one hardware UART, is that
// you have to use a software serial to communicate with the servos, and thus it 
// works only at low baudrate. See test_speed example to see how to change the baud
// rate of your servos.
//
// For now, only a few low level functions (ping, read and write) are implemented.
// Call them without argument to see how to use them
// You can find the register description table in the doc directory usefull
// Note that all values, including adresses must be passed in decimal format

//HardwareDynamixelInterface interface(Serial1, 2);
SoftwareDynamixelInterface interface(3, 4, 2);
DynamixelConsole console(interface, Serial);

void setup() {
  //while(!Serial);
  interface.begin(9600);
  Serial.begin(9600);
}

void loop() {
  console->loop();
}
