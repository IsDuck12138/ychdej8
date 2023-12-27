//#include "头文件.h"
//int check()
//{
//	int i = 0;
//	char stack[100] = { 0 };
//	int count = 0;
//	while (1)
//	{
//		char c = fgetc(pf);
//		if (c == -1)
//			break;
//		if (c == '{' || c == '(' || c == '[')
//		{
//			stack[i] = c;
//			i++;
//			count++;
//		}//入栈
//		if (c == '}' || c == ')' || c == ']')
//		{
//			if (c == '}' && stack[i] == '{')
//			{
//				stack[i] = 0;
//				i--;
//			}
//			if (c == ')' && stack[i] == '(')
//			{
//				stack[i] = 0;
//				i--;
//			}
//			if (c == ']' && stack[i] == '[')
//			{
//				stack[i] = 0;
//				i--;
//			}
//			if (c == '}' && (stack[i] == ']' || stack[i] == ')'))
//			{
//				printf("%dwrong", count);
//				return 0;
//			}
//			if (c == '(' && (stack[i] == ']' || stack[i] == '}'))
//			{
//				printf("%dwrong", count);
//				return 0;
//			}			
//			if (c == ']' && (stack[i] == '}' || stack[i] == ')'))
//			{
//				printf("%dwrong", count);
//				return 0;
//			}
//		}
//
//	}
//	if (stack[1] == 0)
//		printf("pass test");
//	else
//		printf("test do not pass");
//	return 0;
//
//}