#include<stdio.h>
int main()
{  int a=10,b=100,c=1000;

if(c>b)    // a=10 b=100 c=1000 1st condition check if true then execute to inside if
{
	if(a>c)  //  10>1000  to check condition is true aur false then give us output as a largest number 
	{
		printf(" largest num is:%d a  ",a);
	}
	else //   1000>10 
	{
		printf(" largest number is :%d c ",c);
	}
}
	else // 10>100 false, 100>10 true
	{
		if(b>c) // 100>1000 to get output as largest
		{
			printf(" largest number is :%d b  ",b);
		}
		else  // 1000>100 to get output as latgest number
		{
			printf(" largest number is :%d c ",c);
		}
	}
	
	
	return 0;
}

//second method

#include<stdio.h>
int main()
{  int a=10,b=100,c=1000;

if(a>b)    // a=10 b=100 c=1000 1st condition check if true then execute to inside if
{
 //  10>1000  to check condition is true aur false then give us output as a largest number {
		printf(" largest num is:%d a  ",a);
	}
else if(b>c)//   1000>10 
	{
		printf(" largest number is :%d b ",b);
	}
	

else  // 1000>100 to get output as latgest number
	{
			printf(" largest number is :%d c ",c);
	}

	
	
	return 0;
}
