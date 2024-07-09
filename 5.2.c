#include<stdio.h>
main()
{
	int num;
	printf("Enter any Number=");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("This number is Negative");
	}
	else if(num==0)
	{
		printf("This number is Neutral");
	}
	else 
	{
		printf("This number is Positive ");
	}
	
	
}