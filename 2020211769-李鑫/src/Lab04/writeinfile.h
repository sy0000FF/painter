#pragma once
#include<iostream>
#include<fstream>
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
class writeinfile {
public:
	Circle* p;
	Triangle* p2;
	Rectangle1* p1;
	std::ofstream op;
	const int Cicle_type = 1;
	const int Triangle_type = 2;
	const int Rectangle_type = 3;
public:
	void output();
	writeinfile(Circle* p);
	writeinfile(Rectangle1* p1);
	writeinfile(Triangle* p2);
	~writeinfile();
};