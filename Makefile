CC = gcc
TARGET = main
OBJECTS = main.c manager.o fruit.o

clean:
	rm *.o $(TARGET)

$(TAGET) : $(OBJECTS)
	$(CC) -o $@ $^

