CC=g++
CFLAGS=-Wall
LDFLAGS=
SOURCES=
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=openalarm

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
