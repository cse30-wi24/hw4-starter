EXE = life
OBJS = main.o board.o sim.o libcse30life.a
LOBJS = timefns.o cse30life_shapes.o cse30life_board.o
LIBS = 
CC = gcc 
CFLAGS := -Wall -Wextra -Wno-unused-result -Og -g --std=gnu17 -L/home/linux/ieng6/cs30fa24/public/lib

.PHONY: clean

$(EXE): $(OBJS)
	gcc -o $@ $(CFLAGS) $(OBJS) $(LIBS)

main.o: main.c board.h sim.h timefns.h cse30life.h cse30life.h
board.o: board.c board.h cse30life.h
sim.o: sim.h board.h cse30life.h
timefns.o: timefns.c timefns.h
cse30life_shapes.o: cse30life.h cse30life_shapes.c
cse30life_board.o: cse30life.h cse30life_board.c

libcse30life.a: $(LOBJS)
	ar rcs libcse30life.a cse30life_board.o cse30life_shapes.o timefns.o
	rm $(LOBJS)

clean:
	rm -f libcse30life.a $(LOBJS) $(OBJS) $(EXE)
