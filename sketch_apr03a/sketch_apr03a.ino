#include <Control_Surface.h>

USBMIDI_Interface midi;

CD74HC4067 mux {
  A15,       // Analog input pin
  {2, 3, 4, 5} // Address pins S0, S1, S2, S3
};

CCPotentiometer volumePotentiometers[] {
  { mux.pin(0), { 43, CHANNEL_2 } },
  { mux.pin(1), { 44, CHANNEL_3 } },
  { mux.pin(2), { 45, CHANNEL_4 } }
};

CCPotentiometer singlePot { A14 , {42, CHANNEL_1} };

void setup() {
  Control_Surface.begin();
}
void loop() { Control_Surface.loop(); }
