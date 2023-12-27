#include"м╥нд╪Ч.h"
int open_read()
{
	pf = fopen(path, "r");
	if (pf == NULL)
	{
		printf("Error opening file\n");
		return 0;
	}
	printf("Successfully open file\n");
	system("pause");
	return 0;
}