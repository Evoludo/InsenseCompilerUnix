CONTIKI = $(INSENSE_RUNTIME_UNIX)
ifndef TARGET
TARGET=native
endif

ifndef INSENSE_RUNTIME_UNIX
     $(error INSENSE_RUNTIME_UNIX not defined! You must specify where INSENSE_RUNTIME_UNIX resides!)
endif
# unless the following were overridden on the command-line
# use the following compiler generated component flags
ifndef DAL_LEDS
 DAL_LEDS = no
endif
ifndef DAL_BUTTON
 DAL_BUTTON = no
endif
ifndef DAL_SENSORS
 DAL_SENSORS = no
endif
ifndef DAL_STDOUT
 DAL_STDOUT = no
endif
ifndef DAL_INTERNODECHANNEL
 DAL_INTERNODECHANNEL = no
endif
ifndef DAL_RADIO
 DAL_RADIO = no
endif
ifndef DAL_SCHEDULER
 DAL_SCHEDULER = no
endif
ifndef DAL_RECEIVE
 DAL_RECEIVE = no
endif
ifndef XMAC_POWERSAVE
 XMAC_POWERSAVE = no
endif

# set conditional compilation flags depending on compiler and user choice
ifeq ($(DAL_DEBUG), yes)
DALDEBUG = -DDALDEBUG
endif
ifneq ($(DAL_SMALL), no)
DALSMALL = -DDALSMALL
endif
ifeq ($(DAL_SENSORS), yes)
DALSENSORS = -DDALSENSORS
endif
ifeq ($(DAL_STDOUT), yes)
DALSTDOUT = -DDALSTDOUT
endif
ifeq ($(DAL_INTERNODECHANNEL), yes)
DALINTERNODECHANNEL = -DDALINTERNODECHANNEL
DAL_SCHEDULER = yes
endif
ifeq ($(DAL_RADIO), yes)
DALRADIO = -DDALRADIO
endif
ifeq ($(DAL_LEDS), yes)
DALLEDS = -DDALLEDS
endif
ifeq ($(DAL_BUTTON), yes)
DALBUTTON = -DDALBUTTON
endif
ifeq ($(DAL_SCHEDULER), yes)
DALSCHEDULER = -DDALSCHEDULER
endif
ifeq ($(DAL_RECEIVE), yes)
DALRECEIVE = -DDALRECEIVE
endif
ifeq ($(XMAC_POWERSAVE), yes)
XMACPOWERSAVE = -DXMAC_CONF_OFF_TIME=15.0*RTIMER_ARCH_SECOND-DEFAULT_ON_TIME
endif
ifdef DAL_RADIO_POWERCYCLE
XMACPOWERSAVE = -DXMAC_CONF_OFF_TIME=\(rtimer_clock_t\)$(DAL_RADIO_POWERCYCLE)*RTIMER_ARCH_SECOND-DEFAULT_ON_TIME
endif
CFLAGS += $(XMACPOWERSAVE) -DMSP430_GCC_VER=$(MSP430_GCC_VER)


TARGETFLAGS = $(CFLAGS) -DAUTOSTART_ENABLE $(DALDEBUG) $(DALSMALL) $(DALSENSORS) $(DALLEDS) $(DALBUTTON) $(DALSTDOUT) $(DALINTERNODECHANNEL) $(DALRADIO) $(DALSCHEDULER) $(DALRECEIVE)

PROJ=network_send.isf

APP_INCLUDES = -I $(INSENSE_RUNTIME_UNIX)
APP_SRCFILES = struct_Ssaddr_apayload__.c Insense_NetStringSender.c main.c 
APP_OBJECTFILES = $(APP_SRCFILES:.c=.o)
# JL added, linking to main function in contiki-sky.a doesn't seem to work
# with msp430-gcc
ifeq ($(TARGET), sky)
EXTRA_OBJECTFILES = obj_sky/contiki-sky-main.o
endif

all: iclean $(APP_OBJECTFILES) insense_runtime_unix.a $(PROJECT_LIBRARIES)
	$(LD) $(LDFLAGS) $(APP_OBJECTFILES) $(EXTRA_OBJECTFILES) insense_runtime_unix.a -o $(PROJ).$(TARGET)

#include $(CONTIKI)/Makefile.include
include $(INSENSE_RUNTIME_UNIX)/Makefile.include
iclean:
		rm -f $(APP_OBJECTFILES) $(INSENSE_OBJECTFILES) insense_runtime_unix.a *~ $(INSENSE_RUNTIME_UNIX)/*~ obj_*/xmac.o
sclean: iclean
		rm -f *.[ch] Makefile *.sky *.stackdump *.native *.map *.a
