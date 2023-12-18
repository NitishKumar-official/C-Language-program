
/*

#include<stdio.h>
long fact(int n);
int main(int argc, char const *argv[])
{
  int num;
  printf("enter a number");
  scanf("%d",&num);
printf("the factorial of %d is %d",num,fact(num));
  return 0;
}
long fact(int n)
{
  
  if(n==0)
  return(1);
  else
  return(n*fact(n-1));
}
*/

/*wap to sum two numberby using recusion*/

#include<stdio.h>
int sum(int x);
int main(int argc, char const *argv[])
{
  int num;
  printf("enter the number");
  scanf("%d",&num);
  printf("the sum of%d is %d",num,sum(num));
  return 0;
}
int sum(int x)
{

if(x==1)
return(1);
else
return(x+sum(x-1));

// }
