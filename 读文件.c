#include"м╥нд╪Ч.h"
void read()
{
	system("cls");
	while (1)
	{
		char c = fgetc(pf);
		if (c == -1)
			break;
		printf("%c", c);
	}
}