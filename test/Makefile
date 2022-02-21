CC = g++
all : test launch cleanAll

launch:
	./test

test: Coord.o Matrix.o test.o main.o 
	$(CC) -o test Coord.o Matrix.o test.o main.o 

Coord.o : ../Model/Coord/Coord.cpp
	$(CC) -o  Coord.o -c ../Model/Coord/Coord.cpp

Matrix.o : ../Model/Matrix/Matrix.cpp
	$(CC) -o  Matrix.o -c ../Model/Matrix/Matrix.cpp


test.o : test.cpp
	$(CC) -o test.o -c test.cpp
main.o : main.cpp
	$(CC) -o main.o -c main.cpp

cleanTest : 

clean:
	rm *.o
cleanAll: clean
	rm test