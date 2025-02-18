objects := pointer malloc shift
all: $(objects)

pointer: pointer.c
	gcc pointer.c -o pointer

malloc: malloc.c
	gcc malloc.c -o malloc

shift: shift.c
	gcc shift.c -o shift

clean:
	rm -f $(objects)