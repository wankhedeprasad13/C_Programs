#include<stdio.h>
int main()
{
	int sum=0,rem,num;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf(" the sum of digit of the number is %d",sum);
	return 0;
}

