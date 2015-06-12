all: linux

linux: main.o menu.o game.o player.o net.o
	g++ -o brodovi main.o game.o menu.o player.o net.o

main.o: main.cpp
	g++ -c -o main.o main.cpp

game.o: game.cpp
	g++ -c -o game.o game.cpp

menu.o: menu.cpp
	g++ -c -o menu.o menu.cpp

player.o: player.cpp
	g++ -c -o player.o player.cpp

net.o: player.cpp
	g++ -c -o player.o player.cpp


clean:
	rm -rf *.o brodovi
