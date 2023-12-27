#include"头文件.h"
int check()
{
	fseek(b, 0, SEEK_SET);
	int i = 0;
	char stack[100] = { 0 };
	int count = 0;
	while (1)
	{
		char c = fgetc(pf);
		if (c == -1)
			break;
		if (c == '{' || c == '(' || c == '[')
		{
			stack[i] = c;
			i++;
			count++;
		}//入栈
		if (c == '}' || c == ')' || c == ']')
		{
			if (c == '}' && stack[i - 1] == '{')
			{
				stack[i - 1] = 0;
				i--;
			}
			else if (c == ')' && stack[i - 1] == '(')
			{
				stack[i - 1] = 0;
				i--;
			}
			else if (c == ']' && stack[i - 1] == '[')
			{
				stack[i - 1] = 0;
				i--;
			}
			else
			{
				printf("\nThe %d %c match error\n", count,stack[i-1]);
				return 0;
			}
		}

	}
	if (stack[0] == 0)
		printf("\npass test\n");
	else
		printf("\ntest do not pass\n");
	return 0;
}
