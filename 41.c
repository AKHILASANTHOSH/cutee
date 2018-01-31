#include <stdio.h>

int main(void) {
int n,i;
char s[20];
printf("enter the number of times:\n");
scanf("%d",&n);
printf("enter the sring:");
scanf("%s",s);
for(i=1;i<=n;i++)
{
	printf("%s",s);
}
	return 0;
}
