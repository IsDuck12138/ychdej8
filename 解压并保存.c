#include"ͷ�ļ�.h"
void saveUzip()
{
	int i = 0;
	int flag = 1;
	FILE* pp;
	pp = fopen("yasuo", "r");
	FILE* p;
	char cc[100];
	printf("������Ҫ����ĵ�ַ��\n");
	scanf("%s", cc);
	p = fopen(cc, "w");
	printf("\n");
	while (1)
	{
		char c = fgetc(pp);
		if (c == -1)
			break;
		//��������ַ��Ƿ�Ϊ���������
		if (c == '"') {
			flag = -flag;
		}
		if (flag != -1) {
			//'{}'������
			if (c == '{') {
				i++;
				//printf("%c\n", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
			}
			else if (c == '}') {
				i--;
				//printf("\n");
				fprintf(p, "\n");
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
				//printf("%c", c);
				fprintf(p, "% c", c);
			}

			//'[]'������
			else if (c == '[') {
				i++;
				//printf("%c\n", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
			}
			else if (c == ']') {
				i--;
				//printf("\n");
				fprintf(p, "\n");
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
				//printf("%c", c);
				fprintf(p, "% c", c);
			}
			//������������
			else if (c == ',') {
				//printf("%c\n", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
			}

			//':'��Ŀո�
			else if (c == ':')
			{
				//printf(": ");
				fprintf(p, ":  ");
			}
			//�������ַ������
			else
			{
				//printf("%c", c);
				fprintf(p, "% c", c);
			}
		}
		else {
			//printf("%c", c);
			fprintf(p, "% c", c);
		}

	}
	fclose(pp);
	fclose(p);
}