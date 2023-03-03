#include <Control_Surface.h>
 
HairlessMIDI_Interface midi {9600};

CCPotentiometer potentiometer { A0, {MIDI_CC::Channel_Volume, CHANNEL_1} };

void setup() { Control_Surface.begin(); }
void loop() { Control_Surface.loop(); }