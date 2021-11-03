# Technical prelude
SHELL := bash
.ONESHELL:
.SHELLFLAGS := -eu -o pipefail -c
.DELETE_ON_ERROR:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules

GXX := g++
COMMON_FLAGS := -g -Wall -Wpedantic
CXXFLAGS := $(COMMON_FLAGS)
LDFLAGS := $(COMMON_FLAGS)

LIBSHARED := libshared.so
LIBSHARED_DIR := sharedlib

HEADERONLY1_DIR := headeronly1
HEADERONLY2_DIR := headeronly2

.PHONY: all
all: main1 main2

$(LIBSHARED_DIR)/%.o: $(LIBSHARED_DIR)/%.cpp
	$(GXX) $(CXXFLAGS) -fPIC -I $(HEADERONLY1_DIR) -c -o "$@" "$<"

$(LIBSHARED): $(LIBSHARED_DIR)/printer.o
	$(GXX) -shared $(LDFLAGS) -o "$@" "$<"

main1: main.cpp $(LIBSHARED)
	$(GXX) $(CXXFLAGS) $(LDFLAGS) -I $(LIBSHARED_DIR) -I $(HEADERONLY1_DIR) -o "$@" "$<" -L. -lshared
	
main2: main.cpp $(LIBSHARED)
	$(GXX) $(CXXFLAGS) $(LDFLAGS) -I $(LIBSHARED_DIR) -I $(HEADERONLY2_DIR) -o "$@" "$<" -L. -lshared

.PHONY: clean
clean:
	rm -f $(LIBSHARED)
	rm -f $(LIBSHARED_DIR)/printer.o
	rm -f main1
	rm -f main2
