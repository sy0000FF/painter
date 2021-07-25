#pragma once
#include<graphics.h>
class Color {
public:
	int R, G, B;
	int index;
	color_t color1;
	color_t color2;
	color_t color3;
	static int numberofobjects;
public:
	Color();
	Color(int R, int G, int B);
	bool operator==(const Color& e)const;
	bool operator!=(const Color& e)const;
	int operator[](int index);
	Color& operator++();
	Color operator++(int dummy);
	Color& operator--();
	Color operator--(int dummy);
	color_t setcolor(int R, int G, int B);
	static int getNumberofobjects();
	Color(const Color& p);
	~Color();
};