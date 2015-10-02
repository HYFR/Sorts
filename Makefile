CLAFSG = -Wall -g

<<<<<<< HEAD
CC=gcc

functions: functions.o main.o
	$(CC) $(CFLAGS) functions.o main.o -lm -o functions

test_functions: functions.o test_functions.o
	$(CC) $(CFLAGS) functions.o test_functions.o -lm -o test_functions
	./test_functions

run: functions
	./functions

clean:
	rm -f functions test_functions *.o
=======
clean: rm -f filename
>>>>>>> 4acc762283c6d3c036d259e5ecb040c725ebf6d2
