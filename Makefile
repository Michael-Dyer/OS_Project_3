CC = gcc
CFLAGS = -g
OBJS = master.o
OBJS2 = bin_adder.o

all: master bin_adder

master:$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

bin_adder:$(OBJS2)
	$(CC) $(CFLAGS) -o $@ $(OBJS2)	

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f master bin_adder *o number_list
