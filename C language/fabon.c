#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 int i;
 int fibo(int n);
 printf("Enter the limit:\n");
 scanf("%d",&n);
   i=fibo(n);
 printf("\nThe %dth Fibonacci number is %ld",n,i);
 
} 
/*
long int fibo(int n)
{
 int old_no,currnt_no,sum,i;
   i=1;
   old_no=0;
   currnt_no=1;
  
  {
    printf("%d\n%d\n",old_no,currnt_no);
  }
  if(n>=3)
  {
   printf("%d\n%d\n",old_no,currnt_no);
   if(i<=n-2)
   {

      sum=old_no+currnt_no;
      old_no=currnt_no;
      currnt_no=sum;
      i++;
      printf("\n%d",sum);
   }
  }
 return(sum);
}*/
int fibo(int n)
{ if(n==0)
  return 0;
  if(n==1)
  return 1;
  return fibo(n-1)+fibo(n-2);
}
