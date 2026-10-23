#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter a positive integer value(>=10)");
	if(scanf("%d",&num)!=1 || num<0);
	{
		printf("INVALID INPUT !! Enter a positive integer value greater than 0 only. \n");
	}
	
	printf("\n \t%s \t%s \t%s \n","Number","Square","Cube");
	printf("----------------------------------------------------- \n");
	for (int i=1;i<=num;i++)
	{
		printf("  \t%d \t%d \t%d \n",i,i*i,i*i*i);
	}	
	return 0;
}//End of main	
