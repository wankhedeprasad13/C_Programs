#include<stdio.h>
int main()
{
	int rem,num;
	printf("enter a number");
	scanf("%d",&num);
	printf("reverse number is:\n");
	while(num!=0)
	{
		rem=num%10;
		printf("%d",rem);
		num =num/10;
	}
	return 0;
}
