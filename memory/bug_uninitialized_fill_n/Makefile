CC := /opt/1A/toolchain/x86_64-v20/bin/g++
#CC := /opt/1A/toolchain/x86_64-v19/bin/g++
CXXFLAGS := -Wall -Wextra -std=gnu++2a

main.o: main.cpp
	$(CC) $(CXXFLAGS) -c -o main.o main.cpp

clean:
	rm -f main.o

.PHONY: clean
