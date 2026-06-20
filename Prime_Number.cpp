#include<stdio.h>
int main()
{
	int n,i,x=0;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(i/n==0)
		{
			x=1;
			break;
		}
	}
		if(x==0){
		printf("the prime number is ");
	     }
		else
		{
			printf("is not prime number ");
		}
	
	return 0;
}

