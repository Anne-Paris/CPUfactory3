# CPUfactory
#***********
# Modular Make - top level makefile
PROJPATH := $(PWD)
PROJNAME := $(notdir $(PROJPATH))
MK := mk
include $(MK)/os-detect.mk

.PHONY:	gui
gui:	$(TARGET)
	./$(TARGET) -g -d
