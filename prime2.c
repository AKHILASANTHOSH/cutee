#include<stdio.h>
void main()
{
int n,c=o,i;
printf("enter the num");
scanf("%d",n);
for(i=0i<n;i++)
{
if(n%i==0)
{
c++;
}
if(c==2)
{
printf("the number is prime");
}
else
{
printf("the number is not prime");
}
}
}
