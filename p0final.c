#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}; 
  typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("enter the value of base and height\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
  printf("the area of triangle is %f",t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
