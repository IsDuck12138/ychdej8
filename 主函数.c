#include"ͷ�ļ�.h"
int open_read();//�������ļ���
int open_write();//�½������ļ���
void read();//�Ķ�����
void input();//�����ַ
void menu();//�˵�
int option();
void write();
//int check();
int main()
{
	//SetConsoleOutputCP(65001);//�������루��ֹ���±��������룩
	menu();
	int op = option();
	if (op==1)
	{
		input();
		open_read();
		//check();
		read();
		return 0;
	}//��ȡ
	if (op==2)
	{
		input();
		open_write();
		write();
		printf("Successfully write file");
		return 0;
	}//д��
	fclose(pf);
}