#include<stdio.h>
main()
{
	int mark;
	printf("enter your mark");
	scanf("%d" ,&mark);
	if(mark>=85 && mark<100)
	{
	printf("Grade A");	
	}
	else if (mark>=65 && mark<85)
	{
		printf("Grade B");
	}
	else if ( mark>=50 && mark<65 )
	{
		printf("Grade E");
	}
	else if(mark<50)
	{
		printf("FAIL");
	}
	else
	{
		printf("enter your value again");
	}
	
	
}
