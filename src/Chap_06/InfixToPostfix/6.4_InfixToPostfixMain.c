#include <stdio.h>
#include "6.4_InfixToPostfix.h"

int main(void)
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	printf("before %s \n", exp1);
	printf("before %s \n", exp2);
	printf("before %s \n", exp3);
	printf("\n");

	ConvToRPNExp(exp1);
	ConvToRPNExp(exp2);
	ConvToRPNExp(exp3);

	printf("after %s \n", exp1);
	printf("after %s \n", exp2);
	printf("after %s \n", exp3);

	return 0;
}
