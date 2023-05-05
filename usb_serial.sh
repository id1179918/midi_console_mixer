#!/bin/bash

sudo dfu-programmer atmega16u2 erase

sudo dfu-programmer atmega16u2 flash usbserial_mega_16u2.hex --suppress-bootloader-mem

sudo dfu-programmer atmega16u2 reset