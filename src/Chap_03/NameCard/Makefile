a.out: 3.2_NameCardMain.o 3.2_NameCard.o 3.2_ArrayList.o
	gcc -o a.out 3.2_NameCardMain.o 3.2_NameCard.o 3.2_ArrayList.o

3.2_NameCardMain.o: 3.2_NameCardMain.c
	gcc -c -o 3.2_NameCardMain.o 3.2_NameCardMain.c

3.2_NameCard.o: 3.2_NameCard.c
	gcc -c -o 3.2_NameCard.o 3.2_NameCard.c

3.2_ArrayList.o: 3.2_ArrayList.c
	gcc -c -o 3.2_ArrayList.o 3.2_ArrayList.c

clean:
	rm *.o a.out
