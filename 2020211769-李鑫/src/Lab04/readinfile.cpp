#include<iostream>
#include<graphics.h>
#include"readinfile.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include"Color.h"

void Readinfile::input() {
	fs::path p{ "C:/Users/Drose/source/repos/painter2/sanjin.txt" };
	std::ifstream ifs;
	ifs.open(p);
	if (!ifs) {
		cleardevice();
		setfont(50, 25, "楷体");
		xyprintf(750, 350, "未能成功打开文件");
	}
	ifs >> paint_type;
	ifs.close();
	if (paint_type == 1) {
		ifs.open(p);
		if (!ifs) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "未能成功打开文件");
		}
		ifs >> paint_type >> x1 >> y1 >> radius >> C;
		if (C == "Red") {
			Circle* p1 = new Circle;
			color_t* m3 = new color_t;
			*m3 = p1->color2;
			setfillcolor(*m3);
			fillellipse(x1, y1, radius, radius);
		}
		if (C == "Black") {
			Circle* p2 = new Circle;
			color_t* m2 = new color_t;
			*m2 = p2->color1;
			setfillcolor(*m2);
			fillellipse(x1, y1, radius, radius);
		}
		if (C == "Yellow") {
			Circle* p3 = new Circle;
			color_t* m1 = new color_t;
			*m1 = p3->color3;
			setfillcolor(*m1);
			fillellipse(x1, y1, radius, radius);
		}
		if (C != "Red" && C != "Black" && C != "Yellow") {
			Circle* p1 = new Circle;
			color_t* m2 = new color_t;
			*m2 = p1->color3;
			setfillcolor(*m2);
			fillellipse(x1, y1, radius, radius);
		}
		ifs.close();
	}
	if (paint_type == 2) {
		ifs.open(p);
		if (!ifs) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "未能成功打开文件");
		}
		ifs >> paint_type >> x2 >> y2 >> x3 >> y3 >> R;
		if (R == "Red") {
			Rectangle1* s1 = new Rectangle1;
			color_t* m4 = new color_t;
			*m4 = s1->color2;
			setfillcolor(*m4);
			int pt[8]{ x2,y2,x2 + 60,y2,x3,y3,x2,y3 };
			fillpoly(4, pt);
		}
		if (R == "Black") {
			Rectangle1* s1 = new Rectangle1;
			color_t* m5 = new color_t;
			*m5 = s1->color1;
			setfillcolor(*m5);
			int pt[8]{ x2,y2,x2 + 60,y2,x3,y3,x2,y3 };
			fillpoly(4, pt);
		}
		if (R == "Yellow") {
			Rectangle1* s1 = new Rectangle1;
			color_t* m6 = new color_t;
			*m6 = s1->color3;
			setfillcolor(*m6);
			int pt[8]{ x2,y2,x2 + 60,y2,x3,y3,x2,y3 };
			fillpoly(4, pt);
		}
		if (R != "Red" && R != "Black" && R != "Yellow") {
			Circle* p1 = new Circle;
			color_t* m2 = new color_t;
			*m2 = p1->color2;
			setfillcolor(*m2);
			int pt[8]{ x2,y2,x2 + 60,y2,x3,y3,x2,y3 + 40 };
			fillpoly(4, pt);
		}
		ifs.close();
	}
	if (paint_type == 3) {
		ifs.open(p);
		if (!ifs) {
			cleardevice();
			setfont(50, 25, "楷体");
			xyprintf(750, 350, "未能成功打开文件");
		}
		ifs >> paint_type >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> T;
		if (T == "Red") {
			Triangle* t1 = new Triangle;
			color_t* m7 = new color_t;
			*m7 = t1->color2;
			setfillcolor(*m7);
			int pt[6]{ x4,y4,x5,y5,x6,y6 };
			fillpoly(3, pt);
		}
		if (T == "Black") {
			Triangle* t1 = new Triangle;
			color_t* m8 = new color_t;
			*m8 = t1->color1;
			setfillcolor(*m8);
			int pt[6]{ x4,y4,x5,y5,x6,y6 };
			fillpoly(3, pt);
		}
		if (T == "Yellow") {
			Triangle* t1 = new Triangle;
			color_t* m9 = new color_t;
			*m9 = t1->color3;
			setfillcolor(*m9);
			int pt[6]{ x4,y4,x5,y5,x6,y6 };
			fillpoly(3, pt);
		}
		if (T != "Red" && T != "Black" && T != "Yellow") {
			Circle* p1 = new Circle;
			color_t* m2 = new color_t;
			*m2 = p1->color2;
			setfillcolor(BLACK);
			int pt[6]{ x4,y4,x5,y5,x6,y6 };
			fillpoly(3, pt);
		}
		ifs.close();
	}

}