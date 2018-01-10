#include<stdio.h>
int main()
{
int size,array[i],i,max;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the %d array elements:");
for(i=1;i<=size;i++)
{
scanf("%d",&array[i]);
}
max=array[0];
for(i=1;i<=size;i++)
if(array[i]>max)
{
printf("the max element is :",max);
}
return 0;
}
