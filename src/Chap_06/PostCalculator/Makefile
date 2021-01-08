a.out: 6.4_PostCalculatorMain.o 6.4_PostCalculator.o 6.4_ListBaseStack.o
	gcc -o a.out 6.4_PostCalculatorMain.o 6.4_PostCalculator.o 6.4_ListBaseStack.o

6.4_PostCalculatorMain.o: 6.4_PostCalculatorMain.c
	gcc -c -o 6.4_PostCalculatorMain.o 6.4_PostCalculatorMain.c

6.4_PostCalculator.o: 6.4_PostCalculator.c
	gcc -c -o 6.4_PostCalculator.o 6.4_PostCalculator.c

6.4_ListBaseStack.o: 6.4_ListBaseStack.c
	gcc -c -o 6.4_ListBaseStack.o 6.4_ListBaseStack.c

clean:
	rm *.o a.out
