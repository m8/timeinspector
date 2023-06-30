.PHONY: clean

CXX_FLAGS = 
 
SRCS = $(wildcard *.cpp)
PROGS = $(patsubst %.cpp,%,$(SRCS))

all: clean $(PROGS)

%: %.cpp
	$(CXX) $(CXX_FLAGS) -o $@.out $<

clean:
	rm *.out
