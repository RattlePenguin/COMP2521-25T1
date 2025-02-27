objects := pointer malloc shift listDelete
all: $(objects)

pointer: pointer.c
	gcc pointer.c -o pointer

malloc: malloc.c
	gcc malloc.c -o malloc

shift: shift.c
	gcc shift.c -o shift

listDelete: listDelete.c
	gcc listDelete.c -o listDelete


clean:
	rm -f $(objects)