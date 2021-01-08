#include <string.h>
#include <ctype.h>
#include "6.4_ListBaseStack.h"

int EvalRPNExp(char exp[])
{
	Stack stack;
	int expLen = strlen(exp);
	char tok, op1, op2;

	StackInit(&stack);

	for (int i = 0; i < expLen; i++)
	{
		tok = exp[i];

		if (isdigit(tok))
		{
			SPush(&stack, tok - '0');     // ���ڷ� ��ȯ�Ͽ� PUSH!
		}
		else
		{
			op2 = SPop(&stack);     // ���� ���� ���� �� ��° �ǿ�����!
			op1 = SPop(&stack);

			switch (tok)
			{
				case '+':
					SPush(&stack, op1+op2);
					break;
				case '-':
					SPush(&stack, op1-op2);
					break;
				case '*':
					SPush(&stack, op1*op2);
					break;
				case '/':
					SPush(&stack, op1/op2);
					break;
			}
		}
	}
	return SPop(&stack);
}
