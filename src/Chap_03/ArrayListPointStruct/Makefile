a.out: 3.2_PointListMain.o 3.2_Point.o 3.2_ArrayList.o
	gcc -o a.out 3.2_PointListMain.o 3.2_Point.o 3.2_ArrayList.o

3.2_PointListMain.o: 3.2_PointListMain.c
	gcc -c -o 3.2_PointListMain.o 3.2_PointListMain.c

3.2_Point.o: 3.2_Point.c
	gcc -c -o 3.2_Point.o 3.2_Point.c

3.2_ArrayList.o: 3.2_ArrayList.c
	gcc -c -o 3.2_ArrayList.o 3.2_ArrayList.c

clean:
	rm *.o a.out
