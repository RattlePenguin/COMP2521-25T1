CC = clang

CFLAGS0 = -Wall -Werror -g
CFLAGS1 = -Wall -Werror -g -fsanitize=address,leak,undefined
CFLAGS2 = -Wall -Werror -g -fsanitize=memory,undefined -fsanitize-memory-track-origins

# If you want to use valgrind, change this to $(CFLAGS0)
# If you want to use the MemorySanitizer, change this to $(CFLAGS2)
# - MemorySanitizer detects uninitialized memory accesses
# You should change back to $(CFLAGS1) when you are done
CFLAGS = $(CFLAGS1)

.PHONY: all
all: recursionSolution hanoiSolution

recursionSolution: recursionSolution.c
	$(CC) $(CFLAGS) -o recursionSolution recursionSolution.c

hanoiSolution: hanoiSolution.c
	$(CC) $(CFLAGS) -o hanoiSolution hanoiSolution.c


.PHONY: clean
clean:
	rm -f recursionSolution hanoiSolution

