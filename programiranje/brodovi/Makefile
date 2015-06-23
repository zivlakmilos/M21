all: linux

linux: main.o game.o menu.o map.o
	g++ -o brodovi main.o game.o menu.o map.o -lSDLmain -lSDL -lGL -lSDL_image

main.o: main.cpp
	g++ -c -o main.o main.cpp

game.o: game.cpp
	g++ -c -o game.o game.cpp

menu.o: menu.cpp
	g++ -c -o menu.o menu.cpp

map.o: map.cpp
	g++ -c -o map.o map.cpp


clean:
	rm -rf *.o brodovi
