#include<graphics.h>
#include<stdio.h>
#include"mod2.h"
void mod2(int c) {
	int x;
	bool flag = false;

	cleardevice();
	while (true) {/*whileѭ�������û��ظ����иû������*/
		getch();
		if (c == 0) {
			xyprintf(10, 80, "����ݲ˵�ѡ��������еĲ���");
			xyprintf(10, 100, "1�������Ļ  2������  3���˳�  7���ػ�");
			getch();/*�ȴ��û�����*/
		}
		if (c == 1) {
			xyprintf(10, 80, "����ݲ˵�ѡ��������еĲ���");
			xyprintf(10, 100, "1�������Ļ  2������  3���˳�  ");
			getch();/*�ȴ��û�����*/
		}
		int y = getch();/*���û������ֵ����y*/
		switch (y) {/*switch��䣬�����û�����ֵ���ж�����ʾ��ͬѡ��*/
		case 49:
			cleardevice();/*�����Ļ*/
			xyprintf(10, 100, "�����Ļ");
			cleardevice();
			getch();/*�ȴ��û�����*/
			break;/*��case��ֹ*/
		case 50:
			cleardevice();
			xyprintf(10, 100, "����ݲ˵�ѡ��������еĲ���");
			xyprintf(10, 120, "4����ɫ");
			xyprintf(10, 140, "5��ͼ��");
			xyprintf(10, 160, "6���˳�");
			getch();/*�ȴ��û�����*/
			x = getch();/*���û�����ֵ����x*/
			if (x == 52) {
				cleardevice();/*�����Ļ*/
				xyprintf(10, 120, "4����ɫ");
				getch();/*�ȴ�����*/
				cleardevice();/*�����Ļ*/
			}
			if (x == 53) {
				flag = true;
				cleardevice();/*�����Ļ*/
				xyprintf(10, 60, "����ֵ�Խ�������");
				xyprintf(10, 120, "1=�������");
				xyprintf(10, 140, "2=��Բ");
				xyprintf(10, 160, "3=����");
				xyprintf(10, 180, "�������εĸ����������꣬����������֮����Ӣ�Ķ��Ÿ���");
				xyprintf(10, 200, "����������ɺ�������enter���Ի���ͼ��");
				getch();
				
				cleardevice();
				mod3();
				break;
				cleardevice();/*�����Ļ*/
			}
			if (x == 54) {
				flag = true;
				cleardevice();
				xyprintf(10, 120, "6�����˳�����");
				getch();
			}

			break;
		case 51:
			flag = true;
			cleardevice();
			xyprintf(10, 140, "���˳�����");
			getch();
			break;/*������case*/
		case 55:
			cleardevice();
			xyprintf(10, 100, "����ݲ˵�ѡ��������еĲ���");
			xyprintf(10, 120, "4����ɫ");
			xyprintf(10, 140, "5��ͼ��");
			xyprintf(10, 160, "6���˳�");
			getch();/*�ȴ��û�����*/
			x = getch();/*���û�����ֵ����x*/
			if (x == 52) {
				cleardevice();/*�����Ļ*/
				xyprintf(10, 120, "4����ɫ");
				getch();/*�ȴ�����*/
				cleardevice();/*�����Ļ*/
			}
			if (x == 53) {
				cleardevice();/*�����Ļ*/
				xyprintf(10, 160, "5��ͼ��");
				getch();/*�ȴ�����*/
				cleardevice();/*�����Ļ*/
			}
			if (x == 54) {
				flag = true;
				cleardevice();
				xyprintf(10, 120, "6�����˳�����");
				getch();
			}
			break;
		}
		if (flag) {
			break;
		}
	}

}