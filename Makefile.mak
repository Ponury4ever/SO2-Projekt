CPP    = g++
RM     = rm -f
OBJS   = Queue.o \
         Matrix.o \
         Main.o

LIBS   =
CFLAGS =

.PHONY: Project.exe clean clean-after

all: Project.exe

clean:
	$(RM) $(OBJS) Project.exe

clean-after:
	$(RM) $(OBJS)

Project.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

Queue.o: Queue.cpp Queue.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Matrix.o: Matrix.cpp Matrix.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Main.o: Main.cpp Matrix.h Queue.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

