BIN := hello.out
SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)

CPPFLAGS += -std=c++11

default: build exec

build: $(BIN)

exec: $(BIN)
	./$(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CPPFLAGS) -o $@ $<

auto:
	autocmd -v -t makefile -t "\.cpp$$" -- make exec

.PHONY: default build exec auto
