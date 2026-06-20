#include<stdio.h>
int main()
{
	int small,i,a[10],size;
	printf("\n enter size \n");
	scanf("%d",&size);
	printf("\n size is %d",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array is :\n");
	for(i=0;i<size;i++)
	{
		printf("\n%d\n",a[i]);
	}
	small=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("\n smallest number is:%d",small);
	
	return 0;
}
