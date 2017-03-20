stac.o: stac.cpp
	g++ -g -c -Wall -fPIC stac.cpp -o stac.o

libstac.so: stac.o
	g++ -shared -Wl,-soname,libstac.so.1 -o libstac.so stac.o
	ln -s libstac.so libstac.so.1

main: libstac.so
	g++ -g --std=c++14 -l stac main.cpp -o main

.PHONY: clean
clean:
	rm stac.o
	rm libstac.so
	rm main
	rm libstac.so.1

