#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the values of base and height\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=base*height/2;
}
void output(float base,float height,float area)
{
  printf("area of triangle of base %.2f and height %.2f is %.2f",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base, &height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}
