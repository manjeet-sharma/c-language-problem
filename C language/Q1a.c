#include <stdio.h>
 int main()
{
int i,n,flag;
printf("\nEnter any number: ");
scanf("%d",&n);
if(n > 1)
{
 i = 2;
 flag = 1;
 while(i<n)
 {
 if(n%i == 0)
 {
 flag = 0;
break;
 }
 i++;
 }
 if(flag == 1)
 printf("\n%d is a Prime number",n);
else
printf("\n%d is not a Prime number",n);
}
else
 printf("\n Please enter valid number…");
return 0;
 } 
