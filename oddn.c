#include<stdio.h>
int main()
{
	int i,n;
	do
	{
		printf("\nEnter a positive integer number");
		scanf("%d",&n);
		if(n<0)
			printf("\n Negative input is not allowed");
	}while(n<0);
	printf("Odd numbers in range 1 to %d:\n",n);
	if(n==0)
		printf("Input not in range");
	for (i=1;i<=n;i+=2)
	{
		if(i>=n-1)
			printf("%d",i);
		else
			printf("%d, ",i);	
	}
	printf("\n");		
	return 0;
}		
