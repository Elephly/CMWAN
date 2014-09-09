OBJ1 = main.o GUI.o

all:
	make cmwan

cmwan:	$(OBJ1)
	g++ -g -o CMWAN $(OBJ1)

main.o:	../src/main.cc ../src/GUI.h
	g++ -g -c ../src/main.cc

GUI.o:	../src/GUI.cc ../src/GUI.h
	g++ -g -c ../src/GUI.cc

clean:
	rm -f *.o *~ CMWAN
