

CC=propeller-elf-gcc
FLASH=propeller-load
PROPELLER_LOAD_CONFIG=$(PROPELLER_GCC_HOME)/propeller-load

CFLAGS=-Os -m32bit-doubles -fno-exceptions -std=c99 -mcog
BOARD=QUICKSTART
PORT=/dev/cu.usbserial-A900L16U

.PHONY: all clean load

all: main

clean:
	rm main *.o

load: main
	${FLASH} -b ${BOARD} -p ${PORT} -I ${PROPELLER_LOAD_CONFIG} -r $<
