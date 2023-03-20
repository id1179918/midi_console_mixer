#include <Control_Surface.h>
//#include <MIDI_Interfaces/USBMIDI_Interface.hpp>
 
USBMIDI_Interface midi;
USBDebugMIDI_Interface mididbg;
BidirectionalMIDI_Pipe mpipe;

CCPotentiometer potentiometer { A0, {MIDI_CC::Channel_Volume, CHANNEL_1} };

void setup() { 
  midi | mpipe | mididbg;
  Control_Surface.begin();
}
void loop() { Control_Surface.loop(); }