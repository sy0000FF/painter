#include<iostream>
#include<graphics.h>
#include"Color.h"
#include<string>



Color::Color() {
	color1 = EGERGB(0, 0, 0);//black
	color2 = EGERGB(255, 0, 0);//red
	color3 = EGERGB(255, 255, 0);//yellow
};


Color::Color(int R, int G, int B) {
	this->R = R;
	this->G = G;
	this->B = B;
	EGERGB(R, G, B);
	numberofobjects++;
}


Color::Color(const Color& p) {
	this->R = p.R;
	this->G = p.G;
	this->B = p.B;
	std::cout << "构造函数已赋值" << std::endl;
}

int Color::numberofobjects{ 0 };
int Color::getNumberofobjects() {
	return numberofobjects;
}

bool Color::operator==(const Color& e)const {
	if (this->R == e.R && this->G == e.G && this->B == e.B) {
		return true;
	}
	else {
		return false;
	}
}

bool Color::operator!=(const Color& e)const {
	if (this->R != e.R || this->G != e.G || this->B != e.B) {
		return true;
	}
	else {
		return  false;
	}
}

int Color::operator[](int index) {
	if (index == 0) {
		return this->R;
	}
	if (index == 1) {
		return this->G;
	}
	if (index == 2) {
		return this->B;
	}
	else {
		throw std::out_of_range("The index is" + std::to_string(index));
	}
}

Color& Color::operator++()  {
	if (R == 255) {
		this->R = 255;
	}
	else {
		this->R++;
	}
	if (G == 255) {
		this->G = 255;
	}
	else {
		this->G++;
	}
	if (B == 255) {
		this->B = 255;
	}
	else {
		this->B++;
	}

	return *this;
}

Color Color::operator++(int dummy) {
	Color temp = *this;
	if (this->R == 255) {
		this->R = 255;
	}
	else {
		++this->R;
	}
	if (this->G == 255) {
		this->G = 255;
	}
	else {
		++this->G;
	}
	if (this->B == 255) {
		this->B = 255;
	}
	else {
		++this->B;
	}
	return temp;
}

Color& Color::operator--() {
	if (this->R == 0) {
		this->R = 0;
	}
	else {
		this->R--;
	}
	if (this->G == 0) {
		this->G = 0;
	}
	else {
		this->G--;
	}
	if (this->B == 0) {
		this->B = 0;
	}
	else {
		this->B--;
	}
	return *this;
}

Color Color::operator--(int dummy) {
	Color temp = *this;
	if (this->R == 0) {
		this->R = 0;
	}
	else {
		--this->R;
	}
	if (this->G == 0) {
		this->G = 0;
	}
	else {
		--this->G;
	}
	if (this->B == 0) {
		this->B = 0;
	}
	else {
		--this->B;
	}
	return temp;
}



color_t Color::setcolor(int R, int G, int B) {
	R = this->R;
	G = this->G;
	B = this->B;
	return EGERGB(R, G, B);
}
Color::~Color() {
	std::cout << "Color函数被销毁" << std::endl;
};

