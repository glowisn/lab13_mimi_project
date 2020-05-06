CC = gcc
TARGET = main
DTARGET = main_debug
OBJECTS = main.c manager.o fruit.o

clean:
	rm *.o $(TARGET)

$(TAGET) : $(OBJECTS)
	$(CC) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) -DDEBUG -o $@ $^
