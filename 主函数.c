#include"头文件.h"
int open_read();//打开已有文件夹
int open_write();//新建并打开文件夹
void read();//阅读函数
void input();//输入地址
void menu();//菜单
int option();
void write();
//int check();
int main()
{
	//SetConsoleOutputCP(65001);//调整编码（防止记事本出现乱码）
	menu();
	int op = option();
	if (op==1)
	{
		input();
		open_read();
		//check();
		read();
		return 0;
	}//读取
	if (op==2)
	{
		input();
		open_write();
		write();
		printf("Successfully write file");
		return 0;
	}//写入
	fclose(pf);
}