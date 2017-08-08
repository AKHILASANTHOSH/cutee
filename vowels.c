include<stdio.h>
#include<conio.h>
void main()
{
int ch;
printf("enter the character");
scanf("%c",ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("vowels");
}
else
{
printf("constants");
}
getch();
}
