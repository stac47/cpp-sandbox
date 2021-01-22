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
CXXFLAGS := -O0 -g -Wall -Wextra -I /data/mwrep/res/osp/Boost/21-0-0-0/include/
PROGS := basic pair_comparison boost_spirit_core

.PHONY: all
all: $(PROGS)

%: %.cpp
>$(GXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
>rm -rf $(PROGS)

