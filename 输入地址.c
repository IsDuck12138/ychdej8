#include"ͷ�ļ�.h"
void input()
{
	printf("Please enter the file path:");
	scanf("%s", &path);
	int i=0;
	while (path[i]!=0)
	{
		if (path[i] == '\\')
			path[i] = '/';
		i++;
	}
}