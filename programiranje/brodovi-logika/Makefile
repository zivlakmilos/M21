all: linux


linux: main.o logic.o graphic.o
	gcc -o brodovi main.o logic.o graphic.o -lncurses

main.o: main.c
	gcc -c -o main.o main.c

logic.o: logic.c
	gcc -c -o logic.o logic.c

graphic.o: graphic.c
	gcc -c -o graphic.o graphic.c


clean:
	rm -rf *.o brodovi
