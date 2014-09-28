OBJ1 = build/main.o build/GUI.o

all:
	make cmwan

cmwan:	$(OBJ1)
	g++ -g -o build/CMWAN $(OBJ1)

build/main.o:	src/main.cc src/GUI.h
	g++ -g -o build/main.o -c src/main.cc

build/GUI.o:	src/GUI.cc src/GUI.h
	g++ -g -o build/GUI.o -c src/GUI.cc

clean:
	rm -r -f build/*.o build/CMWAN

run:
	make
	./build/CMWAN
