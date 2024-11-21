main: main.o Library.o Book.o
	g++ main.o Library.o Book.o -o main

main.o: main.cpp Library.h Book.h
	g++ -c main.cpp

Book.o: Book.cpp Book.h
	g++ -c Book.cpp

Library.o: Library.cpp Library.h Book.h
	g++ -c Library.cpp

clean:
	rm -f *.o main

