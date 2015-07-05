CC = gcc -c
CFLAG = -std=c99

ifdef DEBUG
CFLAG += -g
endif

main : main.o transfer.o
	$(CC) -o $@ $^

transfer.o : transfer.c
	$(CC) $< $(CFLAG) 


clean :
	$(RM) main *.o
