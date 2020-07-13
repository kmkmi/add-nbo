all : add-nbo

add-nbo : check.o main.o 
	gcc -o add-nbo check.o main.o

check.o : check.h check.c
	gcc -o check.o -include check.h -c check.c

main.o : check.h main.c
	gcc -o main.o -include check.h -c main.c


clean : 
	rm -f add-nbo *.o
