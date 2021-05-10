CC = g++
CFLAGS = I
DEPS1 = Rectangle.hpp Coordinate.hpp

%.o: %.c $(DEPS1)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o 	Rectangle.o 	Coordinate.o 
	$(CC) -o main main.o Rectangle.o	Coordinate.o 
clean:
	bin/rm -rf *.o main
	