#include <stdio.h>
int main()
{
    int a,b,c;
    int gcd(int,int);
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    c= gcd(a,b);
    printf("\nGreatest Common Divisor of %d and %d is %d",a,b,c);
    return(0);
}
int gcd(int a,int b)
{
    int rem;
    while (b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return(a);
}