#include<graphics.h>
#include<stdio.h>
#include"mod2.h"
void mod2(int c) {
	int x;
	bool flag = false;

	cleardevice();
	while (true) {/*while循环用于用户重复运行该画板程序*/
		getch();
		if (c == 0) {
			xyprintf(10, 80, "请根据菜单选择您想进行的操作");
			xyprintf(10, 100, "1、清除屏幕  2、作画  3、退出  7、重画");
			getch();/*等待用户键入*/
		}
		if (c == 1) {
			xyprintf(10, 80, "请根据菜单选择您想进行的操作");
			xyprintf(10, 100, "1、清除屏幕  2、作画  3、退出  ");
			getch();/*等待用户键入*/
		}
		int y = getch();/*将用户键入的值传给y*/
		switch (y) {/*switch语句，进行用户键入值得判读以显示不同选项*/
		case 49:
			cleardevice();/*清除屏幕*/
			xyprintf(10, 100, "清除屏幕");
			cleardevice();
			getch();/*等待用户键入*/
			break;/*该case中止*/
		case 50:
			cleardevice();
			xyprintf(10, 100, "请根据菜单选择您想进行的操作");
			xyprintf(10, 120, "4、颜色");
			xyprintf(10, 140, "5、图形");
			xyprintf(10, 160, "6、退出");
			getch();/*等待用户键入*/
			x = getch();/*将用户键入值传给x*/
			if (x == 52) {
				cleardevice();/*清除屏幕*/
				xyprintf(10, 120, "4、颜色");
				getch();/*等待键入*/
				cleardevice();/*清除屏幕*/
			}
			if (x == 53) {
				flag = true;
				cleardevice();/*清除屏幕*/
				xyprintf(10, 60, "输入值以进行作画");
				xyprintf(10, 120, "1=画多边形");
				xyprintf(10, 140, "2=画圆");
				xyprintf(10, 160, "3=画线");
				xyprintf(10, 180, "输入多边形的各个顶点坐标，数据与数据之间用英文逗号隔开");
				xyprintf(10, 200, "数据输入完成后点击两次enter键以画出图像");
				getch();
				
				cleardevice();
				mod3();
				break;
				cleardevice();/*清除屏幕*/
			}
			if (x == 54) {
				flag = true;
				cleardevice();
				xyprintf(10, 120, "6、已退出程序");
				getch();
			}

			break;
		case 51:
			flag = true;
			cleardevice();
			xyprintf(10, 140, "已退出程序");
			getch();
			break;/*结束该case*/
		case 55:
			cleardevice();
			xyprintf(10, 100, "请根据菜单选择您想进行的操作");
			xyprintf(10, 120, "4、颜色");
			xyprintf(10, 140, "5、图形");
			xyprintf(10, 160, "6、退出");
			getch();/*等待用户键入*/
			x = getch();/*将用户键入值传给x*/
			if (x == 52) {
				cleardevice();/*清除屏幕*/
				xyprintf(10, 120, "4、颜色");
				getch();/*等待键入*/
				cleardevice();/*清除屏幕*/
			}
			if (x == 53) {
				cleardevice();/*清除屏幕*/
				xyprintf(10, 160, "5、图形");
				getch();/*等待键入*/
				cleardevice();/*清除屏幕*/
			}
			if (x == 54) {
				flag = true;
				cleardevice();
				xyprintf(10, 120, "6、已退出程序");
				getch();
			}
			break;
		}
		if (flag) {
			break;
		}
	}

}