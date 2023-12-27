#include"Í·ÎÄ¼þ.h"
void zip()
{
	//fseek(pf, 0, SEEK_SET);
	//char a[100];
	int i = 0;
	if (n == 2)
	{
		printf("Please name the file address and name");
		scanf("%s", &d);
		b = fopen(d, "w");
	}
	else
		b = fopen("yasuo", "w");
	while (d[i] != 0) {
		if (d[i] == '\\')
			d[i] = '/';
		i++;
	}

	while (1)
	{
		char c = fgetc(pf);
		if (c == -1)
			break;
		if (c == '\n' || c == ' ') {
		}
		else {
			//printf("%c", c);
			fputc(c,b);
			
		}
	}
	fclose(b);
}
