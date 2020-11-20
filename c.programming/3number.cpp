#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("enter your number1:");
	scanf("%d",&num1);
	printf("enter your number2:");
	scanf("%d",&num2);
	printf("enter your number3:");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d is biggest",num1);
	    }
	}
	else if(num2>num1)
	{
	   if(num2>num3)
		{
			printf("%d is biggest",num2);
		}
	}
	else if(num3>num2)
	{
		if(num3>num1)
		{
			printf("%d is biggest",num3);
		}
	}
	else
	{
		printf("Do not use the same Number");
	}
}

