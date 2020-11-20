#include<stdio.h>
main()

{
 int a,b,result,choice;
printf("enter your value for a :");
scanf("%d",&a);
printf("enter the vaule for b :");
scanf("%d",&b);
printf("enter 1 for addition \n");
printf(" enter 2 for subisaction\n ");
printf("enter 3 for multiplication\n");
printf("enter 4 for sicsion\n");
scanf("%d",&choice);
switch(choice)

{
	case 1:
		result=a+b;
		printf("the addition is %d",result);
		break;
	case 2:
		result=a-b;
		printf("the subisaction is %d",result);
		break;
	case 3:
		result=a*b;
		printf("the multiplication is %d",result);
		break;
	case 4:
		result=a/b;
		printf("the division is %d",result);
		break;
	default:
	printf("check any errors");
		
}

	
}


