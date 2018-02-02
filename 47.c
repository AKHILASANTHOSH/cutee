#include <stdio.h>

int main()
{
int n,a[20],i,l,s;
printf("enter the limit:");
scanf("%d",&n);
printf("enter numbers:");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
l=a[0];
s=a[0];
;
for(i=1;i<=n;i++)
{
	if(l<a[i])
	{
		l=a[i];
		printf("large num:%d",l);
		
	}
}
for(i=1;i<=n;i++)
{
	if(s>a[i])
	{
		s=a[i];
		printf("small num:%d",s);
		
	}
}

	return 0;
}
