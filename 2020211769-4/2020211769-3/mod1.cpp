#include<graphics.h>
#include<stdio.h>
int mod1() {
	int c = 0;
	initgraph(640, 480);/*����EGE�߿�Ϊ640��480��������Ϊ�ޱ߿�ģʽ*/
	setcaption("���𻭰�");/*����EGE�������Ϊ���𻭰�*/
	setbkcolor(WHITE);/*���ñ�����ɫΪ��ɫ*/
	setcolor(BLACK);/*���û�����ɫΪ��ɫ*/
	setbkmode(TRANSPARENT);/*�������屳��ɫΪ͸��*/
	setfont(20, 0, "����");/*��������Ϊ40��С�Ϳ�������*/
	outtextxy(10, 20, "��ӭ�������𻭰�");
	outtextxy(10, 40, "����ݲ˵�ѡ��������еĲ���");
	outtextxy(10, 60, "1����ȡ�ļ�   2������ȡ�ļ�");
	outtextxy(10, 80, "����������ѡ��");/*�û������ַ�*/
	getch();
	int s = getch();/*�ȴ��û������ַ�*/

	if (s == 49)/*if��������жϣ���ʾ��ͬ����*/
	{
		c = 0;
		cleardevice();/*�����Ļ*/
		xyprintf(10, 100, "�Ѷ�ȡ�ļ�");
		getch();/*�ȴ��û�����*/
	}
	if (s == 50)
	{
		c = 1;
		cleardevice();
		xyprintf(10, 120, "δ��ȡ�ļ�");
		getch();/*�ȴ��û�����*/
	}

	return c;
}