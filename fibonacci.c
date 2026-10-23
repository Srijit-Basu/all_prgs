#include<stdio.h>
int main()
{
	int n,count=0,f1=0,f2=1,f3;//Adding counter to keep track of terms
	//Input validation loop
	do
	{
		printf("\nEnter the number of terms to be printed(n>0)");
		scanf("%d",&n);
		if(n<0)
			printf("Input cannot be negative");
	}while(n<0);
	printf("\nFibonacci series: ");
	//Looping till we print n terms 
	while(count<n)
	{
		if(count==0)
			printf("%d, ",f1);
		else if(count==1)
			printf("%d, ",f2);
		else
		{
			f3=f1+f2;
			f1=f2;
			f2=f3;
			printf("%d, ",f3);
		}
		count++; //Moving to the next term
	}//End of while loop
	printf("\n");
	return 0;
}//End of main
	
