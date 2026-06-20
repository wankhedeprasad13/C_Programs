#include<stdio.h>
int main()
{
	int next,i,n;
	int t1=0,t2=1;
	printf("enter thr number:\n");
	scanf("%d",&n);
	printf(" the fibinacci series \t");
	printf("\t%d",t1);
	printf("\t%d",t2);
	for( i=3; i<=n; i++)
	{
		next=t1+t2;
		printf("\t%d",next);
		t1=t2;
		t2=next;
	}
	return 0;
}

