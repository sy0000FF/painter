#pragma once
#include<graphics.h>

class Point {
private:
	int a, b;
	int index;
	static int numberofobjects;
public:
	Point();
	int& getPointx();
	int& getPointy();
	Point(int a, int b);
	int setPointx(int a);
	int setPointy(int b);
	bool operator ==(const Point& e)const;
	bool operator !=(const Point& e)const;
	Point operator +(const Point& e);
	int& operator[](int index);
	static int getNumberofobjects();
	Point(const Point& p);
	~Point();
};