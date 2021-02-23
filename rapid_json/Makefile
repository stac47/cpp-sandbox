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
CXXFLAGS := -g -std=gnu++20 -I /home/docker/opensource/rapidjson/include
# CXXFLAGS := -g -std=gnu++20 -m64 -pipe -fno-strict-aliasing -fvisibility=hidden -fdiagnostics-color=always -fno-pic -fPIC -fno-lto -ffat-lto-objects -fno-plt -fno-semantic-interposition -fexceptions -DRAPIDJSON_HAS_STDSTRING=1 -I /data/mwrep/res/osp/RapidJson/21-0-0-0/include

test_json_parsing: test_json_parsing.cpp
>$(GXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
>rm test_json_parsing
