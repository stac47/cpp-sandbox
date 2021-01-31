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

BINARIES := longjump_dtor
# On MacOS with gcc installed by Homebrew
CXX := /usr/local/bin/g++-10
# CXX := g++
CXXFLAGS := -g -Wall -Wextra -Werror -std=c++2a
OPTIMFLAGS = -O3

.PHONY: all
all : $(BINARIES)

%: %.cpp
>$(CXX) $(CXXFLAGS) $(OPTIMFLAGS) -o $@ $<
	
.PHONY: clean
clean:
>rm -rf $(BINARIES)
