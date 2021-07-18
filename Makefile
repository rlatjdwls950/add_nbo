#Makefile

add_nbo.out: main.o func.o
	gcc -o add_nbo main.o func.o

main.o: func.h main.cpp

func.o: func.h func.cpp

clean:
	rm -f add_add
	rm -f *.o

