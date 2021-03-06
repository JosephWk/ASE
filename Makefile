
CXXFLAGS   = -std=c++11 -I -Wall -Wfatal-errors

all: main

main: unit_test.cpp rational.o gcd.o
	g++ -c $(CXXFLAGS) $^ -o $@

rational.o : rational.cpp rational.h 
	g++ -c $(CXXFLAGS) $< -o $@

gcd.o : gcd.cpp gcd.h
	g++ -c $(CXXFLAGS) $< -o $@

clean:
	rm -f main rational.o gcd.o
