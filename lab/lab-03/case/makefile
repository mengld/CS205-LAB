CC = g++
TARGET = hello
OBJ = main.o printhello.o factorial.o

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

main.o: main.cpp
	$(CC) -c main.cpp

printhello.o: printhello.cpp
	$(CC) -c printhello.cpp

factorial.o: factorial.cpp
	$(CC) -c factorial.cpp