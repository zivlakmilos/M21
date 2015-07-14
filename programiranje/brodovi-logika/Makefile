all: linux


linux: main.o logic.o
	gcc -o brodovi main.o logic.o

main.o: main.c
	gcc -c -o main.o main.c

logic.o: logic.c
	gcc -c -o logic.o logic.c


clean:
	rm -rf *.o brodovi
