#include"ͷ�ļ�.h"
void ReadUnzip()
{
	int color = 1;
	char a = 1;
	int i = 0;
	int flag = 1;
	FILE* pp;
	pp = fopen("yasuo", "r");
	FILE* p;
	char cc[100];
	if (n == 1)
	{
		printf("Please name the file address and name\n");
		scanf("%s", cc);
		p = fopen(cc, "w");
	}
	else
		p = fopen("jieya", "w");
	while (1)
	{
		char c = fgetc(pp);
		if (c == -1)
			break;
		//ָ����ɫ���ж�
		if (c == ':' || c == ',') {
			color = -color;
		}
		//��������ַ��Ƿ�Ϊ���������
		if (c == '"') {
			flag = -flag;
		}
		if (flag != -1) {
			//'{}'������
			if (c == '{') {
				i++;
				printf("\033[33m%c\n\033[0m", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					printf(" ");
					fprintf(p, " ");
				}
			}
			else if (c == '}') {
				i--;
				printf("\n");
				fprintf(p, "\n");
				for (int n = 0; n < i * 4; n++) {
					printf(" ");
					fprintf(p, " ");
				}
				printf("\033[33m%c\033[0m", c);
				fprintf(p, "% c", c);
			}

			//'[]'������
			else if (c == '[') {
				i++;
				printf("\033[35m%c\n \033[0m", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					printf(" ");
					fprintf(p, " ");
				}
			}
			else if (c == ']') {
				i--;
				printf("\n");
				fprintf(p, "\n");
				for (int n = 0; n < i * 4; n++) {
					printf(" ");
					fprintf(p, " ");
				}
				printf("\033[35m%c\033[0m", c);
				fprintf(p, "% c", c);
			}
			//������������
			else if (c == ',') {
				printf("%c\n", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					printf(" ");
					fprintf(p, " ");
				}
			}

			//':'��Ŀո�
			else if (c == ':')
			{
				printf(": ");
				fprintf(p, ":  ");
			}
			//�������ַ������
			else
			{
				printf("%c", c);
				fprintf(p, "% c", c);
			}
		}
		else {
			if (color == 1) {
				printf("\033[34m%c\033[0m", c);
				fprintf(p, "% c", c);
			}
			else {
				printf("%c", c);
				fprintf(p, "% c", c);
			}
		}
		a = c;
	}
}