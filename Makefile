# taken from https://www.teddy.ch/c++_library_in_c/
#
CC = g++

.c.o:
	gcc -c $< -o $@

.cpp.o:
	$(CC) -c $< -o $@

all: $(MAIN)

MainC: MainC.o Class.o ClassWrapperForC.o
	$(CC) -o $@ $^

MainCpp: MainCpp.o Class.o
	$(CC) -o $@ $^

all: MainC MainCpp

clean:
	- rm -f *.o MainCpp MainC
