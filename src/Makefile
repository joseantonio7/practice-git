CC = gcc
CFLAGS = -g -Wall
LIBS = -lm  
SRCS = fib.c fac.c main.c 
OBJS = $(SRCS:.c=.o)
MAIN = app

default: clean

all: $(MAIN)
	@echo Compilado $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS) $(LIBS)

clean:
	rm *.o *~ $(MAIN)
