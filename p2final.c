#include<stdio.h>
int input_side()
{
    int a;
    printf("enter the values\n");
    scanf("%d",&a);
    return a;
  }
  int check_scalene(int a,int b,int c)
  {
    if(a==b || b==c || c==a)
    return 0;
    else if(a!=b && b!=c && c!=a)
    return 1;
  }
  void output(int a,int b,int c,int isscalene)
  {
    if(isscalene==1)
    printf("triangle is scalene");
    else
    printf("triangle is not scalene");
  }
  int main()
  {
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
   isscalene= check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
    
  }
