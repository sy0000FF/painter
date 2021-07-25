#include<iostream>
#include<fstream>
#include<filesystem>
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include"writeinfile.h"

namespace fs = std::filesystem;
using std::ofstream;

fs::path file1{ "C:/Users/Drose/source/repos/painter2/sanjin.txt" };

writeinfile::writeinfile(Circle* p) {
	p1 = nullptr;
	p2 = nullptr;
	this->p = p;
	op.open(file1, std::ios::app);
}

writeinfile::writeinfile(Rectangle1* p) {
	this->p = nullptr;
	p2 = nullptr;
	this->p1 = p;
	op.open(file1, std::ios::app);
}

writeinfile::writeinfile(Triangle* p) {
	this->p = nullptr;
	p1 = nullptr;
	this->p2 = p;
	op.open(file1, std::ios::app);
}

writeinfile::~writeinfile() {
	op.close();
}

void writeinfile::output() {
	if (p != nullptr) {
		op << Cicle_type << std::endl;
		op << p->msg.x<< " " << p->msg.y << " " << p->getradius() << std::endl;
		op << "red" << std::endl;
	}

	if (p1 != nullptr) {
		op << Rectangle_type << std::endl;
		op << p1->x << " " << p1->y << " " << p1->x2 << " " << p1->y2 << std::endl;//输出左上和右下两个点的坐标
		op << "yellow" << std::endl;
	}

	if (p2 != nullptr) {
		op << Triangle_type << std::endl;
		//三角形三个点的坐标
		op << p2->x << " " << p2->y << " " << p2->x2 << " " << p2->y2 << " " << p2->x3 << " " << p2->y3 << std::endl;
		op << "black" << std::endl;


	}
}