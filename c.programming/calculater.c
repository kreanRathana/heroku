#include<stdio.h>
 main()
{
		char n;
		int a,b,c,d,i=1;
		printf("enter the value");
		scanf("%d %s %d",&a,&n,&b);
		switch(n)
		{
		case '+':
			c=a+b;
			printf("the answer is %d\n",c);
			break;
		case '-':
			c=a-b;
			printf("the answer is %d\n",c);
			break;
		case '*':
			c=a*b;
			printf("the answer is %d\n",c);
			break;	
		case'/':
			c=a/b;
			printf("the asnwer is %d\n",c);
			break;
			default:
			printf("error");
		}
	
  
}
