BASE_DIR	= $(abspath .)
TEMPS_DIR	:= $(BASE_DIR)/temps
TOOLCHAIN_DIR	= /home/digi/rv32iz/bin/


nproc      = $(shell nproc)

MAIN	= main

logName ?= simLog
VTILE = $(BASE_DIR)/QVTile

bmark_hex ?= $(BASE_DIR)/$(MAIN).hex 
bmark_out = $(foreach f,$(bmark_hex),$(patsubst %.hex,%.vcd,$f))
bmark_simLog = $(BASE_DIR)/$(logName).log 
$(bmark_out) : $(BASE_DIR)/QVTile 
	$(VTILE) $< $@ 2> $(bmark_simLog)
run-bmark:$(bmark_out)

CXXFLAGS += -std=c++11 -Wall -Wno-unused-variable

VERILATOR = verilator --cc --exe
VERILATOR_FLAGS = --assert -Wno-STMTDLY -O3 --trace --threads $(nproc)\
	--top-module Tile -Mdir $(BASE_DIR)/VTile.csrc \
	-CFLAGS "$(CXXFLAGS) -include $(BASE_DIR)/VTile.csrc/VTile.h" 

$(BASE_DIR)/QVTile: $(BASE_DIR)/Tile.sv $(BASE_DIR)/cc/top_q.cc $(BASE_DIR)/cc/mm.cc $(BASE_DIR)/cc/mm.h
	$(VERILATOR) $(VERILATOR_FLAGS) -o $@ $< $(word 2, $^) $(word 3, $^)
	$(MAKE) -C $(BASE_DIR)/VTile.csrc -f VTile.mk

q-verilator: $(BASE_DIR)/QVTile  

all: $(BASE_DIR)/QVTile  $(bmark_out)

clean:
	-@rm -rf $(BASE_DIR)/QVTile  $(BASE_DIR)/$(MAIN).vcd
.PHONY: all clean  q-verilator force-update

