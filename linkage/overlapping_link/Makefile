# Technical prelude
# See: https://tech.davis-hansson.com/p/make/
SHELL := bash
.ONESHELL:
.SHELLFLAGS := -eu -o pipefail -c
.DELETE_ON_ERROR:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules
ifeq ($(origin .RECIPEPREFIX), undefined)
  $(error This Make does not support .RECIPEPREFIX. Please use GNU Make 4.0 or later)
endif
.RECIPEPREFIX = >

# GXX := /opt/1A/toolchain/x86_64-v21/bin/g++
GXX := g++
CXXFLAGS := -g -Wall -Wextra -Werror
LDFLAGS :=

all: main1 main2

%.o: %.cpp
>$(GXX) $(CXXFLAGS) -c -o $@ $<

# main1: main.o myobject1.o
# >$(GXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

main2: main.o myobject2.o myobject1.o
>$(GXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
>rm -rf *.o main1 main2
