# COMP2521 - Week 1 Lab

# !!! DO NOT MODIFY THIS FILE !!!

CC = clang
CFLAGS = -Wall -Wvla -Werror -g

########################################################################

asan: CFLAGS += -fsanitize=address,leak,undefined
asan: all

msan: CFLAGS += -fsanitize=memory,undefined -fsanitize-memory-track-origins
msan: all

nosan: all

########################################################################

all: concatStrings getMax

concatStrings: concatStrings.c
	$(CC) $(CFLAGS) -o concatStrings concatStrings.c

getMax: getMax.c
	$(CC) $(CFLAGS) -o getMax getMax.c

########################################################################

clean:
	rm -f concatStrings getMax

