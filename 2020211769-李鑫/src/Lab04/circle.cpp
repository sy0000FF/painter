#include<iostream>
#include<graphics.h>
#include"circle.h"




Circle::Circle(int radius) {
	this->radius = radius;
}


Circle::Circle() {
	radius = 50;
	x1 = 100, y1 = 200;
	newRadius = 0;
	numberofobjects++;
	color1 = EGERGB(0, 0, 0);
	color2 = EGERGB(255, 0, 0);
	color3 = EGERGB(255, 255, 0);
};

int Circle::getx1()const {
	return x1;
}

int Circle::gety1()const {
	return y1;
}

int Circle::getradius() {
	return radius;
}


int Circle::numberofobjects = 0;
int Circle::getNumberofobjects() { return numberofobjects; }

Circle::Circle(const Circle& p) {
	this->x1 = p.x1;
	this->y1 = p.y1;
	this->radius = p.radius;
	newRadius = 0;
	std::cout << "构造函数已复制" << std::endl;
}


void Circle::draw() {

	for (; is_run(); delay_fps(60))
	{
		while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
		{
			msg = getmouse();//将鼠标信息存入鼠标结构体
		}
		if ((int)msg.is_down() && (int)msg.x >= 400 && (int)msg.y >= 100) {
			this->x1 = (int)msg.x;
			this->y1 = (int)msg.y;
			xyprintf(600, 600, "x = %10d  y = %10d",
				msg.x, msg.y);
			fs::path file1{ "C:/Users/Drose/source/repos/painter2/sanjin.txt" };
			std::ofstream op;
			op.open(file1, std::ios::app);
			if (!op) {
				cleardevice();
				setfont(50, 25, "楷体");
				xyprintf(750, 350, "未能成功打开文件");
			}
			op << Circle_type << std::endl;
			op << msg.x << " " << msg.y << " " << radius << std::endl;
			op << sen << std::endl;
			fillellipse(x1, y1, 50, 50);
			Point s1;
			s1.getPointx() = x1;
			x1++;
			s1.getPointy() = y1;
			y1++;
			op.close();
		}

		if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "点击右上角×以关闭程序");
		}

	}
};


int Circle::set(int newRadius) {
	newRadius = this->radius;
	return newRadius;
}

Circle::~Circle() {
	std::cout << "Circle函数被销毁" << std::endl;
	numberofobjects--;
}

bool Circle::operator>(const Circle& e)const {
	if (this->radius > e.radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator>=(const Circle& e)const {
	if (this->radius >= e.radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator<(const Circle& e) const {
	if (this->radius < e.radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator<=(const Circle& e)const {
	if (this->radius <= e.radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator==(const Circle& e)const {
	if (this->x1 == e.x1 && this->y1 == e.y1 && this->radius == e.radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator!=(const Circle& e)const {
	if (this->x1 != e.x1 || this->y1 != e.y1 || this->radius != e.radius) {
		return true;
	}
	else {
		return false;
	}
}

//深拷贝
Circle& Circle::operator=(const Circle& e) {
	this->date = e.date;
	return *this;
}

int Circle::operator[](int index) {
	if (index == 0) {
		return x1;
	}
	if (index == 1) {
		return y1;
	}
	else {
		throw std::out_of_range("The index is" + std::to_string(index));
	}
}