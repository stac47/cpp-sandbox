CXXSTD := -std=gnu++2a
CXXFLAGS := $(CXXSTD) -O3 -flto -ffat-lto-objects -fuse-linker-plugin -fno-working-directory -finput-charset=UTF-8 -fsigned-char -faligned-new=1 -fopenmp
LDFLAGS := $(CXXSTD) -O3 -Wl,-flto -ffat-lto-objects -fuse-linker-plugin -fno-working-directory
CXX := /opt/1A/toolchain/x86_64-v20/bin/g++

lib.o: lib.cpp lib.h
	$(CXX) -fPIC $(CXXFLAGS) -c lib.cpp -o lib.o

liba.so: lib.o
	$(CXX) -shared $(LDFLAGS) -o liba.so lib.o

main.o: main.cpp lib.h
	$(CXX) -fPIE $(CXXFLAGS) -c main.cpp -o main.o

main: liba.so main.o
	$(CXX) $(LDFLAGS) -L. -o main main.o -la

clean:
	rm -rf lib.o liba.so main.o main

.PHONY: clean

run: main
	LD_LIBRARY_PATH=. ./main

.PHONY: run
