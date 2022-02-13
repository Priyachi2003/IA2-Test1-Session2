#include<stdio.h>
int input_array_size()
{
  int k;
  printf("enter any number\n");
  scanf("%d",&k);
  return k;
}
void input_array(int n,int *a)
{
  int i;
  for(i=2;i<=n;i++)
  {
    printf("enter the number");
  }
  scanf("%d",a);
}
int is_composite(int n)
{
  is_composite=1;
  
}
int sum_composite_numbers(int n,int a[n])
{
  int i;
  int sum=0;
for(i=2;i<=n;i++);
  if(is_composite (a[i])==1)

{
  sum=sum+a[i];
  }
  
  return sum;
}
void out_put(int sum)
{
  int i,n;
  for(i=2;i<n;i++)
  {
    printf("sum of composite number is %d",sum);
  }
}
int main()
{
  int k,n,sum;
  k=input_array_size();
  int a[n];
  sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}