
#include<stdio.h>
int main()
{
	int rem,num,reverse,original;
	printf("enter a number");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem = num % 10;
		reverse = reverse * 10 + rem;
		num =num / 10;
	}
	printf("\nreverse number is %d",reverse);
	printf("\noriginal numbetr is %d",original);
	
	if(original==reverse)
	{
		printf("\nthe number is palidrome");
	}
	else{
		printf("\nthe number is not palidrome");
	}
	
	return 0;
}
