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

GXX := /opt/1A/toolchain/x86_64-v21/bin/g++
# GXX := g++
CXXFLAGS := -g -Wall -Wextra -std=gnu++20
LDFLAGS := -g -std=gnu++20

BINARIES := tricky_adl adl_cxx20 double_using_swap

.PHONY: all
all: $(BINARIES)

%: %.o
>$(GXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
>$(GXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
>@rm -rf *.o $(BINARIES)
