# CPUfactory
#***********
# Modular Make - top level makefile
PROJPATH := $(PWD)
PROJNAME := $(notdir $(PROJPATH))
MK := mk

AVRPROJ	:= sum
MCU		:= attiny85
FREQ	:= 16000000L

include $(MK)/os-detect.mk

.PHONY:	gui
gui:	$(TARGET)
	./$(TARGET) -g -d
