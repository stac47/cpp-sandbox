CC := /opt/1A/toolchain/x86_64-v20/bin/g++
CXXFLAGS := -g -std=gnu++2a -Wall -Wextra -pedantic -O2

main.o: main.cpp
	$(CC) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f main.o

.PHONY: clean
