# source files
AVRCSRCS	:= $(wildcard avr/$(AVRPROJ)/*.c)
AVRCXXSRCS	:= $(wildcard avr/$(AVRPROJ)/*.cpp)
AVRSSRCS	:= $(wildcard avr/$(AVRPROJ)/*.S)

# required object files
AVRCOBJS	:= $(AVRCSRCS:.c=.obj)
AVRCXXOBJS	:= $(AVRCXXSRCS:.cpp=.obj)
AVRSOBJS	:= $(AVRSSRCS:.S=.obj)
AVROBJS		:= $(AVRCOBJS) $(AVRCXXOBJS) $(AVRSOBJS)
AVRLST		:= $(AVRPROJ).lst
