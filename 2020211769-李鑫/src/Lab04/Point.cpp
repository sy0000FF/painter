#include<graphics.h>
#include"Point.h"
#include<iostream>
#include<string>


Point::Point(int a, int b) {
	this->a = a; this->b = b;
	numberofobjects++;
};



Point::Point() {
	this->a = a; this->b = b;
};


int Point::numberofobjects{ 0 };

int Point::getNumberofobjects() {
	return numberofobjects;
}

Point::Point(const Point& p) {
	this->a = p.a;
	this->b = p.b;
	std::cout << "构造函数已复制" << std::endl;
}


int Point::setPointx(int a) {
	a = this->a;
	return a;
}
int Point::setPointy(int b) {
	b = this->b;
	return b;
}

int& Point::getPointx() {
	a = getx();
	return a;

}
int& Point::getPointy() {
	b = gety();
	return b;
}



Point Point::operator+(const Point& e) {
	this->a = (this->a + e.a) / 2;
	this->b = (this->b + e.b) / 2;
	return *this;
}

bool Point::operator==(const Point& e)const {
	if (this->a == e.a && this->b == e.b) {
		return true;
	}
	else {
		return false;
	}
}

bool Point::operator!=(const Point& e)const {
	if (this->a != e.a || this->b != e.b) {
		return true;
	}
	else {
		return false;
	}
}

int& Point::operator[](int index) {
	if (index == 0) {
		return this->a;
	}
	if (index == 1) {
		return this->b;
	}
	else {
		throw std::out_of_range("The index is"+ std::to_string(index));
	}
}

Point::~Point() {
	std::cout << "Point函数被销毁" << std::endl;
};


