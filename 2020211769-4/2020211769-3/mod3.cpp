#include"graphics.h"
#include"string.h"
#include"stdlib.h"

enum colors {
	red, black, green, pink,
};
enum types {
	circle, polygon, arc
};
typedef struct {
	int type;
	int width;
	int color;
	int fill_color;
	int	coordinate[100];
}GRAPH;

GRAPH A; GRAPH w; GRAPH g; GRAPH c;

void mod3()
{
	A.type = 1;
	w.width = 2;
	g.color = 3;
	setfillcolor(RED);
	initgraph(640, 480);
	char points[100];
	int coord[100];
	inputbox_getline("绘制多边形",
		"请输入坐标(以逗号分隔）",
		points, 100);
	char* tokenPtr = strtok(points, ",2");
	int i = 0;
	while (tokenPtr != NULL)
	{
		coord[i++] = atoi(tokenPtr);
		tokenPtr = strtok(NULL, ",");
	}
	fillpoly((i + 1) / 2, coord);
	xyprintf(80, 100, "1=撤销画图");
	xyprintf(80, 120, "2=恢复");
	int d = getch();
	if (d == 49) 
		{
		cleardevice();
		mod3();
		}
	if (d == 50) {
			fillpoly((i + 1) / 2, coord);
		}

	}
