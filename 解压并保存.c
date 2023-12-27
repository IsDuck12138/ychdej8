#include"头文件.h"
void saveUzip()
{
	int i = 0;
	int flag = 1;
	FILE* pp;
	pp = fopen("yasuo", "r");
	FILE* p;
	char cc[100];
	printf("请输入要保存的地址：\n");
	scanf("%s", cc);
	p = fopen(cc, "w");
	printf("\n");
	while (1)
	{
		char c = fgetc(pp);
		if (c == -1)
			break;
		//检测特殊字符是否为输入的文字
		if (c == '"') {
			flag = -flag;
		}
		if (flag != -1) {
			//'{}'的缩进
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

			//'[]'的缩进
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
			//‘，’的缩进
			else if (c == ',') {
				//printf("%c\n", c);
				fprintf(p, "% c\n", c);
				for (int n = 0; n < i * 4; n++) {
					//printf(" ");
					fprintf(p, " ");
				}
			}

			//':'后的空格
			else if (c == ':')
			{
				//printf(": ");
				fprintf(p, ":  ");
			}
			//非特殊字符的输出
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