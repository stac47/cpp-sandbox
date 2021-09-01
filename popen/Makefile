# Technical prelude
SHELL := bash
.ONESHELL:
.SHELLFLAGS := -eu -o pipefail -c
.DELETE_ON_ERROR:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules

GCC := gcc
CFLAGS := -Og -Wall -Wpedantic
LDFLAGS := 

%.o:%.c
	$(GCC) -c $(CFLAGS) -o $@ $<

main: main.o
	$(GCC) $(LDFLAGS) -o $@ $^
