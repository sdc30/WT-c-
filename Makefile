CFLAGS:=-Wall -g -c
CC=g++
OBJ=weighttracker.o weighttrackerlib.o file_loader.o gym_member.o
NAME=weighttracker

default: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

weighttracker.o: weighttracker.cpp weighttracker.hpp
	$(CC) $(CFLAGS) weighttracker.cpp

weighttrackerlib.o: weighttrackerlib.cpp weighttrackerlib.hpp
	$(CC) $(CFLAGS) weighttrackerlib.cpp

file_loader.o: file_loader.cpp file_loader.hpp
	$(CC) $(CFLAGS) file_loader.cpp

gym_member.o: gym_member.cpp gym_member.hpp
	$(CC) $(CFLAGS) gym_member.cpp

clean:
	rm default $(OBJ)
