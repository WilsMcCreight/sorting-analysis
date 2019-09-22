# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall
# CXXFLAGS = -Wall -g


run = ./outputs/executables/main.out

# ****************************************************
# Targets needed to bring the executable up to date

# data/executables/main: data/executables/main.o data/executables/arr.o data/executables/bubble_sort.o data/executables/print_array.o
# 	$(CXX) $(CXXFLAGS) data/executables/main.o data/executables/arr.o data/executables/bubble_sort.o data/executables/print_array.o -o data/executables/main

# The main.o target can be written more simply

outputs/executables/main.out: computation/main.cpp computation/helpers/arr.h computation/helpers/print_array.h computation/algorithms/bubble_sort.h
	$(CXX) $(CXXFLAGS) computation/main.cpp computation/helpers/arr.cpp computation/helpers/print_array.cpp computation/algorithms/bubble_sort.cpp -o outputs/executables/main.out

# data/executables/main.o: computation/main.cpp computation/helpers/arr.h computation/helpers/print_array.h computation/algorithms/bubble_sort.h
# 	$(CXX) $(CXXFLAGS) computation/main.cpp -o data/executables/main.o

# data/executables/arr.o: computation/helpers/arr.h computation/helpers/arr.cpp
# 	$(CXX) $(CXXFLAGS) computation/helpers/arr.cpp -o data/executables/arr.o
#
# data/executables/print_array.o: computation/helpers/print_array.cpp computation/helpers/print_array.h computation/helpers/arr.h
# 	$(CXX) $(CXXFLAGS) computation/helpers/print_array.cpp -o data/executables/print_array.o
#
# data/executables/bubble_sort.o: computation/algorithms/bubble_sort.cpp computation/algorithms/bubble_sort.h computation/helpers/arr.h
# 	$(CXX) $(CXXFLAGS) computation/algorithms/bubble_sort.cpp -o data/executables/bubble_sort.o
