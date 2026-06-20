#include<stdio.h>
int main()
{
	int i,num,arr[5];
	printf("\n Enter Array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Array Elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d\n",arr[i]);
	}
	printf("\n Enter Number\n");
	scanf("%d",&num);
	printf("\n Number is %d",num);
	
		if(num==arr[i])
		{
			printf("\n Found\n");
	}
	else
	{
		printf("\n Not found \n");
	}
	return 0;
}
