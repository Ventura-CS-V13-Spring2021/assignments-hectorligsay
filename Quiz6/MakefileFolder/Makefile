#CC = g++
#CFLAGS = I
#header = IntegerArray.hpp  #//(this is fake fx)   // Dependency 

#%.o: %.c $(header)
#	$(CC) -c -o $@ $< $(CFLAGS)

#buildall: main.o IntegerArray.o
#	$(CC) -o main main.o IntegerArray.o
#clean:
#	bin/rm -rf *.o a.out

CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o IntegerArray.o 
	$(CC) -o main main.o IntegerArray.o 
clean:
	bin/rm -rf *.o a.out 