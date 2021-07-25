#include<stdio.h>
#include<fstream>
#include<iostream>
#include<filesystem>
#include<graphics.h>
#include"Color.h"
#include"Point.h"
#include"circle.h"
#include"readinfile.h"
#include"triangle.h"
#include"rectangle.h"
#include"controller.h"
#include"writeinfile.h"
#include"Sketchpadframe.h"




Sketchpadframe::Sketchpadframe() {
	xyprintf(400, 300, "fwiufhe");
}



void fun(Draw* pt) {
	pt->draw();
}


int Sketchpadframe::Sketchpad() {
	environMent e1;
	e1.drawingboard();
	setfont(30, 15, "楷体");
	xyprintf(0, 70, "请根据菜单选择操作:");
	setfont(20, 10, "楷体");
	xyprintf(0, 100, "1、圆");
	xyprintf(0, 120, "2、矩形");
	xyprintf(0, 140, "3、三角形");
	xyprintf(0, 160, "7、是否读取文件");


	getch();
	int x = getch();
	if (x == 49) {
		setfont(30, 15, "楷体");
		xyprintf(0, 180, "请鼠标点击选择属性：");
		int pt[10]{ 10,220,70,220,70,240,10,240,10,220 };
		drawpoly(5, pt);
		setfont(16, 8, "楷体");
		const char* w{ "填充" };
		outtextxy(20, 222, w);
		int d[10]{ 90,220,150,220,150,240,90,240,90,220 };
		drawpoly(5, d);
		setfont(16, 8, "楷体");
		const char* y{ "不填充" };
		outtextxy(100, 222, y);
		mouse_msg msg = { 0 };
		for (; is_run(); delay_fps(60))
		{
			while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
			{
				msg = getmouse();//将鼠标信息存入鼠标结构体
			}

			if ((int)msg.x >= 10 && (int)msg.x <= 70 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				setfont(30, 15, "楷体");
				xyprintf(0, 260, "请使用键盘键入选择颜色");
				int e[10]{ 90,290,150,290,150,310,90,310,90,290 };
				drawpoly(5, e);
				setfont(16, 8, "楷体");
				const char* r{ "红色" };
				outtextxy(92, 293, "5、红色");
				int o[10]{ 10,290,70,290,70,310,10,310,10,290 };
				drawpoly(5, o);
				setfont(16, 8, "楷体");
				const char* p{ "4、黑色" };
				outtextxy(13, 293, p);
				int u[10]{ 170,290,230,290,230,310,170,310,170,290 };
				drawpoly(5, u);
				setfont(16, 8, "楷体");
				outtextxy(173, 293, "6、黄色");
				Circle* p1 = new Circle;
				Circle* p2 = new Circle;
				Circle* p3 = new Circle;
				color_t* m1 = new color_t;

				*m1 = p1->color1;
				color_t* m2 = new color_t;
				*m2 = p2->color2;

				//调用++运算符，将RGB的数值修改来换颜色。
				for (int i = 0; i < 200; i++) {
					++* m2;
				}
				//调用--运算符，将RGB的颜色修改到原来的颜色
				for (int i = 0; i < 200; i++) {
					--* m2;
				}
				color_t* m3 = new color_t;
				*m3 = p3->color3;
				//比较两种颜色是否相等
				if (*m1 == *m3) {
					xyprintf(400, 400, "李鑫真帅");
				}
				//比较两种颜色是否不等
				if (*m1 != *m3) {
					xyprintf(800, 400, "我爱马俊");
				}

				//定义两个Color类的对象，检验两个颜色是否相等
				Color op1(255, 200, 200);
				Color op2(0, 0, 0);
				if (op1 == op2) {
					xyprintf(400, 400, "lixin");
				};

				//比较两种颜色的RGB三种数值是否相等
				if (op1[0] == op2[0]) {
					xyprintf(400, 400, "nihao");
				}

				//比较两个圆是不是一样大
				Circle b1(50);
				Circle b2(100);
				if (b1 == b2) {
					xyprintf(600, 600, "两个圆一样大");
				}

				//比较两个圆那个更大
				if (b1 > b2) {
					xyprintf(400, 400, "第一个圆比第二个大");
				}
				if (b1 < b2) {
					xyprintf(400, 400, "第二个圆比第一个大");
				}

				getch();
				int g = getch();
				switch (g) {
				case 52:setfillcolor(*m1); p1->sen = "Black"; fun(p1); break;
				case 53:setfillcolor(*m2); p2->sen = "Red"; fun(p2); break;
				case 54:setfillcolor(*m3); p3->sen = "Yellow"; fun(p3); break;
				}
				p1->~Circle();
				p2->~Circle();
				p3->~Circle();
				delete m1;
				delete m2;
				delete m3;
				delete p1;
				delete p2;
				delete p3;
			}
			else if ((int)msg.x >= 90 && (int)msg.x <= 150 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				Circle* p4 = new Circle;
				setfillcolor(WHITE);
				p4->sen = "未填充";
				fun(p4);
			}
			else if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
					return 0;

			}
		}
	}
	if (x == 50) {
		setfont(30, 15, "楷体");
		xyprintf(0, 180, "请鼠标点击选择属性：");
		int pt[10]{ 10,220,70,220,70,240,10,240,10,220 };
		drawpoly(5, pt);
		setfont(16, 8, "楷体");
		const char* w{ "填充" };
		outtextxy(12, 222, w);
		mouse_msg msg = { 0 };
		int d[10]{ 90,220,150,220,150,240,90,240,90,220 };
		drawpoly(5, d);
		setfont(16, 8, "楷体");
		const char* y{ "不填充" };
		outtextxy(100, 222, y);
		for (; is_run(); delay_fps(60))
		{
			while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
			{
				msg = getmouse();//将鼠标信息存入鼠标结构体
			}
			if ((int)msg.x >= 10 && (int)msg.x <= 70 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				setfont(30, 15, "楷体");
				xyprintf(0, 260, "请使用键盘键入选择颜色");
				int e[10]{ 90,290,150,290,150,310,90,310,90,290 };
				drawpoly(5, e);
				setfont(16, 8, "楷体");
				const char* r{ "红色" };
				outtextxy(93, 293, "5、红色");
				int o[10]{ 10,290,70,290,70,310,10,310,10,290 };
				drawpoly(5, o);
				setfont(16, 8, "楷体");
				const char* p{ "4、黑色" };
				outtextxy(13, 293, p);
				int u[10]{ 170,290,230,290,230,310,170,310,170,290 };
				drawpoly(5, u);
				setfont(16, 8, "楷体");
				outtextxy(173, 293, "6、黄色");
				Rectangle1* s1 = new Rectangle1;
				Rectangle1* s2 = new Rectangle1;
				Rectangle1* s3 = new Rectangle1;
				color_t* m4 = new color_t;
				*m4 = s1->color1;
				color_t* m5 = new color_t;
				*m5 = s2->color2;
				color_t* m6 = new color_t;
				*m6 = s3->color3;
				getch();
				int g = getch();
				switch (g) {
				case 52:setfillcolor(*m4); s1->sen = "Black"; fun(s1);  break;
				case 53:setfillcolor(*m5); s2->sen = "Red"; fun(s2); break;
				case 54:setfillcolor(*m6); s3->sen = "Yellow"; fun(s3); break;
				}
				s1->~Rectangle1();
				s2->~Rectangle1();
				s3->~Rectangle1();
				delete m4, m5, m6;
				delete s1, s2, s3;
			}


			else if ((int)msg.x >= 90 && (int)msg.x <= 150 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				setfillcolor(WHITE);
				Rectangle1* s4 = new Rectangle1;
				s4->sen = "未填充";
				fun(s4);
			}


			else if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
				return 0;
			}
		}

	}
	if (x == 51) {
		setfont(30, 15, "楷体");
		xyprintf(0, 180, "请鼠标点击选择属性：");
		int pt[10]{ 10,220,70,220,70,240,10,240,10,220 };
		drawpoly(5, pt);
		setfont(16, 8, "楷体");
		const char* w{ "填充" };
		outtextxy(12, 222, w);
		int d[10]{ 90,220,150,220,150,240,90,240,90,220 };
		drawpoly(5, d);
		setfont(16, 8, "楷体");
		const char* y{ "不填充" };
		outtextxy(100, 222, y);
		mouse_msg msg = { 0 };
		for (; is_run(); delay_fps(60))
		{
			while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
			{
				msg = getmouse();//将鼠标信息存入鼠标结构体
			}
			if ((int)msg.x >= 10 && (int)msg.x <= 70 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				setfont(30, 15, "楷体");
				xyprintf(0, 260, "请使用键盘键入选择颜色");
				int e[10]{ 90,290,150,290,150,310,90,310,90,290 };
				drawpoly(5, e);
				setfont(16, 8, "楷体");
				const char* r{ "红色" };
				outtextxy(93, 293, "5、红色");
				int o[10]{ 10,290,70,290,70,310,10,310,10,290 };
				drawpoly(5, o);
				setfont(16, 8, "楷体");
				const char* p{ "4、黑色" };
				outtextxy(18, 295, p);
				int u[10]{ 170,290,230,290,230,310,170,310,170,290 };
				drawpoly(5, u);
				setfont(16, 8, "楷体");
				outtextxy(173, 293, "6、黄色");
				Triangle* t1 = new Triangle;
				Triangle* t2 = new Triangle;
				Triangle* t3 = new Triangle;
				color_t* m7 = new color_t;
				*m7 = t1->color1;
				color_t* m8 = new color_t;
				*m8 = t2->color2;
				color_t* m9 = new color_t;
				*m9 = t3->color3;
				getch();
				int g = getch();
				switch (g) {
				case 52:getch(); setfillcolor(*m7); t1->sen = "Black"; fun(t1); break;
				case 53:getch(); setfillcolor(*m8); t2->sen = "Red"; fun(t2); break;
				case 54:getch(); setfillcolor(*m9); t3->sen = "Yellow"; fun(t3); break;
				}
				t1->~Triangle();
				t2->~Triangle();
				t3->~Triangle();
				delete t1, t2, t3;
				delete m7, m8, m9;
			}

			else if ((int)msg.x >= 90 && (int)msg.x <= 150 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				setfillcolor(WHITE);

				Triangle* t4 = new Triangle;
				t4->sen = "未填充";
				fun(t4);

			}


			else if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
				return 0;
			}
		}
	}
	if (x == 55) {
		setfont(30, 15, "楷体");
		xyprintf(0, 180, "请鼠标点击选择属性：");
		int pt[10]{ 10,220,70,220,70,240,10,240,10,220 };
		drawpoly(5, pt);
		setfont(16, 8, "楷体");
		const char* w{ "读取" };
		outtextxy(12, 222, w);
		int d[10]{ 90,220,150,220,150,240,90,240,90,220 };
		drawpoly(5, d);
		setfont(16, 8, "楷体");
		const char* y{ "不读取" };
		outtextxy(100, 222, y);

		mouse_msg msg = { 0 };
		for (; is_run(); delay_fps(60))
		{
			while (mousemsg())//获取鼠标消息，这个函数会等待，等待到有消息为止
			{
				msg = getmouse();//将鼠标信息存入鼠标结构体
			}

			if ((int)msg.x >= 10 && (int)msg.x <= 70 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				//读取图像文件
				Readinfile* R1 = new Readinfile;
				R1->input();
			}
			if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
				cleardevice();
				setfont(50, 25, "楷体");
				xyprintf(750, 350, "点击右上角×以关闭程序");
			}
			if ((int)msg.x >= 90 && (int)msg.x <= 150 && (int)msg.y >= 220 && (int)msg.y <= 240 && (int)msg.is_down()) {
				//不读取图像文件
				cleardevice();
				setfont(50, 25, "楷体");
				xyprintf(750, 350, "关闭程序重新作画");

			}
			if ((int)msg.x >= 260 && (int)msg.x <= 400 && (int)msg.y >= 720 && (int)msg.y <= 800 && (int)msg.is_down()) {
				return 0;
			}
		}
		getch();

		return 0;
	}

}