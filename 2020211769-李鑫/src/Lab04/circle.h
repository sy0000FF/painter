#pragma once
#include<filesystem>
#include<fstream>
#include"Point.h"
#include"draw.h"

namespace fs = std::filesystem;
using std::ofstream;
class Circle :public Draw, public Color, public Point {
public:
	int radius;
	int newRadius;
	int x1;
	int y1;
	mouse_msg msg = { 0 };
	const int Circle_type = 1;
	static int numberofobjects;
	std::string sen;
	int* date = nullptr;//»­Í¼Ê±¼ä
public:
	Circle(int radius);
	Circle();
	int set(int newRadius);
	virtual void draw()override;
	static int getNumberofobjects();
	Circle(const Circle& p);
	int getx1()const;
	int gety1()const;
	int getradius();
	bool operator>(const Circle& e)const;
	bool operator<(const Circle& e)const;
	bool operator>=(const Circle& e)const;
	bool operator<=(const Circle& e)const;
	bool operator==(const Circle& e)const;
	bool operator!=(const Circle& e)const;
	Circle& operator=(const Circle& e);
	int operator[](int index);
	~Circle();
};
