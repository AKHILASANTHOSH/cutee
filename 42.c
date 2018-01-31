#include<stdio.h>
#include<string.h>
int main()
{
int c,d;
char a[20]="hello",b[30]="world";
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf(" string 1 is greater %s",a);
}
else if(c<d)
{
printf(" string 2 is greater %s",b);

}
else
{
printf(" two string are of same length %s%s",a,b);
}
