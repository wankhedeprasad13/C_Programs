#include<stdio.h>
int main(){
	int size,index,a[50],i;
	
	printf("\nenter the size\n");
	scanf("%d",&size);
	printf("\nsize is %d\n",size);
	printf("array elements are :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for
	(i=0;i<size;i++)
	{
		printf("\t%d\t",a[i]);
	}
	printf("\n enter the index\n");
	scanf("%d",&index);	
	if(index<0 || index>size-1)
	{
		printf("\n invalid statement\n");
	}
	else{
		for(i=index;i<size-1;i++)
		{
		    a[i]=a[i+1];
		}
		
		size--;
		printf("\n Array elements after deleted\n");
		for(i=0;i<size;i++)
		{
			printf("\t%d\t",a[i]);
		}
	}
	return 0;
}
