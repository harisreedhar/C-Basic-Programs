all: add.o subtract.o multiply.o main.o
	g++ add.o subtract.o multiply.o main.o -o executable

add.o: add.cpp
	g++ -c add.cpp

subtract.o: subtract.cpp
	g++ -c subtract.cpp

multiply.o: multiply.cpp
	g++ -c multiply.cpp	

clean:
	rm *.o executable