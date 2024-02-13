#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1 ,Rect *R2){
	double x1,x2,y1,y2;
	if((R1->x+R1->w)<(R2->x))
	{
		return 0;
	}
	if((R1->y-R1->h)>(R2->y))
	{
		return 0;
	}
	if((R1->x)<(R2->x))
	{
		x1=R2->x;
	}
	if((R1->x)>=(R2->x))
	{
		x1=R1->x;
	}
	if((R1->x+R1->w)<(R2->x+R2->w))
	{
		x2=R1->x+R1->w;
	}
	if((R1->x+R1->w)>=(R2->x+R2->w))
	{
		x2=R2->x+R2->w;
	}
	if((R1->y)<(R2->y))
	{
		y1=R1->y;
	}
	if((R1->y)>=(R2->y))
	{
		y1=R2->y;
	}
	if((R1->y-R1->h)<(R2->y-R2->h))
	{
		y2=R2->y-R2->h;
	}
	if((R1->y-R1->h)>=(R2->y-R2->h))
	{
		y2=R1->y-R1->h;
	}
	return (x2-x1)*(y1-y2);


}
