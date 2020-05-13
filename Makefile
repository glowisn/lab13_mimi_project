CC = gcc
TARGET = main
DTARGET = main_debug
OBJECTS = main.c manage.o fruit.o

clean:
	rm *.o $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) -DDEBUG -o $@ $^

