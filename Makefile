CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++14
LDFLAGS=
SOURCES=
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=openalarm

mkbin: 
	mkdir bin

all: mkbin $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
