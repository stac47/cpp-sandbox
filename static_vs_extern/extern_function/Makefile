main.exe: main.o header.o
	g++ -g main.o header.o -o main.exe

main.o: main.cpp
	g++ -g -c main.cpp

header.o: header.cpp header.h
	g++ -g -c header.cpp

.PHONY: clean all

all: main.exe

clean:
	rm -rf *.o *.exe
