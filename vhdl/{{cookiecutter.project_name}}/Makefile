# Hugo Lundin, 2020. 
# Makefile for VHDL development with VUnit and GHDL.

###############
# MAIN TARGET #
###############

default: compile

.PHONY: compile
compile:
	python3 run.py --compile

#######################
# DEVELOPMENT TARGETS #
#######################

.PHONE: test
test:
	python3 run.py

.PHONY: wave
wave:
	python3 run.py --wave

#################
# CLEAN TARGETS #
#################

.PHONY: clean
clean:
	rm -rf vunit_out