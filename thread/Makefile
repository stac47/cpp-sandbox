# CC := /opt/1A/toolchain/x86_64-v19/bin/g++
CC := g++
CXXFLAGS := -g
LDFLAGS := -g -fuse-ld=bfd -Wl,--as-needed -pthread #-Wl,-flto=8 -ffat-lto-objects -fuse-linker-plugin #-Wl,--as-needed
LIBS := -lm

test_call_once.o: test_call_once.cpp
	$(CC) $(CXXFLAGS) -c test_call_once.cpp -o test_call_once.o

a.out: test_call_once.o
	$(CC) $(LDFLAGS) test_call_once.o $(LIBS)
	readelf -d a.out | grep NEEDED

.PHONY: clean all
clean:
	rm -f a.out test_call_once.o
	
all: a.out


