#include <stdio.h>
int main() 
{
    	int n, i, isPrime = 1; // isPrime flag: 1 means true, 0 means false
    	// Input from the user
    	do
    	{
    		printf("\nEnter a positive integer: ");
    		scanf("%d", &n);
    		if(n<0)
    		{
    			printf("\nInput cannot be negative");
    		}	
    	}while(n<0);		
    	// 0 and 1 are not prime numbers
    	if (n <= 1) 
    	{
        		isPrime = 0;
    	}
    	else
    	{
          	// Loop from 2 up to the square root of n
    		for (i = 2; i<=n/i; i++)
    		{
          		// If n is perfectly divisible by i, it's not prime
          		if (n % i == 0)
          		{
          	          	isPrime = 0; // Set flag to false
          	      		break;       // Exit loop early for efficiency
			}
		}	
	}

    	// Output the result based on the flag value
    	if (isPrime == 1)
    	{
          	printf("%d is a prime number.\n", n);
	}
	else 
	{
          	printf("%d is not a prime number.\n", n);
	}
	
    	return 0;
}

