.PHONY:	all clean run tags

OBJ1 = build/main.o build/Game.o build/GameObject.o build/Grid.o build/GUI.o

all:
	sudo apt-get install build-essential
	sudo apt-get install xterm
	mkdir -p build
	make cmwan

cmwan:	$(OBJ1)
	g++ -g -o build/CMWAN $(OBJ1)

build/main.o:	src/main.cc src/GUI.h
	g++ -g -o build/main.o -c src/main.cc

build/Game.o:	src/Game.cc src/Game.h src/GameObject.h src/Grid.h src/GUI.h
	g++ -g -o build/Game.o -c src/Game.cc

build/GameObject.o:	src/GameObject.cc src/GameObject.h
	g++ -g -o build/GameObject.o -c src/GameObject.cc

build/Grid.o:	src/Grid.cc src/Grid.h src/GameObject.h
	g++ -g -o build/Grid.o -c src/Grid.cc

build/GUI.o:	src/GUI.cc src/GUI.h src/Grid.h
	g++ -g -o build/GUI.o -c src/GUI.cc

clean:
	sudo rm -r build

run:
	make
	./build/CMWAN

tags:
	sudo apt-get install exuberant-ctags
	ctags -R --extra=f .
