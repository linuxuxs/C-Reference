
flags := -Wall -O2 -std=c++20 
files := main.o account.o savings_acc.o account_util.o

main: main.o account.o savings_acc.o account_util.o
	g++ ${flags} ${files} -o main

main.o : main.cpp
	g++ -c ${flags} main.cpp -o main.o

account.o: account.cpp
	g++ -c ${flags} account.cpp -o account.o 

savings_acc.o: savings_acc.cpp
	g++ -c ${flags} savings_acc.cpp -o savings_acc.o

account_util.o: account_util.cpp
	g++ -c ${flags} account_util.cpp -o account_util.o

clear:
	rm -f *.o main

PHONY: clear