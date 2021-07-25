#include<graphics.h>
#include<stdio.h>
int mod1() {
	int c = 0;
	initgraph(640, 480);/*设置EGE边框为640宽，480长，而且为无边框模式*/
	setcaption("三金画板");/*设置EGE框的名字为三金画板*/
	setbkcolor(WHITE);/*设置背景颜色为白色*/
	setcolor(BLACK);/*设置画笔颜色为绿色*/
	setbkmode(TRANSPARENT);/*设置字体背景色为透明*/
	setfont(20, 0, "楷体");/*设置字体为40大小和楷体字体*/
	outtextxy(10, 20, "欢迎来到三金画板");
	outtextxy(10, 40, "请根据菜单选择您想进行的操作");
	outtextxy(10, 60, "1、读取文件   2、不读取文件");
	outtextxy(10, 80, "请输入您的选择");/*用户键入字符*/
	getch();
	int s = getch();/*等待用户键入字符*/

	if (s == 49)/*if语句做出判断，显示不同界面*/
	{
		c = 0;
		cleardevice();/*清除屏幕*/
		xyprintf(10, 100, "已读取文件");
		getch();/*等待用户键入*/
	}
	if (s == 50)
	{
		c = 1;
		cleardevice();
		xyprintf(10, 120, "未读取文件");
		getch();/*等待用户键入*/
	}

	return c;
}