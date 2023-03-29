CC = gcc
CFLAGS = -Wall -ansi -pedantic -Werror
OBJ = order.o numbers.o
EXEC = Prac03

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

order.o : order.c order.h
	$(CC) $(CFLAGS) order.c -c

numbers.o : numbers.c
	$(CC) $(CFLAGS) numbers.c order.c -c

clean : 
	rm -f $(EXEC) $(OBJ)
