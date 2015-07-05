CC = gcc
CCFlag = -std=c99


ifdef $DEBUG
CCFlag += -g
endif

main : main.o 
	$(CC) -o $@ $< 

clean:
	$(RM) main *.o
