CC = g++ 
CC_Flags = -w

SOURCES = $(wildcard *.cpp)
EXEC = $(SOURCES:.cpp=.exe)

all: $(EXEC)

%.exe: %.cpp
	$(CC) $(CC_FLAGS) $< -o $@

.PHONY: clean all

clean: 
	rm -f $(EXEC) 

