#include<stdio.h>
main()
{
	float sum,average,ss,sci,eng;
	printf("Enter your S.S marks");
	scanf("%f",&ss);
	printf("Enter your Science marks");
	scanf("%f",&sci);
	printf("Enter your English marks");
	scanf("%f",&eng);
	
	sum=ss+sci+eng;
	average=sum*100/300;
	printf("The average of your marks is=%.2f",average);
	
}