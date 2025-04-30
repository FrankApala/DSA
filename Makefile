C_SOURCE=linkedlists.c
CPP_SOURCE=linkedlists.cpp

OBJ=$(C_SOURCE:.c=.o)
OBJ_CPP=$(CPP_SOURCE:.cpp=.o)
all: linkedlist
	./linkedlist


$(OBJ): $(C_SOURCE)
	gcc -c  $^ -o $@

linkedlist: $(OBJ)
	gcc $^ -o $@

run: linkedlist

clean:
	rm -f *.o linkedlist 
	@echo "Cleaned up the project directory."

.PHONY: clean run