#include<graphics.h>
#include<stdio.h>
typedef struct {
	int type;//��״
	int width;//���
	int color;//��ɫ
	int fill_color;//�����ɫ
	int	coordinate[100];//����
	int draw;//����
	int fill;//��䱳����ɫ
	int typex;
	int colorxy;
	int x;
	int graph;
}GRAPH;//���ǽṹ�壬���ڱ��滭ͼ�Ľṹ
enum colors {
	//������ɫ��ѡ��
	red, black, green, pink,
};
enum types {
	//���ǻ�ͼͼ�ε�ѡ����ö�ٱ�����д
	circle, polygon, arc
};
int mod4(GRAPH* A) {
	//���mod4�Ƕ�ȡ�ļ��뱣���ļ�����������ָ�봫�ݲ���
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
		for (int i = 0; i <= (GRAPH_.typex - 1); i++)//����һ��forѭ��������ǰshape������fscanf���뵽shape��
		{
			fscanf(fp, "%d", &GRAPH_.colorxy);
		}
	}
}//���Ǵ��ļ���ȡ�ṹ��ĺ���
