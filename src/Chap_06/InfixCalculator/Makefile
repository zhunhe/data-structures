a.out: 6.4_InfixCalculatorMain.o 6.4_InfixCalculator.o 6.4_InfixToPostfix.o 6.4_PostCalculator.o 6.4_ListBaseStack.o
	gcc -o a.out 6.4_InfixCalculatorMain.o 6.4_InfixCalculator.o 6.4_InfixToPostfix.o 6.4_PostCalculator.o 6.4_ListBaseStack.o

6.4_InfixCalculatorMain.o: 6.4_InfixCalculatorMain.c
	gcc -c -o 6.4_InfixCalculatorMain.o 6.4_InfixCalculatorMain.c

6.4_InfixCalculator.o: 6.4_InfixCalculator.c
	gcc -c -o 6.4_InfixCalculator.o 6.4_InfixCalculator.c

6.4_InfixToPostfix.o: 6.4_InfixToPostfix.c
	gcc -c -o 6.4_InfixToPostfix.o 6.4_InfixToPostfix.c

6.4_PostCalculator.o: 6.4_PostCalculator.c
	gcc -c -o 6.4_PostCalculator.o 6.4_PostCalculator.c

6.4_ListBaseStack.o: 6.4_ListBaseStack.c
	gcc -c -o 6.4_ListBaseStack.o 6.4_ListBaseStack.c

clean:
	rm *.o a.out
