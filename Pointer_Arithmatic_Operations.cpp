#include<stdio.h>
int main()
{
	int x=5;
	int *ptr;
	ptr=&x;
	printf("pointer arithmatic operations before subtraction is %p \n",ptr);
	ptr=ptr-4;
	printf("pointer arithmatic oprations after subtraction is %p",ptr);
	return 0;
}
