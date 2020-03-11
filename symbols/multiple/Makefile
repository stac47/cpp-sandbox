a.o: a.c
	gcc -g -fPIC -c a.c -o a.o

b.o: b.c
	gcc -g -fPIC -c b.c -o b.o

liba.so: a.o
	gcc -g -shared -o liba.so a.o

libb.so: b.o
	gcc -g -shared -o libb.so b.o

main: main.c
	gcc -g -Wl,--no-as-needed -o main main.c -la -lb

all: liba.so libb.so main

.PHONY: all

clean:
	rm -rf a.o b.o liba.so libb.so main

.PHONY: clean
