#include<graphics.h>
#include<stdio.h>
typedef struct {
	int type;//形状
	int width;//宽度
	int color;//颜色
	int fill_color;//填充颜色
	int	coordinate[100];//坐标
	int draw;//画板
	int fill;//填充背景颜色
	int typex;
	int colorxy;
	int x;
	int graph;
}GRAPH;//这是结构体，用于保存画图的结构
enum colors {
	//这是颜色的选择
	red, black, green, pink,
};
enum types {
	//这是画图图形的选择，用枚举变量来写
	circle, polygon, arc
};
int mod4(GRAPH* A) {
	//这个mod4是读取文件与保存文件，其中利用指针传递参数
	GRAPH k; GRAPH g; GRAPH GRAPH_;
	A->coordinate;
	k.width = 2;
	g.color = 3;
	int p = 0, i = 0;
	FILE* fp;
	int number_of_shape;
	fp = fopen("save.txt", "r");
	fscanf(fp, "%d\n", &number_of_shape);
	for (;;) {
		GRAPH_.draw = TRUE;
		fscanf(fp, "%d %d %d %d", &GRAPH_.graph, &p, &GRAPH_.color, &GRAPH_.x);
		if (p) { GRAPH_.fill = true; }
		else { GRAPH_.fill = false; }
		for (int i = 0; i <= (GRAPH_.typex - 1); i++)//再用一个for循环，将当前shape中坐标fscanf读入到shape中
		{
			fscanf(fp, "%d", &GRAPH_.colorxy);
		}
	}
}//这是从文件读取结构体的函数
