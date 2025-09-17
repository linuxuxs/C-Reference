
flags := -Wall -O2 -std=c++20 
files := main.o account.o savings_acc.o checking_account.o trust_account.o

main: ${files}
	g++ ${flags} ${files} -o main

main.o : main.cpp
	g++ -c ${flags} main.cpp -o main.o

account.o: account.cpp
	g++ -c ${flags} account.cpp -o account.o 

savings_acc.o: savings_acc.cpp
	g++ -c ${flags} savings_acc.cpp -o savings_acc.o

checking_account.o: checking_account.cpp
	g++ -c ${flags} checking_account.cpp -o checking_account.o

trust_account.o: trust_account.cpp
	g++ -c ${flags} trust_account.cpp -o trust_account.o

clear:
	rm -f *.o main

PHONY: clear