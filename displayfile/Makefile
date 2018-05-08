CC = g++
CFLAGS = -Wall
DEPS = read_file.h
OBJ = read_file.o displayfile.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

displayfile: $(OBJ)
	g++ $(CFLAGS) -o $@ $^
