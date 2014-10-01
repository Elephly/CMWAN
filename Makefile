.PHONY:	all clean run tags

CC = g++ -g -pthread -std=c++11
OBJ1 = build/main.o build/Game.o build/GameObject.o build/Grid.o build/GUI.o build/Input.o

all:
	sudo apt-get install build-essential
	sudo apt-get install xterm
	mkdir -p build
	make cmwan

cmwan:	$(OBJ1)
	$(CC) -o build/CMWAN $(OBJ1)

build/main.o:	src/main.cc src/GUI.h
	$(CC) -o build/main.o -c src/main.cc

build/Game.o:	src/Game.cc src/Game.h src/GameObject.h src/Grid.h src/GUI.h src/Input.h
	$(CC) -o build/Game.o -c src/Game.cc

build/GameObject.o:	src/GameObject.cc src/GameObject.h
	$(CC) -o build/GameObject.o -c src/GameObject.cc

build/Grid.o:	src/Grid.cc src/Grid.h src/GameObject.h
	$(CC) -o build/Grid.o -c src/Grid.cc

build/GUI.o:	src/GUI.cc src/GUI.h src/Grid.h
	$(CC) -o build/GUI.o -c src/GUI.cc

build/Input.o:	src/Input.cc src/Input.h
	$(CC) -o build/Input.o -c src/Input.cc

clean:
	sudo rm -r build

run:
	make
	./build/CMWAN

tags:
	sudo apt-get install exuberant-ctags
	ctags -R --extra=f .
