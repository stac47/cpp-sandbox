CC := g++
CXXFLAGS := -g

main.o: main.cpp
	$(CC) $(CXXFLAGS) -c -o main.o main.cpp

main: main.o
	$(CC) $(CXXFLAGS) -o main main.o

clean:
	rm -f main main.o

.PHONY: clean
