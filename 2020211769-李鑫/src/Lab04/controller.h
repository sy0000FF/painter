#pragma once
#include<graphics.h>
#include<iostream>
class environMent {	
public:
	static int numberofobjects;
	environMent();
	void drawingboard();
	static int getNumberofobjects();
	environMent(const environMent& p);
	~environMent();
};
