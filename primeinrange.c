#include<stdio.h>
int isPrime(int num)//Function to check prime numbers
{
	if(num<=1)//Numbers less than or equal to 1 is not prime 
		return 0;
	//checking for factors upto square root of num	
	for (int i=2;i*i<=num;i++)
	{
		if(num%i==0)
			return 0;
	}		 	
	return 1;//No factors found it is prime 
}
int main()
{
	int lower,upper,temp,count=0;
	//Taking input of range from the user 
	printf("\nEnter lower boundary of range: ");
	scanf("%d",&lower);
	printf("\nEnter upper boundary of the rang: ");
	scanf("%d",&upper);
	//Swapping the boundaries if lower boundary is greater than upper boundary
	if(lower>upper)
	{
		temp=lower;
		lower=upper;
		upper=temp;
	}
	printf("\nPrime numbers between %d and %d are:\n",lower,upper);
	//Iterating through the range and checking each number
	for(int i= lower;i<=upper;i++)
	{
		if(isPrime(i))
		{
			printf("%d, ",i);
			count++;
		}
	}
	printf("\n\nTotal prime numbers found: %d\n",count);
	return 0;//End of main
}					
