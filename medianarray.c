#include<stdio.h>
#include<conio.h>
void main()
{
unsigned char ch;
ch=32;
while(ch<=127)
{
printf("%c[%3d]",ch,ch);
ch++;
}
printf("/n");
getch();
}
