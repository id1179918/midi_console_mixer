#!/bin/bash

sudo dfu-programmer atmega16u2 erase

sudo dfu-programmer atmega16u2 flash arduino-midi.hex

sudo dfu-programmer atmega16u2 reset