#include"头文件.h"
#include<windows.h>
//D:\大作业\大作业样例\2023级课程项目及测试样例\demo2.txt
int open_read();//打开已有文件夹
int open_write();//新建并打开文件夹
void ReadUnzip();//读取并解压JSON文件
void input();//输入地址
void menu();//菜单
int option();//选择
int write();//写入
void ReadUnzip();//解压JSON
void zip();//压缩JSON
int check();//检查JSON格式
int main()
{
	//SetConsoleOutputCP(65001);//调整编码（防止记事本出现乱码）
flag1:	menu();
	int op = option();
	if (op == 1)
	{
		input();
		open_read();
		zip();
		ReadUnzip();
		check();
		system("pause");
		system("cls");
	}//读取
	if (op == 2)
	{
		input();
		open_read();
		zip();
		check();
		system("pause");
		system("cls");
	}
	if (op == 3)
	{
		input();
		open_read();
		zip();
		ReadUnzip();
		check();
		system("pause");
		system("cls");
	}//写入
	goto flag1;
	fclose(pf);
}