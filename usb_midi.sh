#!/bin/bash

sudo dfu-programmer atmega16u2 erase --force

sudo dfu-programmer atmega16u2 flash arduino-midi.hex --suppress-bootloader-mem

sudo dfu-programmer atmega16u2 reset