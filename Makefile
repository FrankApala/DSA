C_SOURCE=linkedlist.c
OBJ=$(C_SOURCE:.c=.o)

%.o: %.c
	gcc -c $< -o $@

