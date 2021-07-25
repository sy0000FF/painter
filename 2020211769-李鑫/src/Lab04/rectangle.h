#pragma once
#include"Point.h"
#include<iostream>
#include<graphics.h>
#include"draw.h"
#include<filesystem>
#include<fstream>

namespace fs = std::filesystem;
using std::ofstream;

class Rectangle1 :public Draw, public Color, public Point {
public:
	int x, y, x2, y2;
	const int Rectangle_type = 2;
	std::string sen;
	static int numberofobjects;
	int* date = nullptr;
public:
	Rectangle1();
	virtual void draw()override;
	static int getNumberofobjects();
	Rectangle1(const Rectangle1& p);
	bool operator>(const Rectangle1& e)const;
	bool operator<(const Rectangle1& e)const;
	bool operator>=(const Rectangle1& e)const;
	bool operator<=(const Rectangle1& e)const;
	bool operator==(const Rectangle1& e)const;
	bool operator!=(const Rectangle1& e)const;
	Rectangle1& operator=(const Rectangle1& e);
	int operator[](int index);
	~Rectangle1();
};