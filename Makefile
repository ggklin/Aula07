PROG = bin/Aula07
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -O0 -g
OBJS = build/main.o build/sapo.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp

sapo.o :
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

clean:
	rm -f *.o
