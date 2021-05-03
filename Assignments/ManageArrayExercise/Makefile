CC = g++
CFLAGS = I
arrayManagement = arrayfunction.hpp  #//(this is fake fx)   // Dependency 

%.o: %.c $(arrayManagement)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o arrayfunction.o
	$(CC) -o main main.o arrayfunction.o
clean:
	bin/rm -rf *.o a.out
	