C_SOURCE=linkedlists.c
OBJ=$(C_SOURCE:.c=.o)


$(OBJ): $(C_SOURCE)
	gcc -c  $^

linkedlist: $(OBJ)
	gcc $^ -o $@

run: linkedlist
	./linkedlist

clean:
	rm -f *.o linkedlist 
	@echo "Cleaned up the project directory."

.PHONY: clean run