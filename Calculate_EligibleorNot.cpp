#include<stdio.h>
int main()
{
	int age;
	char age1;
	printf(" enter the number ");
	if(scanf("%d,%c",&age ,&age1)==1)
    {
    	if(age>=20  age1>=20)
    	{
    		printf(" eligible ");
		}
		else
		{
			printf(" not eligible ");
		}
	}
	else
  {
  	printf(" enter number as 20 or 21 ");
  }
	
	
	
	return 0;
}
