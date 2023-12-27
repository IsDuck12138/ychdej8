#include"м╥нд╪Ч.h"
int open_write()
{
	pf = fopen(path, "w");
	if (pf == NULL)
	{
		printf("Create file failed\n");
		return 0;
	}
	printf("plese input the context\n");
	return 0;
}