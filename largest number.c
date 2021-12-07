#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d the largest number",a);
	}
	else
	{
		printf("%d the smallest number",b);
	}
}
