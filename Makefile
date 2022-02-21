CC = g++

launch : motor 
	./motor
all : motor 


launchC : launch cleanAll
	

launch : motor
	./motor




motor :  Coord.o Matrix.o main.o  
	$(CC) -o motor Coord.o Matrix.o main.o 



Coord.o : Model/Coord/Coord.cpp
	$(CC) -o  Coord.o -c ./Model/Coord/Coord.cpp

Matrix.o : Model/Matrix/Matrix.cpp
	$(CC) -o  Matrix.o -c ./Model/Matrix/Matrix.cpp


test.o : test/test.cpp
	$(CC) -o test.o -c test/test.cpp

main.o : main.cpp
	$(CC) -o main.o -c main.cpp


clean:
	rm *.o
cleanAll: clean
	rm motor





