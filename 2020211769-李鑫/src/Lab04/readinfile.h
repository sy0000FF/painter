#pragma once
#include<iostream>
#include<filesystem>
#include<fstream>
#include"Color.h"

namespace fs = std::filesystem;
using std::ifstream;


class Readinfile:public Color {
private:
	std::string C;
	std::string R;
	std::string T;
	int paint_type;
	int x1, y1, radius;
	int x2, y2, x3, y3;
	int x4, y4, x5, y5, x6, y6;
	ifstream ifs;

public:
	void input();
};