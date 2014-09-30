.PHONY:	all clean run

OBJ1 = build/main.o build/GUI.o

all:
	sudo apt-get install build-essential
	sudo apt-get install xterm
	mkdir -p build
	make cmwan

cmwan:	$(OBJ1)
	g++ -g -o build/CMWAN $(OBJ1)

build/main.o:	src/main.cc src/GUI.h
	g++ -g -o build/main.o -c src/main.cc

build/GUI.o:	src/GUI.cc src/GUI.h
	g++ -g -o build/GUI.o -c src/GUI.cc

clean:
	sudo rm -r build

run:
	make
	./build/CMWAN
