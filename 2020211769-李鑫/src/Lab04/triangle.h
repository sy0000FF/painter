#pragma once
#include"draw.h"
#include<filesystem>
#include<fstream>

namespace fs = std::filesystem;
using std::ofstream;

class Triangle :public Draw, public Color, public Point {
public:
	int x;
	int y;
	int x2;
	int y2;
	int x3;
	int y3;
	static int numberofobjects;
	std::string sen;
	const int Triangle_type = 3;
	int* date=nullptr;
public:
	Triangle();
	virtual void draw()override;
	static int getNumberofobjects();
	Triangle(const Triangle& p);
	bool operator>(const Triangle& e)const;
	bool operator<(const Triangle& e)const;
	bool operator>=(const Triangle& e)const;
	bool operator<=(const Triangle& e)const;
	bool operator==(const Triangle& e)const;
	bool operator!=(const Triangle& e)const;
	Triangle& operator=(const Triangle& e);
	int operator[](int index);
	~Triangle();
};
