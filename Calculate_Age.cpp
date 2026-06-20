#include<stdio.h>
int main()
{
	int age;
	printf(" enter a number ");
	scanf("%d",age);
	if(age>=18)
	{
		if(age>=20)
		{
			printf(" eligible ");
		}
		else
		{
			printf("not eligible");
		}
	}
	else
	{
		printf(" please enter number as 20 ");
	}	
	
	return 0;
}
