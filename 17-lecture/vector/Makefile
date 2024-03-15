all: dealer main.o Engine.o Car.o

dealer: main.o Engine.o Car.o
	g++ main.o Engine.o Car.o -o dealer

main.o: main.cpp Car.h
	g++ -c main.cpp

Engine.o: Engine.cpp Engine.h
	g++ -c Engine.cpp

Car.o: Car.cpp Car.h Engine.h
	g++ -c Car.cpp

clean: 
	rm *.o *.json dealer

