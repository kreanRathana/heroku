
#include<stdio.h>
main()
{
	char litter;
	printf("enter your latter ");
	scanf ("%c",&litter);
	switch(litter)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		printf("the latter is vowel");	
	break;
	default:
		printf("the latter is consinant");
	}

	
}

	
	
