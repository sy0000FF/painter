#include<graphics.h>
#include<iostream>
#include"controller.h"



environMent::environMent() {
	numberofobjects++;
}

int environMent::numberofobjects{ 0 };
int environMent::getNumberofobjects() {
	return numberofobjects;
}


environMent::environMent(const environMent& p) {
	std::cout << "���캯���Ѹ���" << std::endl;
}


void environMent::drawingboard()
{
	initgraph(1500, 780);
	setbkcolor(WHITE);
	setcolor(BLACK);
	setfont(40, 20, "����");
	setcaption("˧��Ļ���");
	xyprintf(50, 20, "˧��Ļ���");
	setfont(40, 20, "����");
	xyprintf(800, 40, "����Ϊ��ͼ����");
	line(400, 100, 400, 800);
	line(400, 100, 1500, 100);
	int ex[10]{ 400,800,260,800,260,720,400,720 ,400,800 };
	drawpoly(5, ex);
	setfont(30, 15, "����");
	const char* w{ "�˳�����" };
	outtextxy(270, 740, w);

}
environMent::~environMent() {
	std::cout << "environMent����������" << std::endl;
};
