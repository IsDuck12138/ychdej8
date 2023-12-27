#include"м╥нд╪Ч.h"
int write(char c)
{
	char a[100];
	FILE* b;
	int i=0;
	printf("Please name the file address and name");
	scanf("%s", &a);
	while (a[i] != 0) {
		if (a[i] == '\\')
			a[i] = '/';
		i++;
	}
	b = fopen(a, "w");
	while (1) {
		if (c == -1) {
			break;
		}
		fprintf(a, "%c", c);
	}
}