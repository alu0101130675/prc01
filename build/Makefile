#Variable objetos
OBJECTS = main.o celula.o grid.o
#Flags de compilacion
CFLAGS = -c -std=c++17

game: $(OBJECTS)
	g++  $(OBJECTS) -o game
	mv *.o ../objects
	mv game ../bin


main.o: ../src/main.cpp
	g++ $(CFLAGS) ../src/main.cpp

celula.o: ../src/celula.cpp ../include/celula.hpp
	g++ $(CFLAGS) ../src/celula.cpp

grid.o: ../src/grid.cpp ../include/grid.hpp
	g++ $(CFLAGS) ../src/grid.cpp


.PHONY: clean
clean:
	rm -rf ../objects/*.o
	rm -rf ../bin/*

run:
	../bin/game


