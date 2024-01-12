/*struct_cyrcle*/


#include<stdio.h>
#define PI 3.14


struct point{
	
	float x;
	float y;
};

struct circle{
	struct point p;/*enthesi domon*/
	float r;	
};

struct circle read_circle(struct circle c1);
struct circle read_circle2(void);
void read_circle3(struct circle *c1);
void report_circle(struct circle c);

main()
{
	
struct circle c1;

c1	=read_circle(c1);
report_circle(c1);
c1=read_circle2();
report_circle(c1);
read_circle3(&c1);
report_circle(c1);
	
}

struct circle read_circle(struct circle c1)
{
	printf("dose syntetagmenes kentrou:\n");
	scanf("%f%f",&c1.p.x,&c1.p.y);
	printf("dose aktina:");
	scanf("%f",&c1.r);
	return c1;
	
	
}
struct circle read_circle2(void)
{
	struct circle c1;
	printf("dose syntetagmenes kentroy:\n");
	scanf("%f%f",&c1.p.x,&c1.p.y);
	printf("dose aktina:");
	scanf("%f",&c1.r);
	return c1;
	
}

void read_circle3(struct circle *c1)
{
	printf("dose syntetagmenes kentroy:\n");
	scanf("%f%f",&c1->p.x,&c1->p.y);
	printf("dose aktina:");
	scanf("%f",&c1->r);
	
	
}

void report_circle(struct circle c)
{
	printf("x:%f\ty%f\tr%f\t:",c.p.x,c.p.y,c.r);
	printf("circumference:%f\tarea:%f\n",2*PI*c.r,PI*c.r*c.r);
	printf("\n");
	
	
	
}




























