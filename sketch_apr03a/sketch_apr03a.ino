#include <Control_Surface.h>
//#include <MIDI_Interfaces/USBMIDI_Interface.hpp>
 
USBMIDI_Interface midi;
USBDebugMIDI_Interface mididbg;
BidirectionalMIDI_Pipe mpipe;

CD74HC4067 mux {
  15,       // Analog input pin
  {2, 3, 4, 5} // Address pins S0, S1, S2
};

CCPotentiometer volumePotentiometers[] {
  { mux.pin(0), { MIDI_CC::Channel_Volume, CHANNEL_1 } },
  { mux.pin(1), { MIDI_CC::Channel_Volume, CHANNEL_2 } },
  { mux.pin(2), { MIDI_CC::Channel_Volume, CHANNEL_3 } }
};

void setup() { 
  midi | mpipe | mididbg;
  Control_Surface.begin();
}
void loop() { Control_Surface.loop(); }
