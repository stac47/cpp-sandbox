NAME:=stac
MAJOR:=1
MINOR:=0
VERSION:=$(MAJOR).$(MINOR)

.PHONY: clean, lib, main, all

lib: lib$(NAME).so.$(VERSION)


lib$(NAME).so.$(VERSION): $(NAME).o
	g++ -shared -Wl,-soname,lib$(NAME).so.$(MAJOR) -o $@ $(NAME).o
	ln -s lib$(NAME).so.$(VERSION) lib$(NAME).so.$(MAJOR)
	ln -s lib$(NAME).so.$(VERSION) lib$(NAME).so


$(NAME).o: $(NAME).cpp
	g++ -g -c -Wall --std=c++14 -fPIC $(NAME).cpp -o $@


main: $(NAME).out


all: lib, main


main.out: lib$(NAME).so.$(VERSION)
	g++ -g --std=c++14 -l$(NAME) main.cpp -o $@


clean:
	rm *.o *.so*
	rm $(NAME).out

