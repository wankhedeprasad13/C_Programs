#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("Enter Array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array elements of A is:\n");
	for(i=0;i<5;i++)
	{
		printf("\n %d\n",a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("\n Elements of B is :\n");
	for(i=0;i<5;i++)
	{
		printf("\n %d \n",b[i]);
	}
	return 0;
}
