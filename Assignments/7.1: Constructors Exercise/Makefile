CC = g++
CFLAGS = I
DEPS1 = students.hpp address.hpp DOB.hpp 

%.o: %.c $(DEPS1)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o students.o	DOB.o address.o
	$(CC) -o main main.o students.o	DOB.o address.o
clean:
	bin/rm -rf *.o main
	