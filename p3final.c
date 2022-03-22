#include<stdio.h>
//#include<math.h>
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
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      return (1);
      
    }
    return(0);
  }

}
void output(int n,int composite)
{
  if(composite==1)
  printf("%d is composite",n);
  else
  printf("%d is not composite",n);
}
int main()
{
  int k,n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}