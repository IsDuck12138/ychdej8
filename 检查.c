#include"头文件.h"
int check()
{
	temp();
	FILE* z;
	z = fopen("yasuo", "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		return 0;
	}
	printf("打开文件成功\n");
	int i = 0;
	char stack[100] = { 0 };
	int count = 0;//行数
	int flag = 1, data = 1;//检测数据的开始结束和内容
	char a = '{';
	while (1)
	{
		char c = fgetc(z);
		if (c == -1)
			break;
		if (c == '{' || c == '}'|| c == '[' || c == ']' || c == ',')count++;
		if (c == '"')data = -data;//检测引号
		if (c != '{' && c != '}' && c != '[' && c != ']' && c != ':' && c != ',' && c != '"' && data == 1&&c<='0'&&c>='9') {
			printf("第%d行%c所在位置错误\n检查未通过\n",count,c);
			return 0;
		}
		if (c == '"' && data == -1 && a != '{' && a != '[' && a != ',' && a != ':') {
			printf("第%d行%c前没有,\n检查未通过\n", count, c);
			return 0;
		}
		//：的使用
		if (c == ':' && a != '"'&&data==1) {
			printf("第%d行%c使用错误\n检查未通过\n",count,c);
			return 0;
		}
		if (c == '{')
		{
			stack[i] = c;
			i++;
		}//入栈
		if (c == '[')
		{
			stack[i] = c;
			i++;
		}
		if (c == '}' || c == ']')
		{
			if (c == '}' && stack[i - 1] == '{')
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
					printf("\n第%d行“%c”配对错误\n", count, stack[i - 1]);
				return 0;
			}
		}
		a = c;//记录 上一个字符
	}
	if (stack[0] == 0)
		printf("\n检查通过\n");
	else
		printf("\n检查未通过\n");
	return 0;
	fclose(z);
}