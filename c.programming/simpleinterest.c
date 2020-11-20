#include<stdio.h>
main()
{
	float SI,P,N,R;
	printf("enter yor priciple amount ");
	scanf("%f",&P);
	printf(" enter your number of the years");
	scanf("%f",&N);
	printf("enter your rate of interest");
	scanf("%f",&R);
	SI=(P*R*N)/100;
	printf("SI= %f",SI);
	
}
