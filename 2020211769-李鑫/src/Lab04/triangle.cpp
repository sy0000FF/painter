#include<iostream>
#include<graphics.h>
#include"triangle.h"

Triangle::Triangle() {
	x = 100; y = 200;	x2 = x + 80; y2 = y; x3 = x + 80; y3 = y + 80;
	numberofobjects++;
}

int Triangle::numberofobjects{ 0 };
int Triangle::getNumberofobjects() {
	return numberofobjects;
}

Triangle::Triangle(const Triangle& p) {
	this->x = p.x;
	this->y = p.y;
	this->x2 = p.x2;
	this->y2 = p.y2;
	this->x3 = p.y3;
	this->y3 = p.y3;
	std::cout << "构造函数已复制" << std::endl;
}


void Triangle::draw() {
	mouse_msg msg = { 0 };
	for (; is_run(); delay_fps(60))
	{

		while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
		{
			//msg = getmouse();//将鼠标信息存入鼠标结构体
			msg = getmouse();
		}
		if ((int)msg.is_down() && (int)msg.x >= 400 && (int)msg.y >= 100) {
			x = msg.x;
			y = msg.y;
			int pt[6]{ x,y,x,y + 80,x + 80,y + 80 };

			fs::path file1{ "C:/Users/Drose/source/repos/painter2/sanjin.txt" };
			std::ofstream op;
			op.open(file1, std::ios::app);
			if (!op) {
				cleardevice();
				setfont(50, 25, "楷体");
				xyprintf(750, 350, "未能成功打开文件");
			}
			op << Triangle_type << std::endl;
			op << msg.x << " " << msg.y << " " << msg.x << " " << msg.y + 80 << " " << msg.x + 80 << " " << msg.y + 80 << std::endl;
			op << sen << std::endl;
			fillpoly(3, pt);
			Point s3;
			s3.getPointx() = x;
			s3.getPointy() = y;
			op.close();
		}
		if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "点击右上角×以关闭程序");
		}
	}
}

Triangle::~Triangle() {
	std::cout << "Triangle函数被销毁" << std::endl;
};

bool Triangle::operator>(const Triangle& e)const {
	if (((this->x3 - this->x2) * (this->y2 - this->y)) > ((e.x3 - e.x2) * (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::operator<(const Triangle& e)const {
	if (((this->x3 - this->x2) * (this->y2 - this->y)) < ((e.x3 - e.x2) * (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::operator>=(const Triangle& e)const {
	if (((this->x3 - this->x2) * (this->y2 - this->y)) >= ((e.x3 - e.x2) * (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::operator<=(const Triangle& e)const {
	if (((this->x3 - this->x2) * (this->y2 - this->y)) <= ((e.x3 - e.x2) * (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::operator==(const Triangle& e) const {
	if (this->x == e.x && this->y == e.y) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::operator!=(const Triangle& e)const {
	if (this->x != e.x || this->y != e.y) {
		return true;
	}
	else {
		return false;
	}
}



Triangle& Triangle::operator=(const Triangle& e) {
	this->date = e.date;
	return *this;
}

int Triangle::operator[](int index) {
	if (index == 0) {
		return x;
	}if (index == 1) {
		return y;
	}if (index == 2) {
		return x2;
	}if (index == 3) {
		return y2;
	}if (index == 4) {
		return x3;
	}if (index == 5) {
		return y3;
	}
}