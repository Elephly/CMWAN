OBJ1 = main.o GUI.o

all:
	make cmwan

cmwan:	$(OBJ1)
	g++ -g -o CMWAN $(OBJ1)

main.o:	main.cc GUI.h
	g++ -g -c main.cc

GUI.o:	GUI.cc GUI.h
	g++ -g -c GUI.cc

clean:
	rm -f *.o *~ CMWAN
