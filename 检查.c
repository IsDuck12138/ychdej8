#include"ͷ�ļ�.h"
int check()
{
	temp();
	FILE* z;
	z = fopen("yasuo", "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		return 0;
	}
	printf("���ļ��ɹ�\n");
	int i = 0;
	char stack[100] = { 0 };
	int count = 0;//����
	int flag = 1, data = 1;//������ݵĿ�ʼ����������
	char a = '{';
	while (1)
	{
		char c = fgetc(z);
		if (c == -1)
			break;
		if (c == '{' || c == '}'|| c == '[' || c == ']' || c == ',')count++;
		if (c == '"')data = -data;//�������
		if (c != '{' && c != '}' && c != '[' && c != ']' && c != ':' && c != ',' && c != '"' && data == 1&&c<='0'&&c>='9') {
			printf("��%d��%c����λ�ô���\n���δͨ��\n",count,c);
			return 0;
		}
		if (c == '"' && data == -1 && a != '{' && a != '[' && a != ',' && a != ':') {
			printf("��%d��%cǰû��,\n���δͨ��\n", count, c);
			return 0;
		}
		//����ʹ��
		if (c == ':' && a != '"'&&data==1) {
			printf("��%d��%cʹ�ô���\n���δͨ��\n",count,c);
			return 0;
		}
		if (c == '{')
		{
			stack[i] = c;
			i++;
		}//��ջ
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
					printf("\n��%d�С�%c����Դ���\n", count, stack[i - 1]);
				return 0;
			}
		}
		a = c;//��¼ ��һ���ַ�
	}
	if (stack[0] == 0)
		printf("\n���ͨ��\n");
	else
		printf("\n���δͨ��\n");
	return 0;
	fclose(z);
}