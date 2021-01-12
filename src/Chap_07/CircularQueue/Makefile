a.out: 7.2_CircularQueueMain.o 7.2_CircularQueue.o
	gcc -o a.out 7.2_CircularQueueMain.o 7.2_CircularQueue.o

7.2_CircularQueueMain.o: 7.2_CircularQueueMain.c
	gcc -c -o 7.2_CircularQueueMain.o 7.2_CircularQueueMain.c

7.2_CircularQueue.o: 7.2_CircularQueue.c
	gcc -c -o 7.2_CircularQueue.o 7.2_CircularQueue.c

clean:
	rm *.o a.out
