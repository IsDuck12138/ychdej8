#include"ͷ�ļ�.h"
#include<windows.h>
//D:\����ҵ\����ҵ����\2023���γ���Ŀ����������\demo2.txt
int open_read();//�������ļ���
int open_write();//�½������ļ���
void ReadUnzip();//��ȡ����ѹJSON�ļ�
void input();//�����ַ
void menu();//�˵�
void saveUnzip();
int option();//ѡ��
void ReadUnzip();//��ѹJSON
void zip();//ѹ��JSON
int check();//���JSON��ʽ
int main()
{
	//SetConsoleOutputCP(65001);//�������루��ֹ���±��������룩
flag1:	menu();
	int op = option();
	if (op == 1)
	{
		input();
		check();
		open_read();
		zip();
		ReadUnzip();
		system("pause");
		system("cls");
	}//��ȡ
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
	}//д��
	goto flag1;
	fclose(pf);
}