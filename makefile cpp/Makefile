all: add.o subtract.o multiply.o main.cpp
	g++ add.o subtract.o multiply.o main.cpp -o executable

add.o: add.cc
	g++ -c add.cc

subtract.o: subtract.cc
	g++ -c subtract.cc

multiply.o: multiply.cc
	g++ -c multiply.cc

clean:
	rm *.o executable