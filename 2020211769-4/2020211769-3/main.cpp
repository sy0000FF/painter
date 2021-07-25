#include<graphics.h>
#include<stdio.h>  
#include<iostream>
#include"mod1.h"
#include"mod2.h"
#include"mod3.h"
#include"mod4.h"
int main(void) {
	int c;
	int flag1;
	c = mod1();
	mod2(c);
	for (;;) {
		getch();
		cleardevice();
		xyprintf(10, 100, "请根据菜单选择你想进行的操作");
		xyprintf(10, 120, "1、返回画板继续画图");
		xyprintf(10, 140, "2、撤销操作，立即重画");
		xyprintf(10, 160, "3、退出三金画板");

		flag1 = getch();
		if (flag1 == 49)
		{
			cleardevice();
			mod2(c);
		}
		if (flag1 == 50) {
			cleardevice();
			mod3();
		}
		if (flag1 == 51) {
			xyprintf(10, 140, "已退出三金画板");
			return 0;
		}
	}

}
