CC = g++
CFLAGS = I
DEPS1 = student.hpp  

%.o: %.c $(DEPS1)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o student.o
	$(CC) -o main main.o student.o
clean:
	bin/rm -rf *.o a.out
	