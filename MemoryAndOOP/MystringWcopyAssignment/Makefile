cc := g++ -Wall -O2 -std=c++20

main: main.o mystring.o
	$(cc) main.o mystring.o -o main

main.o: main.cpp
	$(cc) -c main.cpp

mystring.o: mystring.cpp mystring.h
	$(cc) -c mystring.cpp

clear:
	rm *.o main

.PHONY: clear
