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
	std::cout << "构造函数已复制" << std::endl;
}


void environMent::drawingboard()
{
	initgraph(1500, 780);
	setbkcolor(WHITE);
	setcolor(BLACK);
	setfont(40, 20, "楷体");
	setcaption("帅哥的画板");
	xyprintf(50, 20, "帅哥的画板");
	setfont(40, 20, "楷体");
	xyprintf(800, 40, "框内为画图区域");
	line(400, 100, 400, 800);
	line(400, 100, 1500, 100);
	int ex[10]{ 400,800,260,800,260,720,400,720 ,400,800 };
	drawpoly(5, ex);
	setfont(30, 15, "楷体");
	const char* w{ "退出画板" };
	outtextxy(270, 740, w);

}
environMent::~environMent() {
	std::cout << "environMent函数被销毁" << std::endl;
};
