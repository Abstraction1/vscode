CC=g++
CFLAGS=-c -Wall
LDFLAGS=
TARGET=clickme

SRC=/home/default/vscode/Herbert Shildt/Chapter6.2/src
TASKDIR=/home/default/vscode/Herbert Shildt/Chapter6.2/home

SOURCES=main.cpp 

OBJECTS=$(SOURCES:.cpp=.o)
PREFIX=/usr/local/bini

.PHONY: all clean install unistall

all: $(SOURCES) $(TARGET) 
clean:
	rm -rf $(TARGET) *.o \
	rm -rf src/*.o \
	rm -rf hometask/*.o
install:
	install $(TARGET) $(PREFIX)
inistall:
	rm -rf $(PREFIX)/$(TARGET)


$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
