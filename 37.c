#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the a value:");
scanf("%d",&a);
printf("enter the bb value:");
scanf("%d",&b);
printf("values before swapping %d%d",a,b);
temp=a;
a=b;
b=temp;
printf("values after swappingb %d%d",a,b);
}
