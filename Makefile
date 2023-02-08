CC = g++
SOURCES = ECNumbers.cpp unit_test.cpp main.cpp

all: main unit_test

main: 
	$(CC) ECNumbers.cpp main.cpp -std=c++14 -o main

mainrun:
	rm -rf main unit_test
	$(CC) ECNumbers.cpp main.cpp -std=c++14 -o main
	./main

unit_test:
	$(CC) unit_test.cpp ECNumbers.cpp -std=c++14 -o unit_test

unitrun:
	rm -rf main unit_test
	$(CC) unit_test.cpp ECNumbers.cpp -std=c++14 -o unit_test
	./unit_test

clean: 
	rm -rf main mainrun unit_test unitrun