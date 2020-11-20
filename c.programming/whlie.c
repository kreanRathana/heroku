#include<stdio.h>
main()
{
	int n,rev=0,rem;
	printf("enter the value n:");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=n%10;


		n=n/10;
	}
	printf("the revers number is %d",rev);
}
