#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,composite;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return 1;
      
    }
    return 0;
  }

}
void output(int n,int iscomposite)
{
  if(iscomposite)
  printf("number is composite");
  else
  printf("number is not composite");
}
int main()
{
  int k,n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}