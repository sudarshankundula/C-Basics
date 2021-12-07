#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is the largest",a);
	}
	else if(b>c && b>d && b>a)
	{
		printf("%d is the largest",b);
	}
	else if(c>d && c>a && c>b)
	{
		printf("%d is the largest",c);
	}
	else
	{
		printf("%d is the largest",d);
	}
	
}
