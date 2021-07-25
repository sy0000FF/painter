#include<iostream>
#include"rectangle.h"
#include<graphics.h>

Rectangle1::Rectangle1() {
	x = 100; y = 200; x2 = x + 60; y2 = y + 60;
	numberofobjects++;
}

int Rectangle1::numberofobjects{ 0 };
int Rectangle1::getNumberofobjects() {
	return numberofobjects;
}


Rectangle1::Rectangle1(const Rectangle1& p) {
	x = 0; y = 0;
	this->x = p.x;
	this->y = p.y;
	this->x2 = p.x2;
	this->y2 = p.y2;
	std::cout << "构造函数已复制" << std::endl;
}

void Rectangle1::draw() {
	mouse_msg msg = { 0 };

	for (; is_run(); delay_fps(60))
	{

		while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
		{
			msg = getmouse();//将鼠标信息存入鼠标结构体
		}
		if ((int)msg.is_down() && (int)msg.x >= 400 && (int)msg.y >= 100) {
			x = msg.x;
			y = msg.y;
			int pt[8]{ x,y,x + 60,y,x + 60,y + 40,x,y + 40 };


			fs::path file1{ "C:/Users/Drose/source/repos/painter2/sanjin.txt" };
			std::ofstream op;
			op.open(file1, std::ios::app);
			if (!op) {
				cleardevice();
				setfont(50, 25, "楷体");
				xyprintf(750, 350, "未能成功打开文件");
			}
			op << Rectangle_type << std::endl;
			op << msg.x << " " << msg.y << " " << msg.x + 60 << " " << msg.y + 40 << std::endl;
			op << sen << std::endl;
			fillpoly(4, pt);
			Point s2;
			s2.getPointx() = x;
			s2.getPointy() = y;
			op.close();
		}
		if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "点击右上角×以关闭程序");
		}
	}
}

Rectangle1::~Rectangle1() {
	std::cout << "Rectangle1函数被销毁" << std::endl;
};

bool Rectangle1::operator>(const Rectangle1& e)const {
	if (((this->x2 - this->x) + (this->y2 - this->y)) > ((e.x2 - e.x) + (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle1::operator<(const Rectangle1& e)const {
	if (((this->x2 - this->x) + (this->y2 - this->y)) < ((e.x2 - e.x) + (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle1::operator<=(const Rectangle1& e)const {
	if (((this->x2 - this->x) + (this->y2 - this->y)) <= ((e.x2 - e.x) + (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle1::operator>=(const Rectangle1& e)const {
	if (((this->x2 - this->x) + (this->y2 - this->y)) >= ((e.x2 - e.x) + (e.y2 - e.y))) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle1::operator==(const Rectangle1& e)const {
	if (this->x == e.x && this->y == e.y) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle1::operator!=(const Rectangle1& e)const {
	if (this->x != e.x || this->y != e.y) {
		return true;
	}
	else {
		return false;
	}
}


//深拷贝
Rectangle1& Rectangle1::operator=(const Rectangle1& e) {
	this->date = e.date;
	return *this;
}

int Rectangle1::operator[](int index) {
	if (index == 0) {
		return x;
	}
	if (index == 1) {
		return y;
	}
	if (index == 2) {
		return x2;
	}
	if (index == 3) {
		return y2;
	}
	else {
		throw std::out_of_range("The index is" + std::to_string(index));
	}
}