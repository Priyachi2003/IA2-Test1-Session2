#include<stdio.h>
int input()
{
  int a;
  printf("enter two numbers\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int hcf;
  if(a>b)
  hcf=b;
  else
  hcf=a;
}
for(hcf;hcf>=1;hcf--)
{
  if(a%hcf==0 && b%hcf==0)
  {
    break;
  }

return hcf;
}
void output(int a,int b,int gcd)
{
  printf("hcf of %d and %d is %d ",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  a=input();
  gcd=gcd(a,b);
  output(a,b,hcf);
  return 0;
  
}