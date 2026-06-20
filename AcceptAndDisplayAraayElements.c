#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("enter Array elements\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Array elements are\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
	return 0;
}
